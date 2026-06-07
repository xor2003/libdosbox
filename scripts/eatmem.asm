Kb4Size equ 4096/16
code segment
start:
        push es
        mov cx, sp ; Save the initial stack pointer

    @OneMoreBlock:
        cmp sp, 1 ; Check if there is enough stack space
        jbe @StackError ; Jump if there is not enough stack space
        mov ah, 48h ; DOS function 48h: Allocate memory
        mov bx, Kb4Size ; Request a 4KB memory block
        int 21h ; Call DOS interrupt
        jc @AllocError ; Jump if the allocation failed
        jmp @NoError ; Jump if the allocation was successful

    @AllocError:
        mov ErrorNr, 1 ; Set the error code to 1 (allocation error)
        jmp @ReleaseIt ; Jump to release the allocated memory

    @StackError:
        mov ErrorNr, 2 ; Set the error code to 2 (stack error)
        jmp @ReleaseIt ; Jump to release the allocated memory

    @ReleaseError:
        mov ErrorNr, 3 ; Set the error code to 3 (release error)
        jmp @done ; Jump to the end

    @NoError:
        push ax ; Save the segment address of the allocated block
        cmp ax, 0x192+0x10 ; Compare with the PSP of the second file
        jb @OneMoreBlock ; Allocate another block if the PSP is not reached

        pop ax ; Restore the segment address of the allocated block
        mov Kb4Seg, ax ; Store the segment address in Kb4Seg

    @ReleaseIt:
        mov bx, cx ; Calculate the number of allocated blocks
        sub bx, sp
        mov Blocks, bx

    @MoreRelease:
        cmp cx, sp ; Check if all blocks are released
        je @Done ; Jump if all blocks are released
        mov ah, 49h ; DOS function 49h: Release memory
        pop es ; Get the segment address of the block to release
        int 21h ; Call DOS interrupt

        jmp @MoreRelease ; Release the next block
    @Done:
        pop es ; Restore the ES register

    mov  ax, 3100h
    mov  dx, Kb4Size
    int  21h

ErrorNr db 0
Kb4Seg dw 0
Blocks dw 0
code ends
end start