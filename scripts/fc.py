#!/usr/bin/env python3
import sys
import ast

def compare_files(file1, file2, offset1=0, offset2=0):
    with open(file1, "rb") as f1, open(file2, "rb") as f2:
        # Seek to the specified offsets
        offset1 = ast.literal_eval(offset1)
        offset2 = ast.literal_eval(offset2)
        f1.seek(offset1)
        f2.seek(offset2)
        
        index = 0
        while True:
            byte1 = f1.read(1)
            byte2 = f2.read(1)
            
            # Stop if we reach the end of either file
            if byte1 == b"" or byte2 == b"":
                break

            if byte1 != byte2:
                # Print differences in the desired format
                addr1 = f'{index + offset1:08X} {index + offset2:08X}'  # 32-bit hex address for file1
                byte1_hex = f'{ord(byte1):02X}'
                byte2_hex = f'{ord(byte2):02X}'
                print(f"{addr1}: {byte1_hex} {byte2_hex}")
            
            index += 1

if __name__ == "__main__":
    if len(sys.argv) != 5:
        print("Usage: python compare_files.py <file1> <file2> <offset1> <offset2>")
        sys.exit(1)

    file1 = sys.argv[1]
    file2 = sys.argv[2]
    offset1 = sys.argv[3]
    offset2 = sys.argv[4]

    compare_files(file1, file2, offset1, offset2)

