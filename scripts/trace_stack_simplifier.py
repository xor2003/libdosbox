#!/usr/bin/python3

import re,sys

with open(sys.argv[1], "rt") as f:
    content = f.read().splitlines()

r = re.compile(r' SP:([0-9A-F]{4}) ')
rr = re.compile(r' sp=([0-9a-f]{4})')
i = 0


def process_call(i):
    global content
    first_line = content[i]
    #print(f'CALL {i} {first_line}\n')
    j = 1
    while i + j < len(content):
        second_line = content[i + j]
        if 'CALL' in second_line:
            if process_call(i + j):
                continue
            else:
                return False
        elif ('RET' in second_line or 'Exit interp' in second_line) and 'IRET' not in second_line:
            if 'CALL(' in first_line and 'RETN(' in second_line:
                res1 = re.search(r, first_line)
                res2 = re.search(r, second_line)
                if res1 and res2 and int(res1.group(1), 16) == int(res2.group(1), 16) + 2:
                    content = content[:i] + content[i + j + 1:]
                    print('.')
                    return True
            elif 'CALLF(' in first_line and 'RETF(' in second_line:
                res1 = re.search(r, first_line)
                res2 = re.search(r, second_line)
                if res1 and res2 and int(res1.group(1), 16) == int(res2.group(1), 16) + 4:
                    content = content[:i] + content[i + j + 1:]
                    print('.')
                    return True
            elif 'CALLF(' in first_line and 'Exit interp' in second_line:
                res1 = re.search(r, first_line)
                res2 = re.search(rr, second_line)
                if res1 and res2 and int(res1.group(1), 16) == int(res2.group(1), 16):
                    content = content[:i] + content[i + j + 1:]
                    print('.')
                    return True
            return False
        j = j + 1


while i < len(content):
    first_line = content[i]
    if 'CALL' in first_line:
        if process_call(i):
            continue
    i = i + 1

with open(sys.argv[2], "wt") as fw:
    for line in content:
        fw.write(f'{line}\n')
