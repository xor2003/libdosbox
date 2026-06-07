import struct
import sys

"""
Offset	Type	Name	Description and remarks
0	byte[2]	e_magic	Signature - ASCII "MZ" or "ZM"
2	uint16	e_cblp	If nonzero, the number of bytes in the last page
4	uint16	e_cp	Number of 512-byte pages in the file, not counting the "overlay" segment
6	uint16	e_crlc	Number of relocations
8	uint16	e_cparhdr	Header size, in 16-byte paragraphs
10	uint16	e_minalloc	Minimum allocation
12	uint16	e_maxalloc	Maximum allocation
14	int16	e_ss	Initial SS register
16	uint16	e_sp	Initial SP register
18	uint16	e_csum	Checksum - Usually unused and set to 0
20	uint16	e_ip	Initial IP register
22	int16	e_cs	Initial CS register
24	uint16	e_lfarlc	Relocation table offset, in bytes from the start of the file
26	uint16	e_ovno	Overlay number (or other custom data) - Usually unused
"""
# Open the executable file in binary mode
with open(sys.argv[1], 'r+b') as f:
    # Read the MZ header
    mz_header = f.read(26)

    # Unpack the values from the MZ header
    signature, last_page_size, num_pages, num_relocations, header_size, min_alloc, max_alloc, ss, sp, checksum, ip, cs, reloc_table_offset = struct.unpack(
        "<2sHHHHHHHHHHHH", mz_header)

    print(f"cs:{cs:x} ip:{ip:x} relocs:{num_relocations}")
    # Read the relocation table
    f.seek(reloc_table_offset)
    reloc_table_size = num_relocations * 4
    reloc_table = f.read(reloc_table_size)

    new_list = []
    # Iterate over the relocations
    for i in range(num_relocations):
        # Get the relocation offset
        reloc_offset, reloc_seg = struct.unpack("<HH", reloc_table[i * 4:i * 4 + 4])

        # Calculate the relocated address
        relocated_address = reloc_offset + reloc_seg * 16 + header_size * 16

        f.seek(relocated_address)
        value = struct.unpack("<H", f.read(2))[0]

        # Print the relocated address
        print(f"{relocated_address:x} {reloc_seg:x}:{reloc_offset:x} {value:x}")

        if value < 0xf000:
            new_list.extend([reloc_offset, reloc_seg])

    reloc_table = struct.pack("<" + ("H" * len(new_list)), *new_list)
    num_relocations = len(reloc_table) // 4

    f.seek(6)
    f.write(struct.pack("<H", num_relocations))

    f.seek(reloc_table_offset)
    f.write(reloc_table)


