.286
.model small, c

extrn _main:near
public __acrtused

__acrtused equ 0

_DATA segment word public 'DATA'
_DATA ends

CONST segment word public 'CONST'
CONST ends

_BSS segment word public 'BSS'
_BSS ends

DGROUP group _DATA, CONST, _BSS

_TEXT segment word public 'CODE'
assume cs:_TEXT, ds:DGROUP

start:
	mov ax, DGROUP
	mov ds, ax
	mov es, ax
	call _main
	mov ah, 4Ch
	int 21h

_TEXT ends

end start
