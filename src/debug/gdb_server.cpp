/*
 *  Copyright (C) 2024-2026  The DOSBox Staging Team
 *
 *  GDB remote serial protocol (RSP) stub for the DOSBox debugger.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "dosbox.h"

#if C_GDBSERVER

#include "gdb_server.h"

#include <cerrno>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <string_view>

#if defined(WIN32)
	#include <winsock2.h>
	#include <ws2tcpip.h>
#else
	#include <arpa/inet.h>
	#include <fcntl.h>
	#include <netinet/in.h>
	#include <netinet/tcp.h>
	#include <sys/socket.h>
	#include <unistd.h>
#endif

#include <memory>

#include "../cpu/lazyflags.h"
#include "callback.h"
#include "cpu.h"
#include "debug.h"
#include "paging.h"
#include "mem.h"
#include "regs.h"
#include "timer.h"
#include "video.h"

// --- Minimal portability shim over BSD sockets / Winsock -------------------

using socket_t                         = GDBServer::Socket;
constexpr socket_t invalid_socket      = GDBServer::invalid_socket;

#if defined(WIN32)
// recv/send return SSIZE_T under Winsock; ssize_t is a POSIX type.
// Winsock also lacks socklen_t (it uses int for accept()).
using sock_ssize_t                  = SSIZE_T;
using socklen_t                     = int;
constexpr int socket_would_block      = WSAEWOULDBLOCK;
#define sock_close(fd)                closesocket(fd)
#define sock_errno()                  WSAGetLastError()

static bool winsock_started = false;
static void winsock_startup()
{
	if (winsock_started)
		return;
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
		winsock_started = true;
}

static void set_nonblocking(socket_t fd)
{
	u_long mode = 1;
	ioctlsocket(fd, FIONBIO, &mode);
}

#else
using sock_ssize_t                = ssize_t;
constexpr int socket_would_block  = EWOULDBLOCK;
#define sock_close(fd)            ::close(fd)
#define sock_errno()              errno

static void winsock_startup() {}

static void set_nonblocking(socket_t fd)
{
	const int flags = fcntl(fd, F_GETFL, 0);
	fcntl(fd, F_SETFL, flags | O_NONBLOCK);
}
#endif

#ifndef MSG_NOSIGNAL
#define MSG_NOSIGNAL 0
#endif

static bool sock_would_block()
{
	const int err = sock_errno();
#if EAGAIN != EWOULDBLOCK && !defined(WIN32)
	return err == socket_would_block || err == EAGAIN;
#else
	return err == socket_would_block;
#endif
}

static sock_ssize_t sock_read(socket_t fd, char* buf, size_t len)
{
	return recv(fd, buf, static_cast<int>(len), 0);
}

static void sock_write(socket_t fd, const char* buf, size_t len)
{
	// Best effort: on a short write or a vanished peer the client times
	// out and reconnects; there is no meaningful recovery here.
	const sock_ssize_t unused = send(fd, buf, static_cast<int>(len), MSG_NOSIGNAL);
	(void)unused;
}

// --- Machine-side state (the glue lives at the bottom of this file) ---------

static std::unique_ptr<GDBServer> gdb_server = {};
// The emulated CPU is halted and the machine loop is DEBUG_GdbLoop
static bool gdb_paused = false;
// A stop reply still has to be sent for the current halt (set when a
// breakpoint callback re-enters the paused state mid-'step'/'continue')
static bool gdb_stop_reply_pending = false;
// Monitor 'breakexec' arm state
static bool gdb_break_on_exec = false;

// Guest memory access (defined with the machine glue at the bottom of
// this file; transparent to INT3 breakpoint patches)
static bool gdb_read_memory(PhysPt addr, uint8_t* val);
static bool gdb_write_memory(PhysPt addr, uint8_t val);

// --- Packet helpers ---------------------------------------------------------

static uint8_t hex_digit(const char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return 0;
}

static bool is_hex_digit(char c)
{
	return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') ||
	       (c >= 'A' && c <= 'F');
}

// Parses a hex number; returns false if no digits present.
static bool parse_hex(const std::string& s, size_t pos, size_t len,
                      uint32_t& out)
{
	out      = 0;
	bool any = false;
	for (size_t i = 0; i < len && pos + i < s.size(); ++i) {
		const char c = s[pos + i];
		if (!is_hex_digit(c))
			return false;
		out = (out << 4) | hex_digit(c);
		any = true;
	}
	return any;
}

static bool parse_hex(const std::string& s, uint32_t& out)
{
	return parse_hex(s, 0, s.size(), out);
}

static std::string hex_encode(const void* data, const size_t len)
{
	static constexpr char digits[] = "0123456789abcdef";
	std::string out;
	out.reserve(len * 2);
	auto* bytes = static_cast<const uint8_t*>(data);
	for (size_t i = 0; i < len; ++i) {
		out += digits[bytes[i] >> 4];
		out += digits[bytes[i] & 0x0f];
	}
	return out;
}

static std::string hex_decode(const std::string& in)
{
	std::string out;
	out.reserve(in.size() / 2);
	for (size_t i = 0; i + 1 < in.size(); i += 2) {
		out += static_cast<char>((hex_digit(in[i]) << 4) |
		                         hex_digit(in[i + 1]));
	}
	return out;
}

// --- Socket lifecycle --------------------------------------------------------

bool GDBServer::Start()
{
	if (IsRunning())
		return true;

	winsock_startup();

	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (server_fd == invalid_socket) {
		LOG_F(ERROR, "GDB server: socket() failed: %d", sock_errno());
		return false;
	}

	const int opt = 1;
	setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR,
	           reinterpret_cast<const char*>(&opt), sizeof(opt));

	// Only listen on the loopback interface: the stub grants full control
	// over the emulated machine, so exposing it on the network would be a
	// security risk.
	sockaddr_in address = {};
	address.sin_family  = AF_INET;
	address.sin_port    = htons(port);
	address.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

	if (bind(server_fd, reinterpret_cast<sockaddr*>(&address),
	         sizeof(address)) < 0) {
		LOG_F(ERROR, "GDB server: bind() on port %u failed: %d", port,
		      sock_errno());
		sock_close(server_fd);
		server_fd = invalid_socket;
		return false;
	}

	if (listen(server_fd, 1) < 0) {
		LOG_F(ERROR, "GDB server: listen() failed: %d", sock_errno());
		sock_close(server_fd);
		server_fd = invalid_socket;
		return false;
	}

	set_nonblocking(server_fd);

	LOG_F(INFO, "GDB server: listening on 127.0.0.1:%u", port);
	return true;
}

void GDBServer::Stop()
{
	CloseClient();
	if (server_fd != invalid_socket) {
		sock_close(server_fd);
		server_fd = invalid_socket;
	}
}

void GDBServer::CloseClient()
{
	if (client_fd != invalid_socket) {
		sock_close(client_fd);
		client_fd = invalid_socket;
	}
	recv_buffer.clear();
	last_sent.clear();
	// A new connection is a new session: the client renegotiates
	// QStartNoAckMode, so acknowledgements must be back on.
	noack_mode = false;
}

bool GDBServer::TryAccept()
{
	if (server_fd == invalid_socket)
		return false;

	sockaddr_in address = {};
	socklen_t addrlen   = sizeof(address);
	const socket_t fd =
	        accept(server_fd, reinterpret_cast<sockaddr*>(&address), &addrlen);
	if (fd == invalid_socket) {
		if (!sock_would_block())
			LOG_F(ERROR, "GDB server: accept() failed: %d", sock_errno());
		return false;
	}

	// Mutually exclusive with the built-in curses debugger UI: the two
	// frontends would fight over breakpoints and the run state.
	if (DEBUG_IsInteractiveDebuggerActive()) {
		LOG_F(WARNING, "GDB server: rejecting client, the internal debugger is active");
		sock_write(fd, "$E99#b7", 7); // 'E'+'9'+'9' == 0xb7
		sock_close(fd);
		return false;
	}

	// RSP is strictly request/response with tiny packets; Nagle's
	// algorithm adds ~40ms to every round-trip for no benefit here.
	const int nodelay = 1;
	setsockopt(fd, IPPROTO_TCP, TCP_NODELAY,
	           reinterpret_cast<const char*>(&nodelay), sizeof(nodelay));

	// Prevent SIGPIPE on macOS/BSD (MSG_NOSIGNAL does not exist there)
#if defined(SO_NOSIGPIPE)
	setsockopt(fd, SOL_SOCKET, SO_NOSIGPIPE,
	           reinterpret_cast<const char*>(&nodelay), sizeof(nodelay));
#endif

	set_nonblocking(fd);

	if (client_fd != invalid_socket) {
		// A superseding connection arrived while a client was still
		// attached (e.g. it died before its FIN was seen); drop the
		// stale session so protocol state stays in sync.
		LOG_F(INFO, "GDB server: superseding previous client connection");
		CloseClient();
	}

	client_fd = fd;
	recv_buffer.clear();
	last_sent.clear();
	noack_mode = false;

	LOG_F(INFO, "GDB server: client connected from %s:%u",
	      inet_ntoa(address.sin_addr), ntohs(address.sin_port));
	return true;
}

// --- Poll loop ----------------------------------------------------------------

GDBAction GDBServer::Poll()
{
	if (server_fd == invalid_socket)
		return GDBAction::None;

	if (client_fd == invalid_socket) {
		TryAccept();
		return GDBAction::None;
	}

	// accept() is non-blocking; this is a cheap check that lets a fresh
	// connection replace a client whose disconnect was not noticed yet.
	// A replacement is reported as a disconnect so the caller cleans up
	// state left by the previous session (e.g. software breakpoints).
	if (TryAccept())
		return GDBAction::Disconnect;

	if (!ReceiveData()) {
		LOG_F(INFO, "GDB server: client disconnected");
		CloseClient();
		return GDBAction::Disconnect;
	}

	while (HasCompletePacket()) {
		const std::string packet = ExtractPacket();
		if (packet.empty())
			continue;
		const GDBAction action = ProcessCommand(packet);
		if (action != GDBAction::None)
			return action;
	}
	return GDBAction::None;
}

bool GDBServer::ReceiveData()
{
	char buf[1024];
	while (true) {
		const sock_ssize_t n = sock_read(client_fd, buf, sizeof(buf));
		if (n > 0) {
			recv_buffer.append(buf, static_cast<size_t>(n));
			continue;
		}
		if (n == 0)
			return false; // peer closed the connection
		if (sock_would_block())
			return true;
		if (sock_errno() == EINTR)
			continue;
		return false;
	}
}

// Removes leading ACK/NACK bytes and any garbage between packets; on a
// NACK the last packet sent is retransmitted.
void GDBServer::DiscardInterPacket()
{
	while (!recv_buffer.empty()) {
		const char c = recv_buffer[0];
		if (c == '+') {
			recv_buffer.erase(0, 1);
		} else if (c == '-') {
			if (!last_sent.empty())
				sock_write(client_fd, last_sent.data(),
				           last_sent.size());
			recv_buffer.erase(0, 1);
		} else {
			break;
		}
	}
}

bool GDBServer::HasCompletePacket()
{
	DiscardInterPacket();

	const size_t start = recv_buffer.find('$');
	// Ctrl-C interrupt byte: it is sent bare (never inside a packet), so
	// any 0x03 arriving before the next '$' is an interrupt request.
	if (recv_buffer.find(0x03, 0) < start)
		return true;

	if (start == std::string::npos) {
		// No packet start in the buffer: it can only contain junk or
		// stray acks, so there is nothing to wait for.
		recv_buffer.clear();
		return false;
	}
	const size_t hash = recv_buffer.find('#', start);
	if (hash == std::string::npos) {
		// A '$' without a terminating '#' is an unfinished packet.
		// Drop it if it already exceeds the packet bound; otherwise
		// wait for the rest to arrive.
		if (recv_buffer.size() - start > GDB_MAX_IN_PACKET) {
			LOG_F(WARNING, "GDB server: oversized packet dropped");
			recv_buffer.erase(0, start + 1);
		}
		return false;
	}
	// A '#' that lands beyond the bound belongs to a later packet (or
	// the packet is oversized): framing only this '$' as the start would
	// swallow a following packet and corrupt its checksum, so drop just
	// the '$' and let the next pass resynchronise.
	if (hash - start > GDB_MAX_IN_PACKET) {
		LOG_F(WARNING, "GDB server: oversized packet dropped");
		recv_buffer.erase(0, start + 1);
		return false;
	}
	return recv_buffer.size() >= hash + 3;
}

std::string GDBServer::ExtractPacket()
{
	DiscardInterPacket();

	const size_t start = recv_buffer.find('$');
	// Ctrl-C interrupt: a bare 0x03 before the next packet start,
	// preceded by any amount of junk already due to be discarded.
	const size_t ctrlc = recv_buffer.find(0x03, 0);
	if (ctrlc < start) {
		recv_buffer.erase(0, ctrlc + 1);
		return "\x03";
	}

	if (start == std::string::npos)
		return {};
	if (start > 0)
		recv_buffer.erase(0, start); // discard garbage before '$'

	const size_t hash = recv_buffer.find('#');
	if (hash == std::string::npos || recv_buffer.size() < hash + 3)
		return {}; // incomplete

	const std::string packet  = recv_buffer.substr(1, hash - 1);
	const uint8_t received_cs = (hex_digit(recv_buffer[hash + 1]) << 4) |
	                            hex_digit(recv_buffer[hash + 2]);
	recv_buffer.erase(0, hash + 3);

	uint8_t checksum = 0;
	for (const char c : packet)
		checksum += static_cast<uint8_t>(c);

	if (received_cs != checksum) {
		LOG_F(WARNING, "GDB server: checksum mismatch, got %#02x expected %#02x",
		      received_cs, checksum);
		if (!noack_mode)
			sock_write(client_fd, "-", 1);
		return {};
	}

	if (!noack_mode)
		sock_write(client_fd, "+", 1);

	// Undo '}' escapes: '}' followed by (byte ^ 0x20). Required for binary
	// payloads such as the 'X' memory-write packet.
	std::string unescaped;
	unescaped.reserve(packet.size());
	for (size_t i = 0; i < packet.size(); ++i) {
		if (packet[i] == '}' && i + 1 < packet.size()) {
			unescaped += static_cast<char>(packet[i + 1] ^ 0x20);
			++i;
		} else {
			unescaped += packet[i];
		}
	}
	return unescaped;
}

void GDBServer::SendPacket(const std::string& packet)
{
	if (client_fd == invalid_socket)
		return;

	uint8_t checksum = 0;
	for (const char c : packet)
		checksum += static_cast<uint8_t>(c);

	char trailer[4];
	snprintf(trailer, sizeof(trailer), "#%02x", checksum);
	last_sent = "$" + packet + trailer;
	sock_write(client_fd, last_sent.data(), last_sent.size());
}

void GDBServer::SendStopReply(int signal)
{
	char reply[4];
	snprintf(reply, sizeof(reply), "S%02x", signal & 0xff);
	SendPacket(reply);
}

// --- Register access -----------------------------------------------------------

// i386 'g' packet order:
// eax ecx edx ebx esp ebp esi edi eip eflags cs ss ds es fs gs

void GDBServer::HandleReadRegister(const std::string& cmd)
{
	uint32_t reg_num = 0;
	if (cmd.size() < 2 || !parse_hex(cmd, 1, cmd.size() - 1, reg_num) ||
	    reg_num > 15) {
		SendPacket("E01");
		return;
	}
	const uint32_t value = GetRegister(static_cast<int>(reg_num));

	// Register values are sent little-endian, two hex digits per byte
	char buf[9];
	snprintf(buf, sizeof(buf), "%02x%02x%02x%02x", value & 0xff,
	         (value >> 8) & 0xff, (value >> 16) & 0xff, value >> 24);
	SendPacket(buf);
}

void GDBServer::HandleReadRegisters()
{
	std::string reply;
	reply.reserve(16 * 8);
	for (int i = 0; i < 16; ++i) {
		const uint32_t value = GetRegister(i);
		char buf[9];
		snprintf(buf, sizeof(buf), "%02x%02x%02x%02x", value & 0xff,
		         (value >> 8) & 0xff, (value >> 16) & 0xff, value >> 24);
		reply += buf;
	}
	SendPacket(reply);
}

void GDBServer::HandleWriteRegisters(const std::string& hex)
{
	// Exactly sixteen 32-bit registers, two hex digits per byte
	if (hex.size() % 8 != 0 || hex.size() / 8 > 16) {
		SendPacket("E01");
		return;
	}

	const size_t count = hex.size() / 8;
	uint32_t values[16] = {};
	for (size_t i = 0; i < count; ++i) {
		uint32_t value = 0;
		for (int b = 0; b < 4; ++b) {
			const size_t p = i * 8 + b * 2;
			value |= (hex_digit(hex[p]) << 4 | hex_digit(hex[p + 1]))
			         << (b * 8);
		}
		values[i] = value;
	}

	// Write the segment registers before EIP so a flat EIP is translated
	// against the new CS, not the old one.
	for (size_t i = count; i-- > 0;) {
		if (i >= 10)
			SetRegister(static_cast<int>(i), values[i]);
	}
	for (size_t i = 0; i < count && i < 10; ++i)
		SetRegister(static_cast<int>(i), values[i]);

	SendPacket("OK");
}

void GDBServer::HandleWriteRegister(const std::string& cmd)
{
	const size_t eq = cmd.find('=');
	uint32_t reg_num = 0, value = 0;
	if (eq == std::string::npos ||
	    !parse_hex(cmd, 1, eq - 1, reg_num) || reg_num > 15 ||
	    !parse_hex(cmd, eq + 1, cmd.size() - eq - 1, value)) {
		SendPacket("E01");
		return;
	}
	// 'P' sends the value little-endian like 'G'
	const uint32_t le = ((value & 0xff) << 24) | ((value & 0xff00) << 8) |
	                    ((value >> 8) & 0xff00) | (value >> 24);
	SetRegister(static_cast<int>(reg_num), le);
	SendPacket("OK");
}

// --- Memory access -------------------------------------------------------------

void GDBServer::HandleReadMemory(const std::string& args)
{
	const size_t comma = args.find(',');
	uint32_t address = 0, length = 0;
	if (comma == std::string::npos ||
	    !parse_hex(args, 0, comma, address) ||
	    !parse_hex(args, comma + 1, args.size() - comma - 1, length)) {
		SendPacket("E01");
		return;
	}

	if (length > GDB_MAX_MEMORY_BYTES) {
		SendPacket("E01");
		return;
	}

	std::string reply;
	reply.reserve(length * 2);
	uint32_t i = 0;
	for (; i < length; ++i) {
		const uint32_t addr = address + i;
		if (i != 0 && addr < address)
			break; // wrapped past 0xFFFFFFFF
		uint8_t value = 0;
		if (!gdb_read_memory(addr, &value))
			break;
		char buf[3];
		snprintf(buf, sizeof(buf), "%02x", value);
		reply += buf;
	}

	// A short reply is legal RSP and tells the client where readable
	// memory ends. Only fail outright when nothing could be read.
	if (i == 0 && length != 0) {
		SendPacket("E01");
		return;
	}
	SendPacket(reply);
}

void GDBServer::HandleWriteMemoryHex(const std::string& args)
{
	const size_t comma = args.find(',');
	const size_t colon = args.find(':');
	uint32_t address = 0, length = 0;
	if (comma == std::string::npos || colon == std::string::npos ||
	    colon < comma ||
	    !parse_hex(args, 0, comma, address) ||
	    !parse_hex(args, comma + 1, colon - comma - 1, length)) {
		SendPacket("E01");
		return;
	}

	const std::string payload = args.substr(colon + 1);
	if (payload.size() != static_cast<size_t>(length) * 2) {
		SendPacket("E01");
		return;
	}
	if (length > GDB_MAX_MEMORY_BYTES ||
	    (length && length - 1 > 0xFFFFFFFFu - address)) {
		SendPacket("E01");
		return;
	}

	const std::string data = hex_decode(payload);
	for (size_t i = 0; i < data.size(); ++i) {
		if (!gdb_write_memory(address + static_cast<uint32_t>(i),
		                          static_cast<uint8_t>(data[i]))) {
			SendPacket("E01");
			return;
		}
	}
	SendPacket("OK");
}

void GDBServer::HandleWriteMemoryBin(const std::string& args)
{
	// 'X addr,len:binary data' - the payload has already been unescaped
	// by ExtractPacket.
	const size_t comma = args.find(',');
	const size_t colon = args.find(':');
	uint32_t address = 0, length = 0;
	if (comma == std::string::npos || colon == std::string::npos ||
	    colon < comma ||
	    !parse_hex(args, 0, comma, address) ||
	    !parse_hex(args, comma + 1, colon - comma - 1, length)) {
		SendPacket("E01");
		return;
	}

	const std::string data = args.substr(colon + 1);
	if (data.size() != length || length > GDB_MAX_MEMORY_BYTES ||
	    (length && length - 1 > 0xFFFFFFFFu - address)) {
		SendPacket("E01");
		return;
	}

	for (size_t i = 0; i < data.size(); ++i) {
		if (!gdb_write_memory(address + static_cast<uint32_t>(i),
		                          static_cast<uint8_t>(data[i]))) {
			SendPacket("E01");
			return;
		}
	}
	SendPacket("OK");
}

// --- Breakpoints --------------------------------------------------------------

void GDBServer::HandleBreakpoint(const std::string& cmd)
{
	const char type    = cmd[0]; // 'Z' insert, 'z' remove
	const char kind_ch = cmd.size() > 1 ? cmd[1] : '?';
	const size_t comma = cmd.find(',');

	uint32_t address = 0;
	const size_t comma2 = cmd.find(',', comma + 1);
	if (comma == std::string::npos || comma2 == std::string::npos ||
	    !parse_hex(cmd, comma + 1, comma2 - comma - 1, address)) {
		SendPacket("E01");
		return;
	}

	// Only software execution breakpoints (type 0) are supported; an
	// empty reply for the others tells GDB they are unavailable.
	if (kind_ch != '0') {
		SendPacket("");
		return;
	}

	const bool ok = (type == 'Z') ? DEBUG_BpAddPatchless(address)
	                              : DEBUG_BpRemovePhys(address);
	SendPacket(ok ? "OK" : "E01");
}

// --- Queries -------------------------------------------------------------------

void GDBServer::SendMonitorText(const std::string& text)
{
	// Split into console-output packets on line boundaries
	size_t pos = 0;
	while (pos < text.size()) {
		size_t end = text.find('\n', pos);
		end = (end == std::string::npos) ? text.size() : end + 1;
		SendPacket("O" + hex_encode(text.data() + pos, end - pos));
		pos = end;
	}
}

void GDBServer::HandleMonitorCommand(const std::string& hex)
{
	const std::string cmdline = hex_decode(hex);

	std::string out;
	const auto fail = [&](const char* msg) {
		out  = msg;
		out += "\n";
	};

	// Tokenize on whitespace
	const auto arg_start = cmdline.find_first_not_of(' ');
	const std::string_view args =
	        arg_start == std::string::npos
	                ? std::string_view {}
	                : std::string_view(cmdline).substr(arg_start);

	const size_t sp    = args.find_first_of(" \t");
	const auto command = std::string(args.substr(0, sp));
	const auto rest    = sp == std::string_view::npos
	                             ? std::string {}
	                             : std::string(args.substr(sp + 1));

	if (command == "help") {
		out = "DOSBox GDB monitor commands:\n"
		      "  help                     - this text\n"
		      "  info                     - show emulated CPU state\n"
		      "  bpint NN [AH] [AL]       - break on interrupt NN (hex), "
		      "optionally matching AH/AL\n"
		      "  eipmode [flat|offset]    - show/set EIP presentation mode\n"
		      "  breakexec [on|off]       - stop when a new program starts\n";
	} else if (command == "info") {
		const char* mode = (cpu.pmode && !(reg_flags & FLAG_VM))
		                         ? "protected"
		                         : (reg_flags & FLAG_VM) ? "v86" : "real";
		char buf[160];
		snprintf(buf, sizeof(buf),
		         "Mode: %s, CS:EIP = %04x:%08x (linear %08x), EIP mode: %s\n",
		         mode, SegValue(cs), reg_eip,
		         SegPhys(cs) + reg_eip, eip_flat ? "flat" : "offset");
		out = buf;
	} else if (command == "eipmode") {
		if (rest == "offset")
			eip_flat = false;
		else if (rest == "flat")
			eip_flat = true;
		char buf[80];
		snprintf(buf, sizeof(buf), "EIP mode: %s\n",
		         eip_flat ? "flat (linear)" : "offset (raw EIP)");
		out = buf;
	} else if (command == "breakexec") {
		gdb_break_on_exec = (rest != "off");
		out = rest != "off" ? "Will stop on next program start\n"
		                    : "Break-on-exec disabled\n";
	} else if (command == "bpint") {
		// Up to three hex words: interrupt number, optional AH and AL
		uint32_t vals[3] = {0x100, 0x100, 0x100};
		size_t parsed    = 0;
		std::istringstream stream(rest);
		std::string token;
		while (parsed < 3 && (stream >> token)) {
			if (!parse_hex(token, vals[parsed])) {
				parsed = 0;
				break;
			}
			++parsed;
		}
		if (parsed >= 1) {
			const bool ok = DEBUG_BpAddIntBp(
			        static_cast<uint8_t>(vals[0]),
			        static_cast<uint16_t>(vals[1]),
			        static_cast<uint16_t>(vals[2]));
			if (ok) {
				char buf[80];
				snprintf(buf, sizeof(buf),
				         "Interrupt breakpoint set on INT %02X\n",
				         vals[0]);
				out = buf;
			} else {
				fail("Failed to set interrupt breakpoint");
			}
		} else {
			fail("Usage: monitor bpint NN [AH] [AL]  (values in hex)");
		}
	} else {
		fail("Unknown monitor command. Try 'monitor help'");
	}

	if (!out.empty())
		SendMonitorText(out);
	SendPacket("OK");
}

void GDBServer::HandleMemorySearch(const std::string& args)
{
	// qSearch:memory:addr;len;hex-pattern
	const size_t semi1 = args.find(';');
	const size_t semi2 = args.find(';', semi1 + 1);
	uint32_t address = 0, length = 0;
	if (semi1 == std::string::npos || semi2 == std::string::npos ||
	    !parse_hex(args, 0, semi1, address) ||
	    !parse_hex(args, semi1 + 1, semi2 - semi1 - 1, length)) {
		SendPacket("E01");
		return;
	}

	const std::string pattern = hex_decode(args.substr(semi2 + 1));
	if (pattern.empty() || length < pattern.size()) {
		SendPacket("0");
		return;
	}
	// Bound the work a search may do in one go; the range is
	// client-controlled and this runs on the emulation thread.
	if (length > 0x1000000)
		length = 0x1000000;

	const size_t plen = pattern.size();
	const uint32_t last = address + length - static_cast<uint32_t>(plen);
	for (uint32_t addr = address; addr <= last && addr >= address; ++addr) {
		size_t i = 0;
		for (; i < plen; ++i) {
			uint8_t value = 0;
			if (!gdb_read_memory(addr + static_cast<uint32_t>(i), &value) ||
			    value != static_cast<uint8_t>(pattern[i]))
				break;
		}
		if (i == plen) {
			char buf[12];
			snprintf(buf, sizeof(buf), "1,%x", addr);
			SendPacket(buf);
			return;
		}
	}
	SendPacket("0");
}

static bool starts_with(const std::string& s, const char* prefix)
{
	const size_t len = strlen(prefix);
	return s.size() >= len && s.compare(0, len, prefix) == 0;
}

void GDBServer::HandleQuery(const std::string& args)
{
	if (starts_with(args, "Supported")) {
		char pkt[128];
		snprintf(pkt, sizeof(pkt),
		         "PacketSize=%x;vContSupported+;QStartNoAckMode+",
		         GDB_MAX_PACKET_SIZE);
		SendPacket(pkt);
	} else if (args == "StartNoAckMode") {
		noack_mode = true;
		SendPacket("OK");
	} else if (starts_with(args, "PassSignals") ||
	           starts_with(args, "ProgramSignals") ||
	           starts_with(args, "ThreadEvents") ||
	           starts_with(args, "DisableRandomization") ||
	           starts_with(args, "NonStop")) {
		// Not applicable, but harmless to acknowledge ('QNonStop' gets an
		// empty reply so the client falls back to all-stop mode)
		if (starts_with(args, "NonStop"))
			SendPacket("");
		else
			SendPacket("OK");
	} else if (starts_with(args, "Attached")) {
		SendPacket("1"); // attached to an existing "process"
	} else if (starts_with(args, "fThreadInfo")) {
		SendPacket("m1");
	} else if (starts_with(args, "sThreadInfo")) {
		SendPacket("l");
	} else if (starts_with(args, "ThreadExtraInfo")) {
		static const char info[] = "Emulated x86 CPU";
		SendPacket(hex_encode(info, strlen(info)));
	} else if (args == "C") {
		SendPacket("QC1");
	} else if (starts_with(args, "Symbol")) {
		SendPacket("OK"); // we do not need any symbols
	} else if (starts_with(args, "Offsets")) {
		// All addresses are absolute physical addresses
		SendPacket("Text=0;Data=0;Bss=0");
	} else if (starts_with(args, "Rcmd,")) {
		// qRcmd,<hex-encoded command>
		HandleMonitorCommand(args.substr(5));
	} else if (starts_with(args, "Search:memory:")) {
		HandleMemorySearch(args.substr(14));
	} else if (starts_with(args, "Xfer:") || starts_with(args, "T")) {
		// Other transfers and tracepoint queries are not supported
		SendPacket("");
	} else {
		SendPacket("");
	}
}

// --- Command dispatch ---------------------------------------------------------

GDBAction GDBServer::HandleVCommand(const std::string& cmd)
{
	if (cmd == "vMustReplyEmpty")
		SendPacket("");
	else if (cmd == "vCont?")
		SendPacket("vCont;c;s");
	else if (cmd.compare(0, 5, "vCont") == 0 && cmd.size() > 6) {
		// vCont;action[:tid][,action[:tid]]*
		const char action = cmd[6];
		if (action == 'c' || action == 'C')
			return GDBAction::Continue;
		if (action == 's' || action == 'S')
			return GDBAction::Step;
		SendPacket("");
	} else if (cmd.compare(0, 5, "vKill") == 0) {
		SendPacket("OK");
		// Kill ends the session; close the socket so the client sees
		// a clean shutdown instead of waiting on an open connection.
		CloseClient();
		return GDBAction::Disconnect;
	} else {
		SendPacket("");
	}
	return GDBAction::None;
}

GDBAction GDBServer::ProcessCommand(const std::string& cmd)
{
	if (cmd.empty())
		return GDBAction::None;

	// Ctrl-C interrupt
	if (cmd == "\x03") {
		SendStopReply();
		return GDBAction::Stop;
	}

	// Dispatch on the first character
	switch (cmd[0]) {
	case '?': // halt reason
		SendStopReply();
		return GDBAction::Stop;

	case '!': // extended mode: we are a bare stub, always "extended"
		SendPacket("OK");
		return GDBAction::None;

	case 'g': HandleReadRegisters(); return GDBAction::None;
	case 'G': HandleWriteRegisters(cmd.substr(1)); return GDBAction::None;
	case 'p': HandleReadRegister(cmd); return GDBAction::None;
	case 'P': HandleWriteRegister(cmd); return GDBAction::None;
	case 'm': HandleReadMemory(cmd.substr(1)); return GDBAction::None;
	case 'M': HandleWriteMemoryHex(cmd.substr(1)); return GDBAction::None;
	case 'X': HandleWriteMemoryBin(cmd.substr(1)); return GDBAction::None;
	case 'Z':
	case 'z': HandleBreakpoint(cmd); return GDBAction::None;
	case 'q':
	case 'Q': HandleQuery(cmd.substr(1)); return GDBAction::None;
	case 'v': return HandleVCommand(cmd);
	case 'H': SendPacket("OK"); return GDBAction::None; // thread select
	case 'T': SendPacket("OK"); return GDBAction::None; // thread alive
	case 'D':
		// Detach: acknowledge, then drop the connection; GDB closes
		// its side right after anyway.
		SendPacket("OK");
		CloseClient();
		return GDBAction::Disconnect;
	case 'k':
		// Kill: no reply is defined - just terminate the session.
		CloseClient();
		return GDBAction::Disconnect;
	case 'R': // restart - cannot restart the machine
		SendPacket("");
		return GDBAction::None;

	case 'c':
	case 'C': // continue [with signal]
		return GDBAction::Continue;

	case 's':
	case 'S': // step [with signal]
		return GDBAction::Step;

	case 'F': // file-I/O - not supported
		SendPacket("");
		return GDBAction::None;

	default:
		SendPacket(""); // unknown command
		return GDBAction::None;
	}
}

// --- Glue to the emulated machine -------------------------------------------
//
// The stub protocol above is machine-agnostic; this block adapts it to
// DOSBox: registers, guest memory (transparent to breakpoint patches),
// software breakpoints (via the DEBUG_Bp* services in debug.cpp) and the
// run state. A connected client halts the CPU by switching the machine
// loop handler to DEBUG_GdbLoop; 'continue' restores Normal_Loop.

bool DEBUG_GdbIsPaused()
{
	return gdb_paused;
}

// i386 'g' packet register order:
// eax ecx edx ebx esp ebp esi edi eip eflags cs ss ds es fs gs
static uint32_t gdb_get_register(const int reg)
{
	if (reg == 9)
		FillFlags();

	switch (reg) {
	case 0: return reg_eax;
	case 1: return reg_ecx;
	case 2: return reg_edx;
	case 3: return reg_ebx;
	case 4: return reg_esp;
	case 5: return reg_ebp;
	case 6: return reg_esi;
	case 7: return reg_edi;
	case 8: return reg_eip;
	case 9: return reg_flags;
	case 10: return SegValue(cs);
	case 11: return SegValue(ss);
	case 12: return SegValue(ds);
	case 13: return SegValue(es);
	case 14: return SegValue(fs);
	case 15: return SegValue(gs);
	default: return 0;
	}
}

static bool gdb_set_register(const int reg, const uint32_t value)
{
	switch (reg) {
	case 0: reg_eax = value; break;
	case 1: reg_ecx = value; break;
	case 2: reg_edx = value; break;
	case 3: reg_ebx = value; break;
	case 4: reg_esp = value; break;
	case 5: reg_ebp = value; break;
	case 6: reg_esi = value; break;
	case 7: reg_edi = value; break;
	case 8: reg_eip = value; break;
	case 9:
		FillFlags();
		reg_flags = value;
		break;
	case 10: SegSet16(cs, value); break;
	case 11: SegSet16(ss, value); break;
	case 12: SegSet16(ds, value); break;
	case 13: SegSet16(es, value); break;
	case 14: SegSet16(fs, value); break;
	case 15: SegSet16(gs, value); break;
	default: return false;
	}
	return true;
}

uint32_t GDBServer::GetRegister(int reg)
{
	const uint32_t value = gdb_get_register(reg);
	// Present EIP as a linear address in flat mode so that memory and
	// breakpoint addresses all share the same physical view.
	if (reg == 8 && eip_flat)
		return SegPhys(cs) + value;
	return value;
}

bool GDBServer::SetRegister(int reg, uint32_t value)
{
	if (reg == 8 && eip_flat)
		value -= SegPhys(cs);
	return gdb_set_register(reg, value);
}

// mem_*_checked go through the TLB, which wraps large physical addresses
// back into RAM (e.g. 0xFFFFFFFF aliases page 0xFFFFF). A remote stub must
// not silently serve aliased memory, so anything past installed guest RAM
// is reported as unreadable/unwritable instead.
static bool gdb_phys_addr_ok(const uint32_t addr)
{
	return static_cast<uint64_t>(addr) <
	       static_cast<uint64_t>(MEM_TotalPages()) * MEM_PAGE_SIZE;
}

static bool gdb_read_memory(const PhysPt addr, uint8_t* val)
{
	// If this address holds an active INT3 patch, report the byte the
	// guest put there, not 0xCC.
	if (DEBUG_BpReadPatchedByte(addr, *val))
		return true;
	if (!gdb_phys_addr_ok(addr))
		return false;
	return !mem_readb_checked(addr, val);
}

static bool gdb_write_memory(const PhysPt addr, const uint8_t val)
{
	// Writing into a patched location changes the guest byte that is
	// restored when the breakpoint is removed; the 0xCC stays in place.
	if (DEBUG_BpWritePatchedByte(addr, val))
		return true;
	if (!gdb_phys_addr_ok(addr))
		return false;
	return !mem_writeb_checked(addr, val);
}

// Enter the halted state: patches are removed, the CPU is stopped at the
// next safe point and DEBUG_GdbLoop services the stub.
static void DEBUG_GdbEnterPause()
{
	DEBUG_BpDisarmAll();
	CPU_Cycles = CPU_CycleLeft = 0;
	// Make Normal_Loop drop out so the loop handler switch takes effect
	exitLoop  = true;
	gdb_paused = true;
	DOSBOX_SetLoop(&DEBUG_GdbLoop);
}

// Run a single guest instruction while halted (used by 's' and by the
// step-over-the-breakpoint part of 'c'). Returns false if the instruction
// re-entered the halted state via a breakpoint/callback.
static bool DEBUG_GdbStepOne()
{
	skipFirstInstruction = true;
	CPU_Cycles             = 1;
	const Bits ret = (*cpudecoder)();
	if (ret < 0)
		return false;
	if (ret > 0) {
		if (ret >= CB_MAX)
			return true;
		const Bitu sub = (*CallBack_Handlers[ret])();
		if (sub)
			return false;
	}
	// A breakpoint during the instruction re-entered the halted state via
	// DEBUG_EnableDebugger, which sets gdb_stop_reply_pending.
	return !gdb_stop_reply_pending;
}

static void DEBUG_GdbContinue()
{
	// Skip over a software breakpoint sitting at the current address:
	// execute the patched instruction once with all breakpoints disarmed,
	// then re-arm everything and let the normal loop run freely.
	DEBUG_BpArmAllExcept(SegPhys(cs) + reg_eip);
	if (!DEBUG_GdbStepOne())
		return; // hit another breakpoint while stepping over
	DEBUG_BpArmAll();
	gdb_paused = false;
	DOSBOX_SetNormalLoop();
}

// Called when the machine halts (breakpoint hit or pause key) while a
// client may be connected; true when the stub claimed the halt.
bool DEBUG_GdbOnHalt(const bool send_stop_now)
{
	if (!gdb_server || !gdb_server->HasClient())
		return false;
	if (!gdb_paused) {
		DEBUG_GdbEnterPause();
		if (send_stop_now)
			gdb_server->SendStopReply();
		else
			gdb_stop_reply_pending = true;
	}
	return true;
}

void DEBUG_GdbOnExec(const uint16_t seg, const uint32_t off)
{
	// Monitor 'breakexec': arm a one-shot breakpoint at the entry point
	// of a program that was just started.
	if (!gdb_break_on_exec)
		return;
	gdb_break_on_exec = false;
	DEBUG_BpAddOnceAt(seg, off, true);
	DEBUG_BpArmAllExcept(SegPhys(cs) + reg_eip);
}

// Called from Normal_Loop every iteration while the machine runs and a
// gdb server exists. Returns true when execution was just halted.
bool DEBUG_GdbRunningPoll()
{
	if (!gdb_server)
		return false;

	const GDBAction action = gdb_server->Poll();
	if (action == GDBAction::Stop) {
		// Break-in request ('?' halt reason or Ctrl-C packet)
		DEBUG_GdbEnterPause();
		return true;
	}
	if (action == GDBAction::Disconnect) {
		// The stub is gone; remove its breakpoints so they cannot trap
		// into an inactive session later. Breakpoints the user set in
		// the built-in debugger are left alone.
		DEBUG_BpRemoveGdbOwned();
	}
	// Step/Continue while running are meaningless; the client believes
	// the target is already stopped when it sends those.
	return false;
}

Bitu DEBUG_GdbLoop()
{
	if (!GFX_Events())
		return 1; // host asked to shut down

	// Unlike the built-in debugger's DEBUG_Loop we do NOT run
	// PIC_runIRQs() while halted: it would dispatch pending guest IRQs
	// and move cs:eip, forcing the "chase and re-break" dance that
	// resumes the machine behind the client's back and emits an
	// unsolicited stop reply. A remote stub must keep the target truly
	// frozen; pending IRQs are delivered when execution resumes.
	Delay(1);

	if (!gdb_server) {
		gdb_paused = false;
		DOSBOX_SetNormalLoop();
		return 0;
	}

	if (gdb_stop_reply_pending) {
		gdb_stop_reply_pending = false;
		gdb_server->SendStopReply();
	}

	switch (gdb_server->Poll()) {
	case GDBAction::Step:
		// All breakpoints stay disarmed while halted, so this simply
		// executes the next instruction.
		DEBUG_GdbStepOne();
		gdb_stop_reply_pending = false;
		gdb_server->SendStopReply();
		return 0;
	case GDBAction::Continue:
		DEBUG_GdbContinue();
		return 0;
	case GDBAction::Disconnect:
		// 'detach' semantics: remove the stub's breakpoints and let the
		// machine keep running.
		DEBUG_BpRemoveGdbOwned();
		gdb_paused = false;
		DOSBOX_SetNormalLoop();
		return 0;
	case GDBAction::Stop:
	case GDBAction::None:
	default:
		return 0;
	}
}

void DEBUG_GdbInit(const int port)
{
	if (!gdb_server)
		gdb_server = std::make_unique<GDBServer>(port);
	if (!gdb_server->Start())
		gdb_server.reset();
}

void DEBUG_GdbShutdown()
{
	gdb_server.reset();
	gdb_paused = false;
}

#endif // C_GDBSERVER
