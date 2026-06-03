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
                try:
                    symbols[int(m["address"], 16)] = name
                except Exception:
                    continue
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


def _fmt_list(values: Any) -> str:
    if not isinstance(values, list):
        return str(values)
    return "[" + ", ".join(str(v) for v in values) + "]"


def _safe_int(value: Any) -> int | None:
    try:
        return int(value)
    except Exception:
        return None


def _parse_json_address(value: Any) -> int | None:
    if isinstance(value, int):
        return value
    if isinstance(value, str):
        try:
            return int(value, 16)
        except Exception:
            pass
        try:
            return int(value)
        except Exception:
            return None
    return None


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
            f"sizes={_fmt_list(data.get('Sizes', []))} "
            f"rs={_fmt_list(data.get('ReadSizes', []))} "
            f"ws={_fmt_list(data.get('WriteSizes', []))} "
            f"arr={1 if data.get('Array', False) else 0}"
        )
        outfile.write(f'MakeComm(0x{addr:x}, "{_idc_escape(summary)}");\n')


def process_entry_points(j, outfile):
    """Process discovered function entry points."""
    starts = set()
    for raw in j.get("Jumps", []):
        src = _parse_json_address(raw)
        if src is not None:
            starts.add(src)
    for raw in j.get("FunctionSampling", {}).keys():
        src = _parse_json_address(raw)
        if src is not None:
            starts.add(src)
    for raw in j.get("Abi", {}).keys():
        src = _parse_json_address(raw)
        if src is not None:
            starts.add(src)
    for src in sorted(starts, reverse=True):
        if src is None:
            continue
        addr = addr_dbx2ida(src)
        outfile.write(f'add_func(0x{addr:x}); // 0x{src:x}\n')


def process_function_sampling(j, outfile):
    """Attach per-function sampling metadata."""
    sampling = j.get("FunctionSampling", {})
    if not isinstance(sampling, dict):
        return
    for daddr, state in sampling.items():
        src = _parse_json_address(daddr)
        if src is None:
            continue
        if not isinstance(state, dict):
            continue
        calls = state.get("Calls")
        sampled = state.get("SampledCalls")
        if calls is None and sampled is None:
            continue

        parts = []
        if calls is not None:
            parts.append(f"calls={calls}")
        if sampled is not None:
            parts.append(f"sampled={sampled}")
        if calls not in (None, 0) and sampled is not None:
            try:
                parts.append(f"ratio={sampled / calls:.4f}")
            except Exception:
                pass

        if parts:
            summary = "RT sampling: " + ", ".join(parts)
            outfile.write(f'MakeComm(0x{addr_dbx2ida(src):x}, "{_idc_escape(summary)}");\n')


def process_runtime_meta(j, outfile):
    """Attach top-level runtime metadata as an IDA comment."""
    meta = j.get("Meta", {})
    if not isinstance(meta, dict) or not meta:
        return

    parts = []
    for key, value in sorted(meta.items(), key=lambda it: str(it[0])):
        if key == "DosboxLoadSeg":
            parsed = _safe_int(value)
            if parsed is not None:
                value = f"0x{parsed:x}"
        parts.append(f"{key}={value}")
    summary = "RT meta: " + ", ".join(parts)

    code_addrs = []
    for key in j.get("Code", {}).keys():
        dbx = _parse_json_address(key)
        if dbx is None:
            continue
        code_addrs.append(dbx)

    if code_addrs:
        anchor = addr_dbx2ida(min(code_addrs))
        outfile.write(f'MakeComm(0x{anchor:x}, "{_idc_escape(summary)}");\n')
    else:
        outfile.write(f'// Runtime metadata: {_idc_escape(summary)}\\n')


def process_flow_edges(j, outfile):
    """Annotates outgoing runtime edges and execution counters per instruction."""
    for src_addr, instr in j.get("Code", {}).items():
        src_dbx = _parse_json_address(src_addr)
        if src_dbx is None:
            continue
        src = addr_dbx2ida(src_dbx)
        exec_count = instr.get("ExecCount", 0)
        edges = instr.get("Edges", {})
        edge_kinds = instr.get("EdgeKinds", {})
        if not edges and not exec_count:
            continue

        kinds_txt = []
        for dst, count in sorted(edges.items(), key=lambda kv: int(kv[1]), reverse=True)[:4]:
            dst_i = _parse_json_address(dst)
            if dst_i is None:
                continue
            dst_hex = f"0x{addr_dbx2ida(dst_i):x}"
            mask = edge_kinds.get(dst, 0)
            if not isinstance(mask, int):
                mask = _safe_int(mask)
                if mask is None:
                    mask = 0
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
        src_dbx = _parse_json_address(daddr)
        if src_dbx is None:
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
        if "Edges" in instr:
            try:
                details.append(f"edges={len(instr.get('Edges'))}")
            except Exception:
                pass

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
        dbx_addr = _parse_json_address(addr_key)
        if dbx_addr is None:
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
    for addr, symbol in symbols.items():
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

            process_runtime_meta(j, outfile)
            process_entry_points(j, outfile)
            annotate_code_details(j, outfile)
            process_flow_edges(j, outfile)
            process_function_sampling(j, outfile)
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
