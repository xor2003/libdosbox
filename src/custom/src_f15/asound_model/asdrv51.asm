.286
.model small, c

; This file is the DOS overlay shell around the modernized ASOUND model.
; If you want to replace the driver with SDL or another modern backend,
; this file is mostly reference material for the old ABI and hardware timing.
;
; Practical rewrite advice:
; 1. keep the exported meaning of slots 64h..6Dh
; 2. keep stream/sample scheduling semantics from asound_model.*
; 3. replace direct 388h/389h and PIT/PIC/PPI access with your mixer/backend
;
; The hottest DOS-only path here is sample playback for slot 6Dh.
; It is in asm because the original driver was timing-sensitive and a direct C
; translation was too slow for real game use.

extrn _asdrv_setup:far
extrn _asdrv_shutdown:far
extrn _asdrv_dispatch:far
extrn _asdrv_sample:far
extrn _asdrv_intro:far
extrn _asdrv_timer:far
extrn _asdrv_noise:far
extrn _asdrv_pitch:far
extrn _asdrv_enable:far
extrn _asdrv_disable:far

public __acrtused
__acrtused = 0
public _ash_wrap_setup
public _ash_wrap_shutdown
public _ash_wrap_sample
public _ash_wrap_timer
public _ash_wrap_noise

_DATA segment word public 'DATA'
_DATA ends

CONST segment word public 'CONST'
CONST ends

_BSS segment word public 'BSS'
_BSS ends

DGROUP group _DATA, CONST, _BSS

_TEXT segment word public 'CODE'
assume cs:_TEXT, ds:DGROUP
overlay_payload_start label byte
db 'F15 II AdLib 3-14-91', 0
db 0, 0, 0
dw seg seg127c
dw DGROUP
sound_driver_first_slot  dw 64h
sound_driver_image_size  dw 0
sound_driver_reserved    dw 0
sound_driver_entry_count dw 0Ah
dw offset sound_driver_setup
dw offset sound_driver_shutdown
dw offset sound_driver_dispatch_sound
dw offset sound_driver_play_intro
dw offset sound_driver_enable_drone
dw offset sound_driver_disable_drone
dw offset sound_driver_set_drone_pitch
dw offset sound_driver_timer_tick
dw offset sound_driver_noise_tick
dw offset sound_driver_play_sample

; Tiny EXE entry. The game never runs this like a normal program; it loads the
; overlay and calls the far entry table above.
start:
	mov ax, 4C00h
	int 21h

	public _ash_inp
	_ash_inp proc near
		push bp
	mov bp, sp
	mov dx, [bp+4]
	in  al, dx
	xor ah, ah
	pop bp
	ret
_ash_inp endp

	public _ash_outp
	_ash_outp proc near
		push bp
	mov bp, sp
	mov dx, [bp+4]
	mov al, [bp+6]
	out dx, al
	xor ah, ah
		pop bp
		ret
	_ash_outp endp

	public _ash_cli
	_ash_cli proc near
		cli
		ret
	_ash_cli endp

	public _ash_sti
	_ash_sti proc near
		sti
		ret
	_ash_sti endp

	public _asdrv_write_reg_asm
	_asdrv_write_reg_asm proc near
		push bp
		mov bp, sp
		push cx
		push dx
		mov al, byte ptr [bp+4]
		mov bl, byte ptr [bp+6]
		mov dx, 388h
		mov cx, 62h
ash_reg_delay_addr:
		loop ash_reg_delay_addr
		out dx, al
		mov al, bl
		mov dx, 389h
		mov cx, 0Dh
ash_reg_delay_data:
		loop ash_reg_delay_data
		out dx, al
		pop dx
		pop cx
		pop bp
		ret
	_asdrv_write_reg_asm endp
	_TEXT ends

seg127c segment word public 'CODE'
assume cs:seg127c, ds:DGROUP

sample_saved_pic_mask db 0
sample_saved_port61   db 0

; 8-bit sample bytes are reduced to a 6-bit loudness curve and written to OPL
; register 43h. A modern SDL rewrite does not need to preserve this exact
; mechanism if audible behavior is matched another way.
sample_to_opl_table   db 03Fh,02Dh,026h,023h,020h,01Dh,01Bh,019h
                      db 018h,016h,015h,014h,013h,012h,011h,010h
                      db 010h,00Fh,00Eh,00Eh,00Dh,00Dh,00Ch,00Ch
                      db 00Bh,00Bh,00Ah,00Ah,009h,009h,009h,008h
                      db 008h,007h,007h,007h,006h,006h,006h,006h
                      db 005h,005h,005h,004h,004h,004h,004h,003h
                      db 003h,003h,003h,002h,002h,002h,002h,002h
                      db 001h,001h,001h,001h,000h,000h,000h,000h

ash_sample_opl_write proc near
		; Minimal AdLib register write with fixed delays close to the original
		; overlay calibration. SDL ports should replace this entirely.
		push cx
		push dx
		mov dx, 388h
		mov cx, 62h
ash_sample_delay_addr:
		loop ash_sample_delay_addr
		out dx, al
		mov al, bl
		mov dx, 389h
		mov cx, 0Dh
ash_sample_delay_data:
		loop ash_sample_delay_data
		out dx, al
		pop dx
		pop cx
		ret
ash_sample_opl_write endp

ash_sample_start_tone proc near
		; Programs the OPL voice used by the sample-effect path before the
		; byte stream starts modulating register 43h.
		mov al, 20h
		mov bl, 23h
		call ash_sample_opl_write
		mov al, 23h
		mov bl, 28h
		call ash_sample_opl_write
		mov al, 40h
		mov bl, 3Fh
		call ash_sample_opl_write
		mov al, 43h
		mov bl, 3Fh
		call ash_sample_opl_write
		mov al, 60h
		mov bl, 0AFh
		call ash_sample_opl_write
		mov al, 63h
		mov bl, 0AFh
		call ash_sample_opl_write
		mov al, 80h
		mov bl, 0Dh
		call ash_sample_opl_write
		mov al, 83h
		mov bl, 0Fh
		call ash_sample_opl_write
		mov al, 0C0h
		mov bl, 05h
		call ash_sample_opl_write
		mov al, 0E0h
		mov bl, 00h
		call ash_sample_opl_write
		mov al, 0E3h
		mov bl, 02h
		call ash_sample_opl_write
		mov al, 0B0h
		mov bl, 01h
		call ash_sample_opl_write
		mov al, 0A0h
		mov bl, 08Fh
		call ash_sample_opl_write
		mov al, 0B0h
		mov bl, 02Eh
		call ash_sample_opl_write
		cli
		mov al, 36h
		out 43h, al
		mov ax, 4C90h
		out 40h, al
		mov al, ah
		out 40h, al
		xor al, al
		out 43h, al
		in  al, 40h
		mov bl, al
		in  al, 40h
		mov bh, al
ash_sample_start_wait:
		xor al, al
		out 43h, al
		in  al, 40h
		mov cl, al
		in  al, 40h
		mov ch, al
		neg cx
		add cx, bx
		cmp cx, 0952h
		jb  ash_sample_start_wait
		mov al, 0B0h
		mov bl, 20h
		call ash_sample_opl_write
		mov al, 0A0h
		mov bl, 00h
		call ash_sample_opl_write
		sti
		ret
ash_sample_start_tone endp

ash_timer2_start_mask_irq0 proc near
		; Arms PIT channel 2 and masks IRQ0 state exactly like the DOS driver.
		; This is hardware glue, not portable audio logic.
		push ax
		mov al, bl
		out 43h, al
		pop ax
		out 42h, al
		in  al, 61h
		mov cs:sample_saved_port61, al
		or  al, 1
		and al, 0FDh
		out 61h, al
		cli
		in  al, 21h
		mov cs:sample_saved_pic_mask, al
		or  al, 1
		out 21h, al
		sti
		ret
ash_timer2_start_mask_irq0 endp

ash_sample_prepare_timer proc near
		; Wait for a clean timer edge, then enter the tight sample loop with
		; interrupts disabled, matching the original driver structure.
		call ash_sample_start_tone
		mov bl, 94h
		mov al, 0A5h
		call ash_timer2_start_mask_irq0
		mov ah, 0FFh
ash_sample_prepare_wait1:
		mov al, 80h
		out 43h, al
		jmp short $+2
ash_sample_prepare_wait2:
		in  al, 42h
		cmp ah, al
		mov ah, al
		jnb ash_sample_prepare_wait1
		cli
		ret
ash_sample_prepare_timer endp

ash_sample_restore_timer proc near
		; Restore PIC/PPI/PIT state after the blocking sample path finishes.
		mov al, 0B0h
		mov bl, 00h
		call ash_sample_opl_write
		mov al, 0B1h
		mov bl, 00h
		call ash_sample_opl_write
		mov al, cs:sample_saved_pic_mask
		out 21h, al
		mov al, cs:sample_saved_port61
		out 61h, al
		mov al, 0B6h
		out 43h, al
		xor ax, ax
		out 42h, al
		mov al, ah
		out 42h, al
		sti
		ret
ash_sample_restore_timer endp

	public _asdrv_play_sample_range_asm
	_asdrv_play_sample_range_asm proc near
		; Real DOS sample hot path.
		; Inputs:
		;   [bp+4] sample segment
		;   [bp+6] start offset
		;   [bp+8] end offset (exclusive)
		; Returns AX=1 on success, AX=0 on empty/invalid range.
		push bp
		mov bp, sp
		push ds
		push si
		push di
		push bx
		push cx
		mov ax, [bp+4]
		or  ax, ax
		jz  ash_sample_fail
		mov si, [bp+6]
		mov di, [bp+8]
		cmp si, di
		je  ash_sample_fail
		call ash_sample_prepare_timer
		mov ax, [bp+4]
		mov ds, ax
ash_sample_stream_loop:
		; Per source byte:
		; 1. wait for PIT pacing edge
		; 2. read source byte from sample segment
		; 3. map through sample_to_opl_table
		; 4. write resulting loudness to OPL register 43h
		mov ah, 0FFh
ash_sample_stream_wait1:
		mov al, 80h
		out 43h, al
		jmp short $+2
ash_sample_stream_wait2:
		in  al, 42h
		cmp ah, al
		mov ah, al
		jnb ash_sample_stream_wait1
		xor bh, bh
		mov bl, [si]
		shr bx, 1
		shr bx, 1
		mov bl, cs:[bx+sample_to_opl_table]
		mov al, 43h
		call ash_sample_opl_write
		inc si
		cmp si, di
		jne ash_sample_stream_loop
		pop cx
		pop bx
		pop di
		pop si
		pop ds
		call ash_sample_restore_timer
		mov ax, 1
		pop bp
		ret
ash_sample_fail:
		pop cx
		pop bx
		pop di
		pop si
		pop ds
		xor ax, ax
		pop bp
		ret
	_asdrv_play_sample_range_asm endp

sound_driver_setup proc far
_ash_wrap_setup label far
audio_slot_64 label far
	; slot 64h = setup(sample_segment, setup_value)
	; setup_value decides how many sample variants the game may request.
	push bp
	mov bp, sp
	push ds
	mov ax, DGROUP
	mov ds, ax
	push word ptr [bp+8]
	push word ptr [bp+6]
	call _asdrv_setup
	add sp, 4
	pop ds
	pop bp
	retf
sound_driver_setup endp

sound_driver_shutdown proc far
_ash_wrap_shutdown label far
audio_slot_65 label far
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_shutdown
	pop ds
	retf
sound_driver_shutdown endp

sound_driver_dispatch_sound proc far
audio_slot_66 label far
	push bp
	mov bp, sp
	push ds
	mov ax, DGROUP
	mov ds, ax
	push word ptr [bp+6]
	call _asdrv_dispatch
	add sp, 2
	pop ds
	pop bp
	retf
sound_driver_dispatch_sound endp

sound_driver_play_sample proc far
_ash_wrap_sample label far
audio_slot_6d label far
	; slot 6Dh = play one of three sample effects.
	; The C model resolves which range to use; the DOS side performs the actual
	; blocking hardware playback for compatibility.
	push bp
	mov bp, sp
	push ds
	mov ax, DGROUP
	mov ds, ax
	push word ptr [bp+6]
	call _asdrv_sample
	add sp, 2
	pop ds
	pop bp
	retf
sound_driver_play_sample endp

sound_driver_play_intro proc far
audio_slot_67 label far
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_intro
	pop ds
	retf
sound_driver_play_intro endp

sound_driver_timer_tick proc far
_ash_wrap_timer label far
audio_slot_6b label far
	; slot 6Bh = main music/service tick. SDL rewrites should preserve the fact
	; that the game calls this periodically to advance script state.
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_timer
	pop ds
	retf
sound_driver_timer_tick endp

sound_driver_noise_tick proc far
_ash_wrap_noise label far
audio_slot_6c label far
	; slot 6Ch = secondary noise/drone maintenance tick.
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_noise
	pop ds
	retf
sound_driver_noise_tick endp

sound_driver_set_drone_pitch proc far
audio_slot_6a label far
	push bp
	mov bp, sp
	push ds
	mov ax, DGROUP
	mov ds, ax
	push word ptr [bp+6]
	call _asdrv_pitch
	add sp, 2
	pop ds
	pop bp
	retf
sound_driver_set_drone_pitch endp

sound_driver_enable_drone proc far
audio_slot_68 label far
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_enable
	pop ds
	retf
sound_driver_enable_drone endp

sound_driver_disable_drone proc far
audio_slot_69 label far
	push ds
	mov ax, DGROUP
	mov ds, ax
	call _asdrv_disable
	pop ds
	retf
sound_driver_disable_drone endp

_STACK segment stack 'STACK'
db 128 dup (0)
_STACK ends

seg127c ends

end start
