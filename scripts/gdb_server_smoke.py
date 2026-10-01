#!/usr/bin/env python3
"""Functional test for the DOSBox GDB remote server.

Connects to a running DOSBox instance with the GDB server enabled
([debug] gdbserver=true) and exercises the Remote Serial Protocol
implementation: framing, checksums, ACK/NACK retransmission, packet
fragmentation, malformed/oversized packet handling, register and memory
access (including binary 'X' writes with '}' escaping), single-step,
patchless software breakpoints (RAM and ROM), interrupt breakpoints,
vCont, monitor commands, Ctrl-C break-in, detach/kill, reconnect,
client supersede and breakpoint cleanup on disconnect.

Usage:
    scripts/gdb_server_smoke.py [host] [port]

The test plants a tiny program in guest RAM (NOP sled + infinite jump)
to verify breakpoints deterministically without depending on the guest
OS state.
"""

import socket
import sys
import time

HOST = sys.argv[1] if len(sys.argv) > 1 else "127.0.0.1"
PORT = int(sys.argv[2]) if len(sys.argv) > 2 else 1234

# Guest test program at physical 0x80000 (seg 0x8000):
#   8000:0000-3  4x NOP
#   8000:0004    jmp $       (EB FE - spins forever)
#   8000:0006    int 0x91    (CD 91 - IVT points at the IRET at 0x000B)
#   8000:0008    jmp $       (EB FE - landing pad after the int returns)
#   8000:000B    iret        (CF   - dummy handler for int 0x91)
# The handler is deliberately NOT adjacent to the int instruction so a
# breakpoint firing before dispatch can never fall through into it.
TEST_PHYS = 0x80000
TEST_BYTES = bytes([0x90, 0x90, 0x90, 0x90, 0xEB, 0xFE, 0xCD, 0x91,
                    0xEB, 0xFE, 0x90, 0xCF])
BP_PHYS = TEST_PHYS + 2    # breakpoint on the third NOP
JMP_PHYS = TEST_PHYS + 4   # first jmp $ - executes every iteration
INT_PHYS = TEST_PHYS + 6   # int 0x91
IRET_OFS = 0x000B          # handler offset (seg 0x8000)
IVT91_PHYS = 0x91 * 4      # IVT entry for int 0x91

FAILED = []


class Rsp:
    def __init__(self, host, port):
        self.sock = socket.create_connection((host, port), timeout=10)
        self.sock.settimeout(10)
        self.buf = b""
        self.noack = False

    def _read(self, n):
        while len(self.buf) < n:
            chunk = self.sock.recv(4096)
            if not chunk:
                raise ConnectionError("connection closed")
            self.buf += chunk
        out, self.buf = self.buf[:n], self.buf[n:]
        return out

    def _read_byte(self):
        return self._read(1)

    def send_packet(self, payload):
        if isinstance(payload, str):
            payload = payload.encode()
        csum = sum(payload) % 256
        pkt = b"$" + payload + b"#" + f"{csum:02x}".encode()
        for _ in range(3):
            self.sock.sendall(pkt)
            if self.noack:
                return
            ack = self._read_byte()
            if ack == b"+":
                return
            # '-' asks the client to retransmit, same as real gdb.
            assert ack == b"-", f"expected ack, got {ack!r}"
        raise AssertionError("packet rejected after 3 retries")

    def send_raw(self, data):
        """Send bytes verbatim (fragmentation/junk/escapes testing)."""
        self.sock.sendall(data)

    def read_packet(self, timeout=10):
        self.sock.settimeout(timeout)
        # Skip stray acks.
        while True:
            c = self._read_byte()
            if c == b"$":
                break
            assert c in (b"+", b"-"), f"unexpected byte {c!r}"
        payload = b""
        while True:
            c = self._read_byte()
            if c == b"#":
                break
            payload += c
        csum = self._read(2)
        assert int(csum, 16) == sum(payload) % 256, "bad checksum"
        if not self.noack:
            self.sock.sendall(b"+")
        return payload

    def query(self, payload, timeout=10):
        self.send_packet(payload)
        return self.read_packet(timeout)

    def query_monitor(self, cmd, timeout=10):
        """qRcmd: send 'monitor <cmd>'; collect O-console text + final reply."""
        self.send_packet("qRcmd," + cmd.encode().hex())
        out = b""
        while True:
            pkt = self.read_packet(timeout)
            if pkt[:1] == b"O" and pkt != b"OK":
                out += bytes.fromhex(pkt[1:].decode())
                continue
            return out, pkt

    def interrupt(self):
        self.sock.sendall(b"\x03")

    def expect_quiet(self, timeout=2.0):
        """True if no packet arrives within timeout (machine runs freely)."""
        self.sock.settimeout(timeout)
        try:
            pkt = self.read_packet(timeout)
        except (socket.timeout, TimeoutError):
            return True
        print(f"      unexpected packet while running: {pkt!r}")
        return False

    def close(self):
        self.sock.close()


def check(name, cond, extra=""):
    status = "PASS" if cond else "FAIL"
    print(f"[{status}] {name} {extra}")
    if not cond:
        FAILED.append(name)


def read_regs(rsp):
    """Decode a 'g' reply into the 16 wire values (little-endian dwords)."""
    reply = rsp.query("g").decode()
    return [int.from_bytes(bytes.fromhex(reply[i * 8:i * 8 + 8]), "little")
            for i in range(16)]


def read_eip(rsp):
    return read_regs(rsp)[8]


def write_eip_cs(rsp, phys, seg):
    """Set cs to seg and eip to the flat physical address."""
    rsp.query(f"Pa={seg.to_bytes(4, 'little').hex()}")
    rsp.query(f"P8={phys.to_bytes(4, 'little').hex()}")


def stop_at_eip(rsp, timeout=15):
    """Continue, wait for the stop reply, return (reply, stopped eip)."""
    rsp.send_packet("c")
    reply = rsp.read_packet(timeout)
    return reply, read_eip(rsp)


def land_in_rom(rsp, tries=4):
    """Run and interrupt until the stopped EIP is in ROM (>= 0xC0000).

    The DOSBox idle loop spends nearly all its time in BIOS code, so an
    interrupt lands there reliably; retry a few times just in case.
    """
    for _ in range(tries):
        rsp.send_packet("c")
        time.sleep(0.5)
        rsp.interrupt()
        rsp.read_packet(timeout=10)
        eip = read_eip(rsp)
        if eip >= 0xC0000:
            return eip
    return None


def main():
    print(f"connecting to {HOST}:{PORT}")
    rsp = Rsp(HOST, PORT)

    # --- Framing: ack mode, NACK retransmit, bad checksum --------------------

    # 'g' establishes a last_sent packet we can ask to be retransmitted.
    g_reply = rsp.query("g")
    check("g packet size", len(g_reply) == 128, f"len={len(g_reply)}")

    # '-' requests retransmission of the last reply.
    rsp.send_raw(b"-")
    check("NACK retransmit", rsp.read_packet() == g_reply)

    # A bad checksum must produce a NACK, not an ack/reply.
    rsp.send_raw(b"$m0,1#00")
    check("bad checksum NACK", rsp._read_byte() == b"-")

    # Stray acks and junk between packets are tolerated.
    rsp.send_raw(b"++\x00\xffjunk")
    check("junk tolerated", rsp.query("qC") == b"QC1")

    # Fragmented delivery: byte-at-a-time must still assemble the packet.
    payload = b"qOffsets"
    pkt = b"$" + payload + b"#" + f"{sum(payload) % 256:02x}".encode()
    for b in pkt:
        rsp.send_raw(bytes([b]))
        time.sleep(0.002)
    check("fragmented packet", rsp.read_packet() == b"Text=0;Data=0;Bss=0")

    # An unfinished packet beyond the in-packet bound is dropped. This
    # flood is larger than GDB_MAX_IN_PACKET (0x2000*2+32); even if a
    # following packet's '#' were misinterpreted as its terminator, the
    # drop path engages first.
    rsp.send_raw(b"$" + b"x" * 20000)
    time.sleep(0.2)
    check("oversized packet dropped", rsp.query("qAttached") == b"1")

    # --- Queries ---------------------------------------------------------------

    reply = rsp.query("qSupported")
    check("qSupported", b"PacketSize=" in reply, reply.decode(errors="replace"))
    check("qSupported colon form", rsp.query("qSupported:") == reply)
    check("qSymbol", rsp.query("qSymbol::") == b"OK")
    check("qXfer unsupported",
          rsp.query("qXfer:features:read:foo:0,1") == b"")
    check("vCont caps", rsp.query("vCont?") == b"vCont;c;s")
    check("qTStatus (tracepoint)", rsp.query("qTStatus") == b"")
    check("unknown packet empty", rsp.query("Wxyz") == b"")

    reply = rsp.query("QStartNoAckMode")
    check("QStartNoAckMode", reply == b"OK")
    rsp.noack = True

    # --- Halt + thread packets -------------------------------------------------

    reply = rsp.query("?")
    check("halt reason", reply[:1] in (b"S", b"T"), reply.decode())
    check("Hg thread sel", rsp.query("Hg0") == b"OK")
    check("Hc thread sel", rsp.query("Hc-1") == b"OK")
    check("T thread alive", rsp.query("T1") == b"OK")

    # --- ROM breakpoint -----------------------------------------------------------
    # The guest is still running its normal idle code here (we have not
    # redirected execution yet), so an interrupted EIP usually lands in
    # BIOS ROM - the one place INT3 patching could never work.
    rom_eip = read_eip(rsp)
    if rom_eip < 0xC0000:
        rom_eip = land_in_rom(rsp)
    if rom_eip is None:
        check("ROM breakpoint", True,
              "skipped: interrupted eip never landed in ROM")
    else:
        check("Z0 in ROM", rsp.query(f"Z0,{rom_eip:x},1") == b"OK",
              f"addr={rom_eip:x}")
        reply, eip = stop_at_eip(rsp, timeout=20)
        check("ROM breakpoint hit", eip == rom_eip, f"eip={eip:x}")
        rsp.query(f"z0,{rom_eip:x},1")

    # --- Registers --------------------------------------------------------------

    regs = read_regs(rsp)
    # 'p' reads a single register; index 8 = eip.
    reply = rsp.query("p8")
    check("p eip", int.from_bytes(bytes.fromhex(reply.decode()), "little")
          == regs[8])
    check("p out of range", rsp.query("p10") == b"E01")
    check("p malformed", rsp.query("pz") == b"E01")

    # 'P' single-register write, little-endian on the wire.
    rsp.query("P0=78563412")   # eax = 0x12345678
    check("P eax", read_regs(rsp)[0] == 0x12345678)
    check("P malformed", rsp.query("P0-zz") == b"E01")

    # 'G' block write: exactly 16 registers; the server applies segment
    # writes before eip so a flat eip translates against the new cs.
    vals = [0] * 16
    vals[0] = 0x11111111                       # eax
    vals[8] = TEST_PHYS                        # eip (flat)
    vals[10] = 0x8000                          # cs
    g = "".join(v.to_bytes(4, "little").hex() for v in vals)
    check("G block write", rsp.query("G" + g) == b"OK")
    regs = read_regs(rsp)
    check("G verify", regs[0] == 0x11111111 and regs[10] == 0x8000,
          f"eax={regs[0]:x} cs={regs[10]:x}")

    # eip presentation: flat vs raw offset via monitor command.
    out, reply = rsp.query_monitor("eipmode offset")
    check("eipmode offset", reply == b"OK" and b"offset" in out,
          out.decode(errors="replace").strip())
    eip_off = read_eip(rsp)
    rsp.query_monitor("eipmode flat")
    eip_flat = read_eip(rsp)
    check("eip flat==phys", eip_flat == regs[10] * 16 + eip_off,
          f"flat={eip_flat:x} off={eip_off:x}")

    # --- Memory -----------------------------------------------------------------

    # Plant the test program in RAM and the int 0x91 IVT entry.
    reply = rsp.query(f"M{TEST_PHYS:x},{len(TEST_BYTES):x}:{TEST_BYTES.hex()}")
    check("M write", reply == b"OK", reply.decode(errors="replace"))
    back = rsp.query(f"m{TEST_PHYS:x},{len(TEST_BYTES):x}")
    check("memory write/read", bytes.fromhex(back.decode()) == TEST_BYTES,
          back.decode(errors="replace"))
    vec = IRET_OFS.to_bytes(2, "little") + (0x8000).to_bytes(2, "little")
    check("IVT write", rsp.query(f"M{IVT91_PHYS:x},4:{vec.hex()}") == b"OK")

    # Binary 'X' write with '}' escaping. RSP escapes exactly four bytes
    # ($ # } *) as '}' + (byte ^ 0x20); everything else - including 0x03 -
    # goes raw, because '#' would otherwise end the packet early.
    raw = bytes([0x24, 0x23, 0x7D, 0x2A, 0x03])
    escaped = b"".join(b"}" + bytes([b ^ 0x20]) if b in b"$#}*"
                       else bytes([b]) for b in raw)
    addr = TEST_PHYS + 0x40
    rsp.send_packet(b"X%x,%x:" % (addr, len(raw)) + escaped)
    check("X binary write", rsp.read_packet() == b"OK")
    back = rsp.query(f"m{addr:x},{len(raw):x}")
    check("X round-trip", bytes.fromhex(back.decode()) == raw, back.decode())

    # Error/boundary handling.
    check("m too long", rsp.query(f"m{TEST_PHYS:x},2001") == b"E01")
    check("m unmapped", rsp.query("mffffffff,8") == b"E01")
    check("M len mismatch", rsp.query(f"M{TEST_PHYS:x},4:9090") == b"E01")
    check("M wraparound", rsp.query("Mffffffff,4:90909090") == b"E01")
    check("X len mismatch", rsp.query(f"X{TEST_PHYS:x},4:90") == b"E01")

    # qSearch:memory - find and not-found.
    pat = TEST_BYTES[:2].hex()
    reply = rsp.query(f"qSearch:memory:{TEST_PHYS:x};10;{pat}")
    check("qSearch hit", reply == f"1,{TEST_PHYS:x}".encode(), reply.decode())
    reply = rsp.query(f"qSearch:memory:{TEST_PHYS:x};10;deadbeef")
    check("qSearch miss", reply == b"0")

    # --- Monitor commands --------------------------------------------------------

    out, reply = rsp.query_monitor("help")
    check("monitor help", reply == b"OK" and b"bpint" in out,
          out.decode(errors="replace")[:40].strip())
    out, reply = rsp.query_monitor("info")
    check("monitor info", reply == b"OK" and b"CS:EIP" in out,
          out.decode(errors="replace")[:40].strip())
    out, reply = rsp.query_monitor("nonsense")
    check("monitor unknown", reply == b"OK" and b"Unknown" in out)

    # --- Step -------------------------------------------------------------------

    write_eip_cs(rsp, TEST_PHYS, 0x8000)
    rsp.query("P9=46020000")                    # eflags ~0x246, TF clear
    rsp.query("s")
    check("single-step", read_eip(rsp) == TEST_PHYS + 1)
    rsp.query("s")
    check("second step", read_eip(rsp) == TEST_PHYS + 2)

    # --- Software breakpoints ---------------------------------------------------

    check("Z0 insert", rsp.query(f"Z0,{BP_PHYS:x},1") == b"OK")
    check("Z0 idempotent", rsp.query(f"Z0,{BP_PHYS:x},1") == b"OK")

    write_eip_cs(rsp, TEST_PHYS, 0x8000)
    reply, eip = stop_at_eip(rsp)
    check("breakpoint stop", reply[:1] in (b"S", b"T"), reply.decode())
    check("bp eip", eip == BP_PHYS, f"eip={eip:x}")

    # Memory at a bp reads the guest byte, not 0xCC.
    mem = rsp.query(f"m{BP_PHYS:x},1")
    check("bp mem transparency",
          bytes.fromhex(mem.decode()) == bytes([0x90]), mem.decode())

    # A breakpoint on the self-jump executes every iteration: continuing
    # from the hit address must step over the armed bp once, then the bp
    # must fire again on the next pass (re-arming works).
    check("Z0 at jmp loop", rsp.query(f"Z0,{JMP_PHYS:x},1") == b"OK")
    reply, eip = stop_at_eip(rsp)
    check("bp on self-loop", eip == JMP_PHYS, f"eip={eip:x}")
    reply, eip = stop_at_eip(rsp)
    check("bp re-fires after step-over", eip == JMP_PHYS, f"eip={eip:x}")

    check("z0 remove", rsp.query(f"z0,{BP_PHYS:x},1") == b"OK")
    check("z0 missing", rsp.query("z0,12345,1") == b"E01")
    check("Z1 watchpoint unsupported", rsp.query(f"Z1,{BP_PHYS:x},4") == b"")

    # --- Interrupt breakpoint (monitor bpint) -------------------------------------
    # Rewind into the planted int 0x91; the IVT points at a dummy IRET.
    write_eip_cs(rsp, INT_PHYS, 0x8000)
    rsp.query(f"z0,{JMP_PHYS:x},1")           # tidy: drop the loop bp
    out, reply = rsp.query_monitor("bpint 91")
    check("bpint set", reply == b"OK", out.decode(errors="replace").strip())
    rsp.send_packet("c")
    reply = rsp.read_packet(timeout=15)
    check("int breakpoint stop", reply[:1] in (b"S", b"T"), reply.decode())

    # --- vCont ----------------------------------------------------------------------

    rsp.send_packet("vCont;s:1")
    reply = rsp.read_packet(timeout=10)
    check("vCont step", reply[:1] in (b"S", b"T"), reply.decode())
    rsp.send_packet("vCont;c:1")
    time.sleep(0.3)
    rsp.interrupt()
    reply = rsp.read_packet(timeout=10)
    check("vCont continue", reply[:1] in (b"S", b"T"), reply.decode())

    # 'C' (continue with signal) works like 'c'.
    rsp.send_packet("C09")
    time.sleep(0.3)
    rsp.interrupt()
    reply = rsp.read_packet(timeout=10)
    check("C signal-continue", reply[:1] in (b"S", b"T"), reply.decode())

    # --- Disconnect cleanup ---------------------------------------------------------
    # A breakpoint left behind by a dead client must not keep firing:
    # plant one on the self-loop, drop the socket, reconnect and confirm
    # the machine runs freely.
    rsp.query(f"Z0,{JMP_PHYS:x},1")
    rsp.close()                      # socket close without 'D'
    time.sleep(0.5)

    rsp = Rsp(HOST, PORT)
    rsp.query("?")
    write_eip_cs(rsp, TEST_PHYS, 0x8000)
    rsp.send_packet("c")
    quiet = rsp.expect_quiet(2.0)
    check("bps removed on socket close", quiet)
    if quiet:
        rsp.interrupt()
        rsp.read_packet(timeout=10)

    # Supersede: same guarantee when a second client replaces the first.
    rsp.query(f"Z0,{JMP_PHYS:x},1")
    write_eip_cs(rsp, TEST_PHYS, 0x8000)   # sled reaches the jmp loop
    rsp.send_packet("c")
    rsp.read_packet(timeout=15)             # bp fires, machine halts on it
    other = Rsp(HOST, PORT)
    other.query("?")                        # supersede -> cleanup + resume
    write_eip_cs(other, TEST_PHYS, 0x8000)
    other.send_packet("c")
    quiet = other.expect_quiet(2.0)
    check("bps removed on supersede", quiet)
    if quiet:
        other.interrupt()
        other.read_packet(timeout=10)
    rsp.close()

    # --- Detach / kill / reconnect --------------------------------------------------

    check("detach", other.query("D") == b"OK")
    other.close()
    time.sleep(0.3)

    rsp2 = Rsp(HOST, PORT)
    reply = rsp2.query("?")
    check("reconnect halt", reply[:1] in (b"S", b"T"), reply.decode())
    check("reconnect regs", len(rsp2.query("g")) == 128)
    rsp2.close()

    # 'k' kill: the connection closes and the machine resumes.
    rsp3 = Rsp(HOST, PORT)
    rsp3.query("?")
    rsp3.send_packet("k")
    time.sleep(0.5)
    try:
        dead = rsp3.sock.recv(16) == b""
    except socket.timeout:
        dead = False
    check("k kill disconnects", dead)
    rsp3.close()

    # A final client proves the server survived everything.
    rsp4 = Rsp(HOST, PORT)
    reply = rsp4.query("?")
    check("post-kill halt", reply[:1] in (b"S", b"T"), reply.decode())
    rsp4.close()

    print()
    if FAILED:
        print(f"{len(FAILED)} FAILED: {', '.join(FAILED)}")
        sys.exit(1)
    print("ALL PASS")


if __name__ == "__main__":
    main()
