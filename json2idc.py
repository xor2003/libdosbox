#!/usr/bin/env python3
import re
import jsonpickle
import sys
import argparse
from typing import Any

image_size = 939072 - 0xa40  # 0x22b90 - 0x200  # .exe size - exe header
dosbox_load_seg = 0x1A2  # Runtime load segment (fallback)
ida_load_seg = 0x1000
all_segs = set()


def _idc_escape(text: str) -> str:
    return text.replace("\\", "\\\\").replace("\"", "\\\"")


def _hex_addr(value: int) -> str:
    return f"0x{value:x}"


def addr_dbx2ida(addr: int) -> int:
    return addr + (ida_load_seg - dosbox_load_seg) * 0x10


def seg_dbx2ida(seg: int) -> int:
    return seg + ida_load_seg - dosbox_load_seg


def configure_load_segments(meta: dict[str, Any], ida_seg: int) -> None:
    global dosbox_load_seg, ida_load_seg, image_size
    ida_load_seg = ida_seg
    if not isinstance(meta, dict):
        return
    runtime_seg = meta.get("DosboxLoadSeg")
    if runtime_seg is None:
        return
    try:
        dosbox_load_seg = int(runtime_seg)
    except Exception:
        pass
    runtime_image_size = meta.get("ImageSizeBytes")
    if runtime_image_size is not None:
        try:
            image_size = int(runtime_image_size)
        except Exception:
            pass


def read_segments_map(file_name):
    """Reads a .map file and returns a dictionary of segments."""
    symbols = dict()
    with open(file_name) as f:
        lines = f.read().splitlines()
        for line in lines:
            m = re.match(
                r'^\s*MakeName\s*\(\s*(?P<address>[0-9A-Fa-fXx]+)\s*,\s*"(?P<name>\S+)"\s*\)\s*;', line)
            if not m:
                continue
            name = m["name"]
            if all(not name.startswith(x) for x in {"sub_", "loc_", "locret_", "byte_", "word_", "dword_"}):
                symbols[m["address"]] = name
    return symbols


def mark_code(daddr, instr, outfile, code_segs):
    """Processes individual code segments."""
    global all_segs

    addr = addr_dbx2ida(int(daddr, 16))
    for seg in ['cs', 'ds', 'es', 'gs', 'fs', 'ss']:
        all_segs |= set(instr[seg])

    if len(instr["cs"]) == 0:
        return

    outfile.write(f'MakeCode(0x{addr:x}); // {daddr}\n')
    cs = instr["cs"][0]
    cseg = seg_dbx2ida(cs)
    eip = addr - cseg * 0x10

    if instr['Video']:  # Identify instructions accessing video memory
        print(f'Video acc instr: {cseg:x}:{eip:x}')

    set_segment_registers_values(outfile, addr, daddr, instr)
    collect_code_segs_and_ip_ranges(code_segs, cs, eip)


def set_segment_registers_values(outfile, addr, daddr, instr):
    """Sets the default segment register values used for an instruction."""
    for seg in ['ds', 'es', 'gs', 'fs', 'ss']:
        if seg in instr and len(instr[seg]) == 1:
            outfile.write(
                f'split_sreg_range(0x{addr:x},"{seg}",0x{seg_dbx2ida(instr[seg][0]):x},2); // 0x{daddr} 0x{instr[seg][0]:x}\n')


def collect_code_segs_and_ip_ranges(code_segs, cs, eip):
    """Updates the minimum and maximum addresses for a code segment."""
    if cs not in code_segs:
        code_segs[cs] = [eip, eip]
    else:
        code_segs[cs][0] = min(code_segs[cs][0], eip)
        code_segs[cs][1] = max(code_segs[cs][1], eip)


def infer_data_type(data: dict[str, Any]) -> str:
    read_sizes = set(data.get("ReadSizes", []))
    write_sizes = set(data.get("WriteSizes", []))
    sizes = set(data.get("Sizes", []))
    all_sizes = read_sizes | write_sizes | sizes
    if all_sizes == {1}:
        if data.get("Array", False):
            return "u8[]"
        return "u8"
    if all_sizes == {2}:
        if data.get("Array", False):
            return "u16[]"
        return "u16"
    if all_sizes == {4}:
        if data.get("Array", False):
            return "u32[]"
        return "u32"
    if all_sizes == {1, 2}:
        return "u8/u16-mixed"
    if all_sizes == {1, 4}:
        return "u8/u32-mixed"
    if all_sizes == {2, 4}:
        return "u16/u32-mixed"
    if all_sizes:
        return "mixed"
    return "unknown"


def _flow_tags(mask: int) -> list[str]:
    tags: list[str] = []
    if mask & (1 << 0):
        tags.append("JMP")
    if mask & (1 << 1):
        tags.append("CALL")
    if mask & (1 << 2):
        tags.append("RET")
    if mask & (1 << 3):
        tags.append("JCC")
    if not tags:
        tags.append("FLOW")
    return tags


def mark_data_access(j, outfile):
    """Processes the data segments, setting variable sizes."""
    for daddr, data in j['Data'].items():
        addr = addr_dbx2ida(int(daddr, 16))

        read_count = data.get("ReadCount", 0)
        write_count = data.get("WriteCount", 0)
        type_hint = infer_data_type(data)

        if (not data.get('Array')) and len(data.get('Sizes', [])) == 1:
            size = data['Sizes'][0]  # Only set if it was single size
            text = {1: 'Byte', 2: 'Word', 4: 'Dword'}.get(size)
            if text:
                outfile.write(f'Make{text}(0x{addr:x}); // 0x{daddr}\n')

        summary = (
            f"RT data: type={type_hint} r={read_count} w={write_count} "
            f"sizes={data.get('Sizes', [])} rs={data.get('ReadSizes', [])} "
            f"ws={data.get('WriteSizes', [])} arr={1 if data.get('Array', False) else 0}"
        )
        outfile.write(f'MakeComm(0x{addr:x}, "{_idc_escape(summary)}");\n')


def process_jumps(j, outfile):
    """Processes the jump addresses and adds function definitions."""
    for daddr in sorted(j['Jumps'], reverse=True):
        addr = addr_dbx2ida(daddr)
        outfile.write(f'add_func(0x{addr:x}); // 0x{daddr:x}\n')


def process_flow_edges(j, outfile):
    """Annotates outgoing runtime edges and execution counters per instruction."""
    for src_addr, instr in j.get("Code", {}).items():
        src = addr_dbx2ida(int(src_addr, 16))
        exec_count = instr.get("ExecCount", 0)
        edges = instr.get("Edges", {})
        edge_kinds = instr.get("EdgeKinds", {})
        if not edges and not exec_count:
            continue

        kinds_txt = []
        for dst, count in sorted(edges.items(), key=lambda kv: int(kv[1]), reverse=True)[:4]:
            dst_i = int(dst)
            dst_hex = f"0x{addr_dbx2ida(dst_i):x}"
            mask = int(edge_kinds.get(dst, 0))
            tags = _flow_tags(mask)
            kinds_txt.append(f"{'/'.join(tags)}->{dst_hex}#{count}")
            # Add cross-reference hints directly in IDA database.
            # 2 == fl_JN according to IDC constants; works as a generic code edge.
            outfile.write(f'add_cref(0x{src:x}, 0x{addr_dbx2ida(dst_i):x}, 2);\n')

        summary = f"RT exec={exec_count}"
        if kinds_txt:
            summary += " edges: " + ", ".join(kinds_txt)
        outfile.write(f'MakeComm(0x{src:x}, "{_idc_escape(summary)}");\n')


def annotate_code_details(j, outfile):
    """Annotate code nodes with all available metadata fields."""
    for daddr, instr in j.get("Code", {}).items():
        try:
            src_dbx = int(daddr, 16)
        except Exception:
            continue
        src = addr_dbx2ida(src_dbx)
        details = []

        if "ExecCount" in instr:
            details.append(f"exec={instr.get('ExecCount', 0)}")
        if "Video" in instr:
            details.append(f"video={1 if instr.get('Video') else 0}")
        if "Self" in instr:
            details.append(f"selfmod={1 if instr.get('Self') else 0}")
        if "Size" in instr:
            details.append(f"size={instr.get('Size', 0)}")
        if "Modsize" in instr:
            details.append(f"mod={instr.get('Modsize', 0)}")
        if instr.get("SelfVar"):
            details.append(f"variants={len(instr.get('SelfVar', []))}")
        if instr.get("Accdat"):
            details.append(f"accdat={len(instr.get('Accdat', []))}")

        seg_parts = []
        for seg in ["cs", "ds", "es", "ss", "fs", "gs"]:
            vals = instr.get(seg, [])
            if vals:
                seg_vals = ",".join(f"{seg_dbx2ida(v):x}" for v in sorted(vals))
                seg_parts.append(f"{seg}=[{seg_vals}]")
        if seg_parts:
            details.append("segs " + " ".join(seg_parts))

        if details:
            summary = "RT code: " + " ".join(details)
            outfile.write(f'MakeComm(0x{src:x}, "{_idc_escape(summary)}");\n')


def process_abi(j, outfile):
    """Process optional ABI section and attach function ABI hints."""
    abi = j.get("Abi", {})
    if not isinstance(abi, dict):
        return

    for addr_key, info in abi.items():
        try:
            dbx_addr = int(addr_key, 16) if isinstance(addr_key, str) else int(addr_key)
        except Exception:
            continue
        ida_addr = addr_dbx2ida(dbx_addr)
        if not isinstance(info, dict):
            continue

        parts = []
        for key in ("InRegs", "OutRegs", "Clobbers", "Preserved", "ArgStack", "RetRegs", "FlagsIn", "FlagsOut"):
            val = info.get(key)
            if val:
                parts.append(f"{key}={val}")
        if "StackCleanup" in info:
            parts.append(f"StackCleanup={info.get('StackCleanup')}")
        if "CallConv" in info:
            parts.append(f"CallConv={info.get('CallConv')}")
        if "Confidence" in info:
            parts.append(f"Confidence={info.get('Confidence')}")
        if "Calls" in info:
            parts.append(f"Calls={info.get('Calls')}")

        if parts:
            text = "RT ABI: " + " ".join(parts)
            outfile.write(f'MakeComm(0x{ida_addr:x}, "{_idc_escape(text)}");\n')


def write_idc_header(outfile):
    """Writes the IDC script header."""
    outfile.write('''#include <idc.idc>
static main(){
set_inf_attr(INF_PROCNAME, "80386r");
set_target_assembler("Generic for intel 80x86");
''')


def write_idc_footer(outfile):
    """Writes the IDC script footer."""
    outfile.write("""
print("Applied addresses and types");

// produce a listing file
auto fpl = fopen(get_root_filename() + ".lst", "w");
gen_file(OFILE_LST, fpl, 0x10000, BADADDR, GENFLG_ASMTYPE);
fclose(fpl);
print("Generated lst");
}""")


def process_symbols(symbols, outfile):
    """Processes and applies symbols from the map file."""
    for symbol, addr in symbols.items():
        outfile.write(f'set_name(0x{addr:x},"_{symbol}",SN_FORCE);\n')


def main():
    parser = argparse.ArgumentParser(description="Process a libdosbox run-time info .json file and a .map file to generate IDA Pro IDC script.")
    parser.add_argument('json_file', help='Path to the .json file with run-time data')
    parser.add_argument('map_file', help='Path to the .map file with segment information')
    parser.add_argument('--ida-load-seg', default='0x1000',
                        help='IDA image base segment (default: 0x1000)')
    args = parser.parse_args()

    global all_segs
    json_fname = args.json_file
    map_fname = args.map_file

    if not json_fname.endswith('.json'):
        print('Error: Provide a .json file with run-time data')
        sys.exit(1)

    idc_fname = json_fname.replace('.json', '.idc')
    symbols = read_segments_map(map_fname)
    code_segs = dict()

    with open(idc_fname, 'w') as outfile:
        write_idc_header(outfile)

        with open(json_fname) as infile:
            j = jsonpickle.decode(infile.read())
            configure_load_segments(j.get("Meta", {}), int(args.ida_load_seg, 0))
            print(f"Load segments: DOSBox={dosbox_load_seg:04x} IDA={ida_load_seg:04x}")
            for daddr, instr in j['Code'].items():
                mark_code(daddr, instr, outfile, code_segs)

            if 'Data' in j:
                mark_data_access(j, outfile)

            process_jumps(j, outfile)
            annotate_code_details(j, outfile)
            process_flow_edges(j, outfile)
            process_abi(j, outfile)

            print('Used segments: ')
            print(','.join([f'{seg_dbx2ida(seg):x}' for seg in sorted(all_segs)
                            if dosbox_load_seg <= seg < dosbox_load_seg + image_size // 0x10]))

        process_symbols(symbols, outfile)
        write_idc_footer(outfile)

        print("Used code segments and ip range:")
        for seg, minmax in sorted(code_segs.items()):
            print(f"{seg_dbx2ida(seg):x} {minmax[0]:x}:{minmax[1]:x}")


if __name__ == '__main__':
    main()
