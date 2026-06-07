.286
.model small, c

public _ash_creat
public _ash_write
public _ash_close

_TEXT segment word public 'CODE'
assume cs:_TEXT

_ash_creat proc near
	push bp
	mov bp, sp
	mov ah, 3Ch
	xor cx, cx
	mov dx, [bp+4]
	int 21h
	jnc ash_creat_ok
	mov ax, 0FFFFh
ash_creat_ok:
	pop bp
	ret
_ash_creat endp

_ash_write proc near
	push bp
	mov bp, sp
	mov ah, 40h
	mov bx, [bp+4]
	mov dx, [bp+6]
	mov cx, [bp+8]
	int 21h
	jc ash_write_fail
	cmp ax, [bp+8]
	jne ash_write_fail
	mov ax, 1
	jmp short ash_write_done
ash_write_fail:
	xor ax, ax
ash_write_done:
	pop bp
	ret
_ash_write endp

_ash_close proc near
	push bp
	mov bp, sp
	mov ah, 3Eh
	mov bx, [bp+4]
	int 21h
	pop bp
	ret
_ash_close endp

_TEXT ends

end
