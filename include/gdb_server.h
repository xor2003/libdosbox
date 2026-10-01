/*
 *  Copyright (C) 2024-2026  The DOSBox Staging Team
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

#ifndef DOSBOX_GDB_SERVER_H
#define DOSBOX_GDB_SERVER_H

#include "dosbox.h"

#if C_GDBSERVER

#include <cstdint>
#include <string>

// Maximum number of bytes a single 'm' (read memory) or 'M'/'X' (write
// memory) packet may request. Keeps replies inside the PacketSize we
// advertise in qSupported and prevents an arbitrary client-chosen length
// from sizing anything unbounded.
constexpr uint32_t GDB_MAX_MEMORY_BYTES = 0x2000;

// Largest packet the stub will emit; two hex digits per byte plus the
// '$', '#' and two checksum digits of the frame.
constexpr uint32_t GDB_MAX_PACKET_SIZE = GDB_MAX_MEMORY_BYTES * 2 + 4;

// Bound on the bytes between '$' and '#' the stub will accumulate for a
// single incoming packet: the largest legal body is an 'M' write of
// GDB_MAX_MEMORY_BYTES (two hex digits per byte plus a small header).
// Beyond that the framing is dropped rather than grown unboundedly.
constexpr uint32_t GDB_MAX_IN_PACKET = GDB_MAX_MEMORY_BYTES * 2 + 32;

// Action requested by the GDB client, returned by GDBServer::Poll().
// The machine glue at the bottom of gdb_server.cpp performs the action
// on the emulation thread.
enum class GDBAction {
	None,       // Nothing to do; keep polling
	Step,       // Execute a single instruction, then report a stop
	Continue,   // Resume execution until the next breakpoint
	Stop,       // Halt the emulated CPU now (halt-reason query, Ctrl-C)
	Disconnect, // Client disconnected or detached
};

// Minimal GDB Remote Serial Protocol server. All socket I/O is
// non-blocking and driven by Poll() on the emulation thread, so the stub
// never touches guest state from another thread and needs no locking.
//
// All addresses exchanged with the client are physical (linear) addresses
// into the emulated address space: 'm'/'M'/'X' memory packets and 'Z'/'z'
// breakpoint packets all share the same flat view. The 'eip' register is
// reported as a linear address (SegPhys(cs) + reg_eip) by default so that
// 'x/i $eip' and breakpoints work naturally in real mode; this can be
// switched to the raw offset value with 'monitor eipmode offset'.
class GDBServer {
public:
	// Socket handle type: Winsock SOCKET is a UINT_PTR, POSIX is int
#if defined(WIN32)
	using Socket = uintptr_t;
	static constexpr Socket invalid_socket = ~(Socket)0; // INVALID_SOCKET
#else
	using Socket                       = int;
	static constexpr Socket invalid_socket = -1;
#endif

	explicit GDBServer(uint16_t port)
	        : port(port),
	          last_sent(),
	          recv_buffer()
	{}
	~GDBServer() { Stop(); }

	GDBServer(const GDBServer&)            = delete;
	GDBServer& operator=(const GDBServer&) = delete;

	// Opens the listening socket. Returns false on failure.
	bool Start();
	void Stop();

	bool IsRunning() const { return server_fd != invalid_socket; }
	bool HasClient() const { return client_fd != invalid_socket; }

	// Process pending socket events and complete packets. Called once per
	// Normal_Loop() iteration while the emulation is running, and every
	// iteration while it is halted by the debugger.
	GDBAction Poll();

	// Notify the client that execution stopped (breakpoint hit, step
	// finished, break-in request).
	void SendStopReply(int signal = 5);

	// EIP presentation: flat (linear) or raw offset. 'monitor eipmode'
	// toggles it; flat is the default.
	bool IsEipFlat() const { return eip_flat; }
	void SetEipFlat(bool flat) { eip_flat = flat; }

private:
	Socket server_fd = invalid_socket;
	Socket client_fd = invalid_socket;
	uint16_t port    = 0;

	// Last packet sent, for '-' retransmission requests
	std::string last_sent;
	bool noack_mode = false;
	bool eip_flat   = true;

	std::string recv_buffer; // Accumulates partial packets

	bool TryAccept();          // Non-blocking accept; true if a client arrived
	void CloseClient();        // Close client side and reset session state
	bool ReceiveData();        // Read available data; false on disconnect/error
	void DiscardInterPacket(); // Consume ACK/NACK and stray bytes
	bool HasCompletePacket();
	std::string ExtractPacket(); // Remove one packet, verify checksum, ACK
	void SendPacket(const std::string& packet); // Frame + checksum + send
	GDBAction ProcessCommand(const std::string& cmd);

	// Command handlers
	void HandleReadRegister(const std::string& cmd);    // 'p'
	void HandleWriteRegister(const std::string& cmd);   // 'P'
	void HandleReadRegisters();                         // 'g'
	void HandleWriteRegisters(const std::string& hex);  // 'G'
	void HandleReadMemory(const std::string& args);     // 'm'
	void HandleWriteMemoryHex(const std::string& args); // 'M'
	void HandleWriteMemoryBin(const std::string& args); // 'X'
	void HandleBreakpoint(const std::string& args);     // 'Z'/'z'
	void HandleQuery(const std::string& args);          // 'q'/'Q'
	void HandleMonitorCommand(const std::string& hex);  // 'qRcmd'
	void HandleMemorySearch(const std::string& args);   // 'qSearch:memory'
	GDBAction HandleVCommand(const std::string& cmd);   // 'v' packets

	// Register access shared by 'g'/'G'/'p'/'P'. Translates between the
	// wire value and reg_eip when eip_flat is on.
	uint32_t GetRegister(int reg);
	bool SetRegister(int reg, uint32_t value);

	// Sends the given text to the client as a series of 'O' (console
	// output) packets, so monitor commands can print to the GDB console.
	void SendMonitorText(const std::string& text);
};

#endif // C_GDBSERVER

#endif // DOSBOX_GDB_SERVER_H
