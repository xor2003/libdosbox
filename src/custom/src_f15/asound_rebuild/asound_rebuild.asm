.386
OPTION NOSCOPED

SoundStreamState struc
sss_ticks_left              db 0        ; +00: current event delay; 0 means inactive/read next event.
sss_pitch_delta             db 0        ; +01: per-tick pitch delta set by FA.
sss_volume_fade_step        db 0        ; +02: periodic volume fade step set by F8.
sss_note                    db 0        ; +03: current event/note byte from the stream.
sss_instrument              dw 0        ; +04: instrument number set by FC; low byte is used.
sss_keyoff_gap_ticks        db 0        ; +06: ticks before event end to key-off, set by FB.
sss_keyoff_ticks_left       db 0        ; +07: countdown to automatic key-off.
sss_volume_fade_ticks_left  db 0        ; +08: countdown to next volume fade update.
sss_volume_fade_period      db 0        ; +09: volume fade period set by F8.
sss_stream_ptr              dw 0        ; +0A: base pointer to bytecode stream.
sss_stream_pos              dw 0        ; +0C: current byte offset in stream.
sss_loop_pos                dw 0        ; +0E: FE loop marker offset.
sss_loop_count              dw 0        ; +10: FF repeat counter.
sss_end_callback            dw 0        ; +12: optional callback used by FD.
SoundStreamState ends

seg11a3         segment para public 'DATA' use16
                assume cs:seg11a3
aF15IiAdlib3149 db 'F15 II AdLib 3-14-91',0
                align 4
                dw seg seg127c
                dw seg seg11a3
                ; Overlay metadata followed by exported seg127c entry offsets.
                ; Generic exported sound-driver entries. F14 newer-engine
                ; names the same ABI as audio_slot_64..audio_slot_6d /
                ; audio_jump_64..audio_jump_6d; those aliases are kept at
                ; the entry labels below.
sound_driver_first_slot  dw 64h         ; first overlay slot: 0x64
sound_driver_image_size  dw 22ACh       ; 8876-byte payload, excluding MZ header
sound_driver_reserved    dw 0
sound_driver_entry_count dw 0Ah         ; ten exported entries follow
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
                db 1B6h dup(53h)
                ; Standalone ASOUND has padding here. The F.EXE-derived
                ; initialized bytes are preserved in asound_rebuild.before_bytefix.asm.
                db 4Ah dup(53h)
                db    0
                db    0
unk_11C6A       db    0                 ; DATA XREF: detect_vsync_timing:loc_12840↓w
                                        ; seg127c:083B↓r
unk_11C6B       db    7                 ; DATA XREF: seg127c:0830↓w
                                        ; seg127c:0836↓w
aNoAdlibBoardPr db 'No Adlib board present in system$'
word_11C8D      dw 0                    ; DATA XREF: adlib_service_tick+91↓w
                                        ; adlib_mark_sound_active+D↓w ...
word_11C8F      dw 0                    ; DATA XREF: adlib_service_tick:loc_12AF4↓r
                                        ; adlib_service_tick+8B↓w ...
                db    0
                db    0
word_11C93      dw 0                    ; DATA XREF: adlib_calibrate_delay:loc_1289C↓w
                                        ; adlib_calibrate_delay+27↓w ...
byte_11C95      db 0                    ; DATA XREF: sample_restore_timer+E↓r
                                        ; timer2_start_mask_irq0+16↓w
byte_11C96      db 0                    ; DATA XREF: adlib_calibrate_delay+2↓w
                                        ; adlib_calibrate_delay+5E↓r ...
word_11C97      dw 0                    ; DATA XREF: sample_stream_to_opl_volume+1↓r
                                        ; seg127c:07A7↓w
word_11C99      dw 0                    ; DATA XREF: adlib_probe_init+16↓w
                                        ; adlib_probe_init+1F↓w
                db    0
                db    0
SampleRange     struc
sr_end          dw 0
sr_start        dw 0
SampleRange     ends

sample_variant_ranges SampleRange <5C92h, 4797h> ; end,start pairs; DATA XREF: sample_play_case1+24↓o
                SampleRange <6A1Ah, 5C93h>
                SampleRange <7D9Dh, 6A1Bh>
sample_variant_index      dw 0          ; DATA XREF: sample_play_case0:sample_play_case1↓r
                                        ; sample_play_case0:loc_12DEB↓w
sample_variant_max_index  db 0          ; DATA XREF: sample_play_case0+15↓r
                                        ; sample_set_variant_count:loc_12F87↓w
word_11CAC      dw 0                    ; DATA XREF: adlib_service_tick↓r
                                        ; adlib_service_tick+7↓w ...
word_11CAE      dw 0                    ; DATA XREF: sample_play_case0↓r
                                        ; seg127c:loc_13032↓w ...
word_11CB0      dw 0                    ; DATA XREF: adlib_update_drone_mode:loc_13C39↓r
                                        ; adlib_update_drone_mode+F6↓w
                db    0
                db    0
word_11CB4      dw 2BCh                 ; DATA XREF: seg127c:0869↓r
                                        ; seg127c:086F↓r
byte_11CB6      db 0                    ; DATA XREF: seg127c:087E↓w
                                        ; seg127c:088B↓w ...
byte_11CB7      db 0                    ; DATA XREF: adlib_update_drone_mode+12↓r
                                        ; adlib_update_drone_mode+9B↓w
word_11CB8      dw 4D2h                 ; DATA XREF: adlib_update_noise_pitch+3↓r
                                        ; adlib_update_noise_pitch+D↓w ...
                db  48h ; H
                db  92h
                db  10h
                db    8
                db    4
                db    2
                db    1
                db    0
                db    0
                db    2
                db  1Eh
                db    2
                db  3Fh ; ?
                db    2
                db  61h ; a
                db    2
                db  85h
                db    2
                db 0ABh
                db    2
                db 0D4h
                db    2
                db 0FFh
                db    2
                db  2Dh ; -
                db    3
                db  5Dh ; ]
                db    3
                db  90h
                db    3
                db 0C7h
                db    3
byte_11CDA      db 1                    ; DATA XREF: opl_apply_rhythm_flags+10↓r
byte_11CDB      db 1                    ; DATA XREF: opl_apply_rhythm_flags+23↓r
byte_11CDC      db 1                    ; DATA XREF: opl_apply_waveform_flag↓r
                db    0
                db    0
                db    3
                db    1
                db    4
                db    2
                db    5
                db    6
                db    9
                db    7
                db  0Ah
                db    8
                db  0Bh
                db  0Ch
                db  0Fh
                db  10h
                db  63h ; c
                db  0Eh
                db  63h ; c
                db  11h
                db  63h ; c
                db  0Dh
                db  63h ; c
                db    0
                db    1
                db    2
                db    3
                db    4
                db    5
                db    8
                db    9
                db  0Ah
                db  0Bh
                db  0Ch
                db  0Dh
                db  10h
                db  11h
                db  12h
                db  13h
                db  14h
                db  15h
                db  0Ah
                db  0Bh
                db  0Fh
                db  0Fh
                db    1
                db    0
                db  3Bh ; ;
                db    0
                db    0
                db    4
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db  0Bh
                db    8
                db  0Ah
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    0
                db    0
                db  0Ch
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db  0Eh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    0
                db    0
                db  0Ch
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db  0Fh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    3
                db  80h
                db    2
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    6
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0FFh
                db    3
                db    0
                db    4
                db 0F8h
                db 0FFh
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    6
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Ah ; :
                db    0
                db    0
                db    3
                db    7
                db    0
                db    0
                db    1
                db    4
                db    0
                db 0FFh
                db    7
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    6
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    9
                db    0
                db    0
                db    1
                db    0
                db  3Ch ; <
                db    0
                db    0
                db    0
                db    7
                db    0
                db    0
                db    1
                db  26h ; &
                db    0
                db    0
                db    0
                db  55h ; U
                db  55h ; U
                db  70h ; p
                db 0FFh
                db    5
                db    5
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  26h ; &
                db    0
                db    3
                db  0Eh
                db    4
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db  0Fh
                db    4
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db  0Fh
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db  0Fh
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    0
                db    0
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    0
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  2Eh ; .
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  36h ; 6
                db    0
                db    2
                db  0Eh
                db    6
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  36h ; 6
                db    0
                db    2
                db  0Eh
                db    6
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  80h
                db    0
                db  55h ; U
                db    5
                db    0
                db    1
                db 0F0h
                db  3Fh ; ?
                db    5
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  38h ; 8
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  90h
                db    0
                db  34h ; 4
                db  12h
                db  33h ; 3
                db  33h ; 3
                db 0FEh
                db  3Fh ; ?
                db    5
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  38h ; 8
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Bh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  70h ; p
                db    0
                db 0FFh
                db    7
                db    0
                db    1
                db  0Bh
                db  80h
                db    4
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    5
                db  0Dh
                db    1
                db    1
                db    0
                db  1Fh
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    0
                db    6
                db    6
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    1
                db    5
                db  0Bh
                db    1
                db    0
                db  2Fh ; /
                db    0
                db    0
                db    1
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    9
                db    1
                db    6
                db  0Ah
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    1
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    9
                db    7
                db    6
                db    0
                db    0
                db  3Bh ; ;
                db    0
                db    0
                db    3
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    3
                db  0Fh
                db  0Ah
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  28h ; (
                db    0
                db    0
                db    2
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db    1
                db    3
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    2
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  29h ; )
                db    0
                db    0
                db    2
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    4
                db  0Fh
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    3
                db    8
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  21h ; !
                db    0
                db    0
                db    2
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    1
                db    3
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    4
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    5
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Bh
                db    2
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    2
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    5
                db  80h
                db    2
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0FFh
                db    7
                db    0
                db    2
                db    1
                db    0
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    8
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    2
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0F0h
                db    3
                db    0
                db    3
                db    1
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0F6h
                db    7
                db  80h
                db    3
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    7
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    3
                db  80h
                db    3
                db 0FFh
                db 0FFh
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    4
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0C7h
                db    5
                db  80h
                db    4
                db 0F6h
                db 0FFh
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    7
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    0
                db    0
                db    5
                db    1
                db    0
                db  2Ah ; *
                db    0
                db    3
                db  0Eh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    0
                db    0
                db    7
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db  0Fh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    9
                db    0
                db  0Fh
                db    7
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    0
                db  0Fh
                db  0Ah
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    4
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
unk_121D6       db    0                 ; DATA XREF: seg127c:054C↓o
                db    3
                db 0FCh
                db    2
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  14h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  16h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  18h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db    3
                db 0F9h
                db  3Fh ; ?
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  15h
                db 0F9h
                db  3Dh ; =
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  17h
                db 0F9h
                db  3Fh ; ?
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  19h
                db 0F9h
                db  3Ch ; <
                db    9
                db  78h ; x
                db    0
                db    0
unk_12218       db 0FCh                 ; DATA XREF: snd_disp_stream_12218+7↓o
                db    4
                db 0F9h
                db  39h ; 9
                db 0FEh
                db    9
                db    7
                db 0FFh
                db    5
                db    0
                db    0
                db    0
unk_12224       db 0FCh                 ; DATA XREF: snd_disp_stream_12224+7↓o
                db    5
                db 0F9h
                db  34h ; 4
                db  29h ; )
                db  3Ch ; <
                db    0
                db    0
                db    0
                db    0
sound_stream_pitch_slide_1222e       db 0FCh                 ; one-shot stream: instrument, volume, keyoff gap, pitch slide
                                        ; DATA XREF: seg127c:0522↓o
                db    8
                db 0F9h
                db  2Ch ; ,
                db 0FBh
                db    8
                db 0FAh
                db  11h
                db  44h ; D
                db  14h
                db 0FAh
                db    0
                db    0
                db    0
unk_1223C       db 0FCh                 ; DATA XREF: seg127c:0530↓o
                db    8
                db 0F9h
                db  28h ; (
                db 0FBh
                db  16h
                db  3Ah ; :
                db  1Eh
                db    0
                db    0
unk_12246       db 0FCh                 ; DATA XREF: seg127c:053E↓o
                db    8
                db 0F9h
                db  23h ; #
                db 0FBh
                db  12h
                db  27h ; '
                db  1Eh
                db    0
                db    0
unk_12250       db 0FCh                 ; DATA XREF: seg127c:055A↓o
                db  0Ch
                db 0F9h
                db  35h ; 5
                db    9
                db  7Fh ; 
                db    0
                db    0
unk_12258       db 0FCh                 ; DATA XREF: seg127c:0568↓o
                db  0Ah
                db 0F9h
                db  3Dh ; =
                db    9
                db  7Fh ; 
                db    0
                db    0
unk_12260       db 0FCh                 ; DATA XREF: seg127c:05A8↓o
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db    9
                db  91h
                db    0
                db    0
unk_12268       db 0FCh                 ; DATA XREF: seg127c:0576↓o
                db    0
                db 0F9h
                db  36h ; 6
                db  4Fh ; O
                db    8
                db  4Ah ; J
                db    8
                db    0
                db    0
unk_12272       db    0                 ; DATA XREF: seg127c:0584↓o
                db    0
unk_12274       db 0FCh                 ; DATA XREF: seg127c:0599↓o
                db  13h
                db 0F9h
                db  35h ; 5
                db 0FBh
                db    7
                db  30h ; 0
                db  0Eh
                db    0
                db    0
unk_1227E       db 0FCh                 ; DATA XREF: seg127c:0514↓o
                db    7
                db 0F9h
                db  34h ; 4
                db  48h ; H
                db    8
                db  48h ; H
                db  0Fh
                db    0
                db    0
unk_12288       db 0FCh                 ; DATA XREF: snd_disp_stream_12288+7↓o
                db    6
                db 0F9h
                db    0
                db 0F8h
                db  14h
                db    1
                db 0FAh
                db    3
                db    1
                db  96h
                db 0FAh
                db    0
                db 0F8h
                db    0
                db    0
                db    0
                db    0
unk_1229A       db 0FCh                 ; DATA XREF: seg127c:05C4↓o
                db    6
                db 0F9h
                db  12h
                db 0F8h
                db  14h
                db 0FFh
                db 0FAh
                db 0FDh
                db  0Bh
                db 0C8h
                db 0FAh
                db    0
                db 0F8h
                db    0
                db    0
                db    0
                db    0
byte_122AC      db 0FCh                 ; DATA XREF: seg127c:05D2↓o
                db 1Bh
                db 0F9h
                db 2Dh
                db    4
                db  3Ch ; <
                db    0
                db    0
byte_122B4      db 0FCh                 ; DATA XREF: seg127c:05DD↓o
                db 1Ah
                db 0F9h
                db 1Eh
                db 21h
                db  3Ch ; <
                db    0
                db    0
; AdLib bytecode streams interpreted by adlib_interpret_stream. Commands are
; F8/F9/FA/FB/FC/FD/FE/FF; other bytes are event pairs, and
; each stream terminates with event 00,00. Names describe the
; runtime record initialized by adlib_start_intro/adlib_start_intro_release.
adlib_intro_voice0 db 0FCh, 00Eh, 0F9h, 026h, 0FBh, 5, 045h, 00Bh, 048h, 00Bh, 04Ah, 0A5h, 039h, 00Bh, 03Ch, 00Bh                 ; adlib_start_intro -> stream_voice0_state
                db 0FCh, 00Dh, 0F9h, 034h, 0FEh, 021h, 016h, 024h, 00Bh, 026h, 063h, 029h, 00Bh, 028h, 00Bh, 024h
                db 00Bh, 023h, 037h, 023h, 00Bh, 025h, 00Bh, 026h, 00Bh, 024h, 02Ch, 024h, 00Bh, 029h, 00Bh, 028h
                db 00Bh, 024h, 00Bh, 026h, 042h, 01Dh, 00Bh, 01Fh, 00Bh, 021h, 037h, 029h, 6, 028h, 5, 024h
                db 016h, 026h, 037h, 026h, 00Bh, 028h, 00Bh, 029h, 00Bh, 028h, 02Ch, 028h, 00Bh, 028h, 00Bh, 029h
                db 00Bh, 02Bh, 00Bh, 02Dh, 00Bh, 0FCh, 012h, 0F9h, 02Ch, 0FFh, 1, 0, 00Bh, 0FCh, 00Eh, 029h
                db 00Bh, 02Bh, 00Bh, 032h, 042h, 029h, 00Bh, 02Bh, 00Bh, 030h, 042h, 029h, 00Bh, 02Bh, 00Bh, 032h
                db 042h, 029h, 00Bh, 02Bh, 00Bh, 030h, 016h, 0, 0, 0
adlib_intro_voice1 db 0FCh, 00Eh, 0F9h, 026h, 0FBh, 5, 02Dh, 00Bh, 030h, 00Bh, 032h, 0A5h, 02Dh, 00Bh, 030h, 00Bh                 ; adlib_start_intro -> stream_voice1_state
                db 0F9h, 01Dh, 0FEh, 0, 016h, 036h, 00Bh, 0, 016h, 036h, 00Bh, 0, 016h, 034h, 00Bh, 0
                db 016h, 037h, 037h, 0, 016h, 03Bh, 00Bh, 0, 016h, 03Bh, 00Bh, 0, 016h, 03Ch, 00Bh, 0
                db 016h, 03Ch, 037h, 0FCh, 00Dh, 0F9h, 033h, 02Dh, 016h, 030h, 00Bh, 032h, 063h, 026h, 6, 024h
                db 5, 024h, 00Bh, 023h, 042h, 023h, 00Bh, 025h, 00Bh, 026h, 00Bh, 024h, 02Ch, 024h, 00Bh, 024h
                db 00Bh, 026h, 00Bh, 028h, 00Bh, 028h, 00Bh, 0FCh, 00Eh, 0F9h, 024h, 0FFh, 1, 02Bh, 037h, 02Eh
                db 00Bh, 02Dh, 00Bh, 029h, 00Bh, 028h, 058h, 02Bh, 037h, 02Eh, 00Bh, 02Dh, 00Bh, 029h, 00Bh, 028h
                db 00Bh, 029h, 00Bh, 02Bh, 00Bh, 024h, 016h, 0, 0, 0
adlib_intro_voice2 db 0FCh, 00Eh, 0F9h, 027h, 0FBh, 6, 039h, 00Bh, 03Ch, 00Bh, 03Eh, 00Bh, 0F9h, 02Dh, 01Ah, 00Bh                 ; adlib_start_intro -> stream_voice2_state
                db 0, 00Bh, 0F9h, 02Bh, 0FBh, 0FFh, 032h, 02Ch, 02Bh, 02Ch, 02Dh, 02Ch, 0FBh, 6, 02Dh, 00Bh
                db 024h, 00Bh, 0F9h, 01Ch, 0FEh, 0, 016h, 03Eh, 00Bh, 0, 016h, 03Eh, 00Bh, 0, 016h, 03Ch
                db 00Bh, 0, 016h, 040h, 037h, 0, 016h, 040h, 00Bh, 0, 016h, 040h, 00Bh, 0, 016h, 041h
                db 00Bh, 0, 016h, 03Eh, 037h, 0FFh, 3, 024h, 058h, 0FFh, 2, 024h, 037h, 0, 0, 0
adlib_intro_voice3 db 0FCh, 010h, 0F9h, 027h, 0FBh, 6, 021h, 00Bh, 024h, 00Bh, 026h, 00Bh, 0F9h, 02Dh, 00Eh, 00Bh                 ; adlib_start_intro -> stream_voice3_state
                db 0, 00Bh, 0F9h, 02Bh, 02Bh, 02Ch, 029h, 02Ch, 028h, 02Ch, 021h, 00Bh, 024h, 00Bh, 0F9h, 01Ch
                db 0FBh, 010h, 0FEh, 021h, 04Dh, 01Fh, 063h, 021h, 04Dh, 022h, 063h, 0FFh, 3, 01Dh, 021h, 01Dh
                db 037h, 01Fh, 021h, 01Fh, 037h, 01Dh, 021h, 01Dh, 037h, 01Fh, 021h, 01Fh, 016h, 0, 0, 0
adlib_intro_voice4 db 0FCh, 010h, 0F9h, 026h, 0FBh, 5, 021h, 00Bh, 024h, 00Bh, 026h, 00Bh, 0F9h, 02Dh, 026h, 00Bh                 ; adlib_start_intro -> stream_voice4_state
                db 0, 00Bh, 0F9h, 02Bh, 024h, 02Ch, 026h, 02Ch, 026h, 02Ch, 021h, 00Bh, 024h, 00Bh, 0FCh, 011h
                db 0FEh, 0F9h, 028h, 00Eh, 016h, 7, 00Bh, 9, 00Bh, 00Ch, 016h, 00Eh, 00Bh, 7, 016h, 0F9h
                db 02Ah, 9, 00Bh, 00Ch, 00Bh, 00Eh, 00Bh, 011h, 00Bh, 010h, 00Bh, 00Ch, 00Bh, 9, 00Bh, 0FFh
                db 7, 00Eh, 021h, 00Eh, 037h, 010h, 021h, 010h, 037h, 00Eh, 021h, 00Eh, 037h, 010h, 021h, 010h
                db 016h, 0, 0, 0
adlib_intro_voice5 db 0FCh, 010h, 0F9h, 029h, 0FBh, 6, 015h, 00Bh, 018h, 00Bh, 01Ah, 00Bh, 0F9h, 02Dh, 00Eh, 00Bh                 ; adlib_start_intro -> stream_voice5_state
                db 0, 00Bh, 0F9h, 02Bh, 022h, 02Ch, 024h, 02Ch, 01Fh, 02Ch, 021h, 00Bh, 018h, 00Bh, 0F9h, 022h
                db 0FCh, 00Fh, 0FBh, 3, 0FEh, 00Eh, 00Bh, 0FFh, 6, 00Ch, 00Bh, 0FFh, 8, 015h, 00Bh, 0FFh
                db 6, 016h, 00Bh, 0FFh, 8, 00Eh, 00Bh, 0FFh, 6, 00Ch, 00Bh, 0FFh, 8, 015h, 00Bh, 0FFh
                db 6, 016h, 00Bh, 0FFh, 8, 00Eh, 00Bh, 0FFh, 3, 0F9h, 026h, 015h, 00Bh, 018h, 00Bh, 01Ah
                db 00Bh, 0F9h, 023h, 0FEh, 00Ch, 00Bh, 0FFh, 8, 015h, 00Bh, 0FFh, 6, 016h, 00Bh, 0FFh, 8
                db 00Eh, 00Bh, 0FFh, 6, 00Ch, 00Bh, 0FFh, 8, 015h, 00Bh, 0FFh, 6, 016h, 00Bh, 0FFh, 8
                db 016h, 00Bh, 0FFh, 7, 018h, 00Bh, 0FFh, 3, 0F9h, 028h, 0, 00Bh, 015h, 00Bh, 018h, 00Bh
                db 01Ah, 00Bh, 0F9h, 025h, 0FEh, 016h, 00Bh, 0FFh, 7, 018h, 00Bh, 0FFh, 3, 0, 00Bh, 0
                db 0, 0
adlib_release_voice0 db 0FCh, 00Eh, 0F9h, 026h, 0FBh, 5, 045h, 00Bh, 048h, 00Bh, 04Ah, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice0_state
adlib_release_voice1 db 0FCh, 00Eh, 0F9h, 026h, 0FBh, 5, 02Dh, 00Bh, 030h, 00Bh, 032h, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice1_state
adlib_release_voice2 db 0FCh, 00Eh, 0F9h, 027h, 0FBh, 6, 039h, 00Bh, 03Ch, 00Bh, 03Eh, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice2_state
adlib_release_voice3 db 0FCh, 010h, 0F9h, 027h, 0FBh, 6, 021h, 00Bh, 024h, 00Bh, 026h, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice3_state
adlib_release_voice4 db 0FCh, 010h, 0F9h, 026h, 0FBh, 5, 021h, 00Bh, 024h, 00Bh, 026h, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice4_state
adlib_release_voice5 db 0FCh, 010h, 0F9h, 029h, 0FBh, 6, 015h, 00Bh, 018h, 00Bh, 01Ah, 02Ch, 0, 0                 ; adlib_start_intro_release -> stream_voice5_state
adlib_copyright db 'Copyright (C) 1989 by MicroProse Software, All Rights Reserved.',0
                db 8 dup(0)
word_125C2      dw 0                    ; DATA XREF: adlib_service_tick+48↓r
                                        ; adlib_service_tick+4F↓w ...
word_125C4      dw 0                    ; DATA XREF: adlib_service_tick+69↓r
                                        ; adlib_service_tick+70↓w ...
word_125C6      dw 0                    ; DATA XREF: adlib_service_tick+4B↓r
                                        ; opl_key_on_voice+8B↓w
word_125C8      dw 0                    ; DATA XREF: adlib_service_tick+6C↓r
                                        ; opl_key_on_voice+F1↓w
byte_125CA      db 0                    ; DATA XREF: adlib_start_stream↓r
                                        ; adlib_start_stream+5↓w ...
                db    0
                ; Six 20-byte sound stream runtime states. F.EXE dump values may
                ; contain initialized state; standalone ASOUND stores zeroed
                ; overlay records on disk.
stream_voice0_state      SoundStreamState <>   ; DATA XREF: adlib_start_intro+3↓o
                                        ; adlib_start_intro_release+3↓o ...
stream_voice1_state      SoundStreamState <>   ; DATA XREF: adlib_start_intro+E↓o
                                        ; adlib_start_intro_release+E↓o ...
stream_voice2_state      SoundStreamState <>   ; DATA XREF: adlib_start_intro+19↓o
                                        ; adlib_start_intro_release+19↓o ...
stream_voice3_state       SoundStreamState <>   ; DATA XREF: adlib_start_intro+24↓o
                                        ; adlib_start_intro_release+24↓o ...
stream_voice4_state      SoundStreamState <>   ; DATA XREF: adlib_start_intro+2F↓o
                                        ; adlib_start_intro_release+2F↓o ...
stream_voice5_state       SoundStreamState <>   ; DATA XREF: adlib_start_intro+3A↓o
                                        ; adlib_start_intro_release+3A↓o
                db 14h dup(0)
byte_12658      db 0                    ; DATA XREF: adlib_service_tick+3B↓r
                                        ; adlib_service_tick+41↓r ...
byte_12659      db 0                    ; DATA XREF: adlib_service_tick+38↓r
                                        ; adlib_service_tick:loc_12AD2↓r ...
word_1265A      dw 0                    ; DATA XREF: adlib_update_noise_pitch+1B↓r
                                        ; opl_key_on_voice+5D↓w
word_1265C      dw 0                    ; DATA XREF: adlib_update_noise_pitch+34↓r
                                        ; opl_key_on_voice+C3↓w
byte_1265E      db 0                    ; DATA XREF: adlib_interpret_stream+33↓r
                                        ; adlib_interpret_stream+11F↓r ...
byte_1265F      db 0                    ; DATA XREF: adlib_service_tick+58↓r
                                        ; adlib_update_noise_pitch+23↓r ...
byte_12660      db 0                    ; DATA XREF: adlib_service_tick+79↓r
                                        ; adlib_update_noise_pitch+3C↓r ...
                db 0BEh dup(0)
byte_1271F      db 0                    ; DATA XREF: opl_key_off_voice:loc_13360↓r
                                        ; opl_key_on_voice:loc_1350C↓r ...
                db 9Ah dup(0)
word_127BA      dw 0                    ; DATA XREF: opl_apply_feedback+7↓r
                                        ; opl_load_instrument+16↓w
word_127BC      dw 0                    ; DATA XREF: opl_apply_operator_level+7↓r
                                        ; opl_apply_attack_decay+7↓r ...
word_127BE      dw 0                    ; DATA XREF: opl_apply_operator_level+10↓r
                                        ; opl_apply_operator_level+22↓r ...
seg11a3         ends

; ===========================================================================

; Segment type: Pure code
seg127c         segment para public 'CODE' use16
                assume cs:seg127c
                assume cs:seg127c, ds:seg11a3, ss:seg11a3
; Missing labels from IDA listing, expressed as offsets in seg127c
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db 0
seg_127C9       dw 0                    ; DATA XREF: adlib_service_tick+F↓w
                                        ; adlib_service_tick:loc_12A98↓r
word_127CB      dw 0                    ; DATA XREF: adlib_service_tick+14↓w
                                        ; adlib_service_tick+2F↓r
                db 3Fh
                db 2Dh
                db  26h ; &
                db  23h ; #
                db 20h
                db  1Dh
                db 1Bh
                db  19h
                db 18h
                db  16h
                db  15h
                db  14h
                db 13h
                db  12h
                db 11h
                db  10h
                db 10h
                db  0Fh
                db 0Eh
                db 0Eh
                db 0Dh
                db  0Dh
                db  0Ch
                db 0Ch
                db  0Bh
                db 0Bh
                db  0Ah
                db 0Ah
                db    9
                db 9
                db    9
                db 8
                db    8
                db 7
                db 7
                db 7
                db 6
                db 6
                db 6
                db 6
                db 5
                db    5
                db    5
                db 4
                db    4
                db 4
                db    4
                db 3
                db    3
                db 3
                db    3
                db 2
                db    2
                db 2
                db    2
                db 2
                db    1
                db 1
                db    1
                db 1
                db    0
                db 3 dup(0)
word_1280D      dw 3Eh                  ; DATA XREF: adlib_calibrate_delay+4D↓w
                                        ; opl_write_port+3↓r
word_1280F      dw 9                    ; DATA XREF: adlib_calibrate_delay+5A↓w
                                        ; opl_write_port+10↓r

; =============== S U B R O U T I N E =======================================


detect_vsync_timing       proc near               ; CODE XREF: adlib_play_intro_until_key↓p
                cli
                mov     dx, 3DAh

loc_12815:                              ; CODE XREF: detect_vsync_timing+7↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jz      short loc_12815

loc_1281A:                              ; CODE XREF: detect_vsync_timing+C↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jnz     short loc_1281A
                mov     bl, 1
                xor     cx, cx

loc_12823:                              ; CODE XREF: detect_vsync_timing+1B↓j
                                        ; detect_vsync_timing+20↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jnz     short loc_12833
                and     al, 1
                db 3Ah, 0C3h            ; cmp al, bl
                jz      short loc_12823
                xor     bl, 1
                loop    loc_12823

loc_12833:                              ; CODE XREF: detect_vsync_timing+15↑j
                sti
                neg     cx
                xor     al, al
                cmp     cx, 258h
                jb      short loc_12840
                mov     al, 0FFh

loc_12840:                              ; CODE XREF: detect_vsync_timing+2B↑j
                mov     byte ptr unk_11C6A, al
                retn
detect_vsync_timing       endp


; =============== S U B R O U T I N E =======================================


bda_wait_floppy_tick       proc near               ; CODE XREF: adlib_probe_init+C↓p
                push    es
                push    di
                mov     ax, 0
                mov     es, ax
                mov     di, 440h
                mov     byte ptr es:[di], 1
                dec     di

loc_12853:                              ; CODE XREF: bda_wait_floppy_tick+14↓j
                mov     al, es:[di]
                and     al, 0Fh
                jnz     short loc_12853
                pop     di
                pop     es
                retn
bda_wait_floppy_tick       endp


; =============== S U B R O U T I N E =======================================


timer2_measure_delta       proc near               ; CODE XREF: adlib_calibrate_delay:loc_128A5↓p
                push    cx
                cli
                mov     al, 80h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     bl, al
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     bh, al
                mov     cx, 100h

loc_1286E:                              ; CODE XREF: timer2_measure_delta:loc_1286E↓j
                loop    loc_1286E
                mov     al, 80h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     dl, al
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     dh, al
                sti
                sub     bx, dx
                pop     cx
                retn
timer2_measure_delta       endp


; =============== S U B R O U T I N E =======================================


adlib_calibrate_delay       proc near               ; CODE XREF: adlib_probe_init+F↓p
                in      al, 61h         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     byte_11C96, al
                or      al, 1
                and     al, 0FDh
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12892:                              ; CODE XREF: adlib_calibrate_delay+F↑j
                xor     al, al
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12898:                              ; CODE XREF: adlib_calibrate_delay+15↑j
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_1289C:                              ; CODE XREF: adlib_calibrate_delay+19↑j
                mov     word_11C93, 0
                mov     cx, 10h

loc_128A5:                              ; CODE XREF: adlib_calibrate_delay+2B↓j
                call    timer2_measure_delta
                add     word_11C93, bx
                loop    loc_128A5
                mov     bx, word_11C93
                shr     bx, 1
                shr     bx, 1
                shr     bx, 1
                shr     bx, 1
                cmp     bx, 0A28h
                jle     short loc_128C3
                mov     bx, 0A28h

loc_128C3:                              ; CODE XREF: adlib_calibrate_delay+3D↑j
                mov     dx, 0
                mov     ax, 5140h
                div     bx
                inc     ax
                mov     ah, 0
                mov     cs:word_1280D, ax
                shr     ax, 1
                shr     ax, 1
                shr     ax, 1
                inc     ax
                mov     ah, 0
                mov     cs:word_1280F, ax
                mov     al, byte_11C96
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                retn
adlib_calibrate_delay       endp


; =============== S U B R O U T I N E =======================================


adlib_probe_init       proc near               ; CODE XREF: seg127c:07AE↓p
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                xor     ax, ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                call    bda_wait_floppy_tick
                call    adlib_calibrate_delay
                mov     bl, 94h
                mov     al, 0A5h
                mov     word_11C99, 0
                call    timer2_start_mask_irq0
                mov     word_11C99, 0
                mov     dx, 43h ; 'C'
                mov     al, 80h
                out     dx, al          ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12912:                              ; CODE XREF: adlib_probe_init+2B↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     ah, al
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12918:                              ; CODE XREF: adlib_probe_init+31↑j
                mov     al, 80h
                out     dx, al          ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_1291D:                              ; CODE XREF: adlib_probe_init+36↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                db 3Ah, 0E0h            ; cmp ah, al
                jnz     short loc_1292E
                mov     ax, 9090h
                mov     word ptr cs:loc_12E33, ax
                mov     word ptr cs:loc_12F13, ax

loc_1292E:                              ; CODE XREF: adlib_probe_init+3C↑j
                call    sample_restore_timer
                mov     al, 4
                mov     bl, 60h ; '`'
                call    opl_shadow_write
                mov     bl, 80h
                call    opl_shadow_write
                mov     dx, 388h
                in      al, dx
                push    ax
                mov     al, 2
                mov     bl, 0FFh
                call    opl_shadow_write
                mov     al, 4
                mov     bl, 21h ; '!'
                call    opl_shadow_write
                mov     cx, 0C8h
                mov     dx, 388h

loc_12956:                              ; CODE XREF: adlib_probe_init+72↓j
                in      al, dx
                loop    loc_12956
                push    ax
                mov     al, 4
                mov     bl, 60h ; '`'
                call    opl_shadow_write
                mov     bl, 80h
                call    opl_shadow_write
                pop     ax
                pop     bx
                mov     dx, 0
                and     al, 0E0h
                cmp     al, 0C0h
                jnz     short loc_1297D
                and     bl, 0E0h
                cmp     bl, 0
                jnz     short loc_1297D
                call    adlib_reset_state
                retn
; ---------------------------------------------------------------------------

loc_1297D:                              ; CODE XREF: adlib_probe_init+8A↑j
                                        ; adlib_probe_init+92↑j
                mov     ax, 3
                int     10h             ; - VIDEO - SET VIDEO MODE
                                        ; AL = mode
                mov     dx, 23Ch
                mov     ah, 9
                int     21h             ; DOS - PRINT STRING
                                        ; DS:DX -> string terminated by "$"
                mov     ax, 4C00h
                int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT)
adlib_probe_init       endp                    ; AL = exit code


; =============== S U B R O U T I N E =======================================


adlib_reset_state       proc near               ; CODE XREF: adlib_probe_init+94↑p
                                        ; adlib_play_intro_until_key+35↓p ...
                mov     ax, 0
                mov     byte_125CA, al
                mov     byte_12658, al
                mov     byte_12659, al
                mov     word_125C6, ax
                mov     word_125C8, ax
                lea     bx, stream_voice0_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, stream_voice1_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, stream_voice2_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, stream_voice3_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, stream_voice4_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, stream_voice5_state
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                mov     ds:27Eh, ax
                mov     ds:280h, ax
                mov     ds:286h, al
                mov     ds:287h, al
                mov     byte ptr byte_125CA, 0FFh
                mov     al, 0B1h
                mov     bl, 0
                call    opl_shadow_write
                mov     al, 0B2h
                mov     bl, 0
                call    opl_shadow_write
                mov     al, 84h
                mov     bl, 0Fh
                call    opl_shadow_write
                mov     al, 85h
                mov     bl, 0Fh
                call    opl_shadow_write
                retn
adlib_reset_state       endp


; =============== S U B R O U T I N E =======================================


opl_clear_regs       proc near               ; CODE XREF: adlib_play_intro_until_key+3↓p
                                        ; seg127c:07D5↓p
                mov     bx, 0
                mov     ax, 0FFh

loc_12A1C:                              ; CODE XREF: opl_clear_regs+C↓j
                push    ax
                call    opl_shadow_write
                pop     ax
                dec     ax
                jnz     short loc_12A1C
                mov     al, 1
                mov     bl, 20h ; ' '
                call    opl_shadow_write
                mov     al, 0BDh
                call    opl_shadow_write
                retn
opl_clear_regs       endp

                assume es:seg11a3, ss:seg11a3

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_write_shadow_args       proc near               ; CODE XREF: opl_set_voice_volume+62↓p
                                        ; opl_set_voice_volume_direct+3E↓p ...

arg_0           = word ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                mov     ax, [bp+arg_0]
                mov     bl, [bp+arg_2]
                pop     bp
opl_write_shadow_args       endp


; =============== S U B R O U T I N E =======================================


opl_shadow_write       proc near               ; CODE XREF: adlib_probe_init+50↑p
                                        ; adlib_probe_init+55↑p ...
                push    di
                mov     ah, 0
                mov     di, ax
                mov     [di+0C32h], bl
                pop     di
opl_shadow_write       endp


; =============== S U B R O U T I N E =======================================


opl_write_port       proc near               ; CODE XREF: sample_stream_to_opl_volume+25↓p
                mov     dx, 388h
                mov     cx, cs:word_1280D

loc_12A4D:                              ; CODE XREF: opl_write_port:loc_12A4D↓j
                loop    loc_12A4D
                out     dx, al
                mov     al, bl
                mov     dx, 389h
                mov     cx, cs:word_1280F

loc_12A5A:                              ; CODE XREF: opl_write_port:loc_12A5A↓j
                loop    loc_12A5A
                out     dx, al
                retn
opl_write_port       endp


; =============== S U B R O U T I N E =======================================


opl_shadow_set_fnum       proc near               ; CODE XREF: adlib_update_noise_pitch+26↓p
                                        ; adlib_update_noise_pitch+3F↓p
                push    ax
                add     al, 0A0h
                call    opl_shadow_write
                pop     ax
                add     al, 0B0h
                mov     bl, bh
                or      bl, 20h
                call    opl_shadow_write
                retn
opl_shadow_set_fnum       endp


; =============== S U B R O U T I N E =======================================


adlib_service_tick       proc near               ; CODE XREF: seg127c:loc_13002↓p
                cmp     word_11CAC, 0
                jz      short loc_12A7B
                dec     word_11CAC

loc_12A7B:                              ; CODE XREF: adlib_service_tick+5↑j
                push    es
                push    si
                push    di
                push    bp
                mov     cs:seg_127C9, ss
                mov     cs:word_127CB, sp
                mov     ax, seg seg11a3
                mov     es, ax
                mov     ss, ax
                assume ss:seg11a3
                mov     sp, 238h
                call    far ptr adlib_update_all_streams

loc_12A98:                              ; DATA XREF: seg11a3:0234↑o
                mov     bx, cs:seg_127C9
                mov     ss, bx
                mov     sp, cs:word_127CB
                pop     bp
                pop     di
                pop     si
                pop     es
                assume es:nothing
                mov     al, byte_12659
                or      al, byte_12658
                jz      short loc_12AF4
                cmp     byte_12658, 0
                jz      short loc_12AD2
                mov     ax, word_125C2
                add     ax, word_125C6
                mov     word_125C2, ax
                dec     byte_12658
                jnz     short loc_12AD2
                mov     al, byte_1265F
                add     al, 0B0h
                mov     bl, 0
                call    opl_shadow_write

loc_12AD2:                              ; CODE XREF: adlib_service_tick+46↑j
                                        ; adlib_service_tick+56↑j
                cmp     byte_12659, 0
                jz      short locret_12AF3
                mov     ax, word_125C4
                add     ax, word_125C8
                mov     word_125C4, ax
                dec     byte_12659
                jnz     short locret_12AF3
                assume es:nothing
                mov     al, byte_12660
                add     al, 0B0h
                mov     bl, 0
                call    opl_shadow_write

locret_12AF3:                           ; CODE XREF: adlib_service_tick+67↑j
                                        ; adlib_service_tick+77↑j
                retn
; ---------------------------------------------------------------------------

loc_12AF4:                              ; CODE XREF: adlib_service_tick+3F↑j
                cmp     word_11C8F, 0FFFFh
                jz      short locret_12B07
                mov     word_11C8F, 0FFFFh
                mov     word_11C8D, 0FFFFh

locret_12B07:                           ; CODE XREF: adlib_service_tick+89↑j
                retn
adlib_service_tick       endp


; =============== S U B R O U T I N E =======================================


adlib_update_noise_pitch       proc near               ; CODE XREF: seg127c:0856↓p
                mov     bx, 9248h
                add     bx, word_11CB8
                ror     bx, 1
                ror     bx, 1
                ror     bx, 1
                mov     word_11CB8, bx
                cmp     byte_12658, 0
                jz      short loc_12B31
                xor     bx, 0FFFFh
                and     bx, word_1265A
                add     bx, word_125C2
                mov     al, byte_1265F
                call    opl_shadow_set_fnum

loc_12B31:                              ; CODE XREF: adlib_update_noise_pitch+16↑j
                cmp     byte_12659, 0
                jz      short locret_12B4A
                mov     bx, word_11CB8
                and     bx, word_1265C
                add     bx, word_125C4
                mov     al, byte_12660
                call    opl_shadow_set_fnum

locret_12B4A:                           ; CODE XREF: adlib_update_noise_pitch+2E↑j
                retn
adlib_update_noise_pitch       endp

                assume es:seg11a3, ss:seg11a3

; =============== S U B R O U T I N E =======================================


adlib_mark_sound_active       proc near               ; CODE XREF: opl_key_on_voice+8E↓p
                                        ; opl_key_on_voice+F4↓p
                cmp     word_11C8F, 1
                jz      short locret_12B5E
                mov     word_11C8F, 1
                mov     word_11C8D, 1

locret_12B5E:                           ; CODE XREF: adlib_mark_sound_active+5↑j
                retn
adlib_mark_sound_active       endp

; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                mov     ax, [bp+8]
                mov     bx, [bp+6]
                mov     cx, [bp+4]
                pop     bp
                call    adlib_start_stream
                retn

; =============== S U B R O U T I N E =======================================


adlib_start_stream       proc near               ; CODE XREF: seg127c:03AC↑p
                                        ; adlib_start_intro+B↓p ...
                                        ; BX -> SoundStreamState
                                        ; CX -> data/pattern table for sss_stream_ptr
                                        ; AX -> initial value for sss_end_callback
                mov     dl, byte_125CA
                push    dx
                mov     byte_125CA, 0
                mov     byte ptr [bx+1], 0      ; sss_pitch_delta
                mov     byte ptr [bx+9], 0FFh   ; sss_volume_fade_period
                mov     byte ptr [bx+2], 0      ; sss_volume_fade_step
                mov     [bx+0Ah], cx            ; sss_stream_ptr
                mov     word ptr [bx+0Ch], 0    ; sss_stream_pos
                mov     word ptr [bx+0Eh], 0    ; sss_loop_pos
                mov     word ptr [bx+10h], 0    ; sss_loop_count
                mov     byte ptr [bx+6], 0      ; sss_keyoff_gap_ticks
                mov     [bx+12h], ax            ; sss_end_callback
                mov     byte ptr [bx], 1        ; sss_ticks_left
                pop     dx
                mov     byte_125CA, dl
                retn
adlib_start_stream       endp


; =============== S U B R O U T I N E =======================================


adlib_start_intro       proc near               ; CODE XREF: adlib_play_intro_until_key+6↓p
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, adlib_intro_voice0
                call    adlib_start_stream
                lea     bx, stream_voice1_state
                lea     cx, adlib_intro_voice1
                call    adlib_start_stream
                lea     bx, stream_voice2_state
                lea     cx, adlib_intro_voice2
                call    adlib_start_stream
                lea     bx, stream_voice3_state
                lea     cx, adlib_intro_voice3
                call    adlib_start_stream
                lea     bx, stream_voice4_state
                lea     cx, adlib_intro_voice4
                call    adlib_start_stream
                lea     bx, stream_voice5_state
                lea     cx, adlib_intro_voice5
                jmp     short adlib_start_stream
adlib_start_intro       endp


; =============== S U B R O U T I N E =======================================


adlib_start_intro_release       proc near               ; CODE XREF: adlib_play_intro_until_key+23↓p
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, adlib_release_voice0
                call    adlib_start_stream
                lea     bx, stream_voice1_state
                lea     cx, adlib_release_voice1
                call    adlib_start_stream
                lea     bx, stream_voice2_state
                lea     cx, adlib_release_voice2
                call    adlib_start_stream
                lea     bx, stream_voice3_state
                lea     cx, adlib_release_voice3
                call    adlib_start_stream
                lea     bx, stream_voice4_state
                lea     cx, adlib_release_voice4
                call    adlib_start_stream
                lea     bx, stream_voice5_state
                lea     cx, adlib_release_voice5
                jmp     adlib_start_stream
adlib_start_intro_release       endp


; =============== S U B R O U T I N E =======================================


adlib_play_intro_until_key       proc near               ; CODE XREF: seg127c:0821↓p
                call    detect_vsync_timing
                call    opl_clear_regs
                call    adlib_start_intro

loc_12C3A:                              ; CODE XREF: adlib_play_intro_until_key+1C↓j
                mov     al, stream_voice0_state.sss_ticks_left
                or      al, stream_voice1_state.sss_ticks_left
                or      al, stream_voice2_state.sss_ticks_left
                cmp     al, 0
                jz      short loc_12C51
                mov     ah, 1
                int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR
                                        ; Return: ZF clear if character in buffer
                                        ; AH = scan code, AL = character
                                        ; ZF set if no character in buffer
                jz      short loc_12C3A
                mov     al, 0FFh

loc_12C51:                              ; CODE XREF: adlib_play_intro_until_key+16↑j
                mov     ah, 0
                push    ax
                call    adlib_start_intro_release

loc_12C57:                              ; CODE XREF: adlib_play_intro_until_key+33↓j
                mov     al, stream_voice0_state.sss_ticks_left
                or      al, stream_voice1_state.sss_ticks_left
                or      al, stream_voice2_state.sss_ticks_left
                cmp     al, 0
                jnz     short loc_12C57
                call    adlib_reset_state
                pop     ax
                retn
adlib_play_intro_until_key       endp

                ; ---------------------------------------------------------------------------
                snd_disp_random2_table label word
snd_disp_random2_stream_0     label word
                dw 1960
snd_disp_random2_stream_1     label word
                dw 1968
snd_disp_random2_stream_2     label word
                dw 1976
snd_disp_random2_stream_3     label word
                dw 1984

; =============== S U B R O U T I N E =======================================


snd_disp_random_stream2       proc near               ; DATA XREF: seg127c:05E6↓o
                mov     bx, word_11CB8
                shr     bx, 1
                shr     bx, 1
                and     bx, 6
                mov     cx, cs:[bx+4ABh]
                mov     ax, 0
                lea     bx, stream_voice2_state
                jmp     adlib_start_stream
snd_disp_random_stream2       endp

; ---------------------------------------------------------------------------
snd_disp_random0_table label word
snd_disp_random0_stream_0 label word
                dw 7C8h
snd_disp_random0_stream_1 label word
                dw 7D0h
snd_disp_random0_stream_2 label word
                dw 7D8h
snd_disp_random0_stream_3 label word
                dw 7E0h
                ; bytes decoded as: mov bx, word_11CB8 ; shr bx,1 ; shr bx,1 ; shr bx,1 ; and bx,6 ; mov cx,cs:[bx+4CDh] ; mov ax,0 ; lea bx,stream_voice0_state ; jmp adlib_start_stream
snd_disp_random_stream0      dw 1E8Bh                ; DATA XREF: seg127c:05E4↓o
snd_disp_random0_encoded_stream_0      label word
                dw 288h
                db 0D1h
                db 0EBh
                db 0D1h
                db 0EBh
                db 0D1h
                db 0EBh
                db 83h
                db 0E3h
                db 6
                db 2Eh
                db 8Bh
                db 8Fh
                db 0CDh
                db 4
                db 0B8h
                db 0
                db 0
                db 8Dh
                db 1Eh
                db 0B0h
                db 0Bh
                db 0E9h
                db 0BFh
                db 0FEh

; =============== S U B R O U T I N E =======================================


snd_disp_stream_12218       proc near               ; DATA XREF: seg127c:05E8↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12218
                jmp     adlib_start_stream
snd_disp_stream_12218       endp


; =============== S U B R O U T I N E =======================================


snd_disp_stream_12224       proc near               ; DATA XREF: seg127c:05F6↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12224
                jmp     adlib_start_stream
snd_disp_stream_12224       endp

; ---------------------------------------------------------------------------

snd_disp_stream_1227e:                              ; DATA XREF: seg127c:05F0↓o
                mov     ax, 0
                lea     bx, stream_voice2_state
                lea     cx, unk_1227E
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_1222e:                              ; DATA XREF: seg127c:05EE↓o
                mov     ax, 0
                lea     bx, stream_voice3_state
                lea     cx, sound_stream_pitch_slide_1222e
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_1223c:                              ; DATA XREF: seg127c:05EC↓o
                mov     ax, 0
                lea     bx, stream_voice3_state
                lea     cx, unk_1223C
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_12246:                              ; DATA XREF: seg127c:05EA↓o
                mov     ax, 0
                lea     bx, stream_voice3_state
                lea     cx, unk_12246
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_121d6:                              ; DATA XREF: seg127c:0606↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_121D6
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_12250:                              ; DATA XREF: seg127c:0600↓o
                mov     ax, 0
                lea     bx, stream_voice3_state
                lea     cx, unk_12250
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_12258:                              ; DATA XREF: seg127c:05FC↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12258
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_12268:                              ; DATA XREF: seg127c:0602↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12268
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_silence_voice0:                              ; DATA XREF: seg127c:05FE↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12272
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_stream_12274_if_idle:                              ; DATA XREF: seg127c:05F8↓o
                cmp     stream_voice4_state.sss_ticks_left, 0
                jnz     short locret_12D60
                mov     ax, 0
                lea     bx, stream_voice4_state
                lea     cx, unk_12274
                call    adlib_start_stream

locret_12D60:                           ; CODE XREF: seg127c:0590↑j
                retn
; ---------------------------------------------------------------------------

snd_disp_stream_12260:                              ; DATA XREF: seg127c:05FA↓o
                mov     ax, 0
                lea     bx, stream_voice0_state
                lea     cx, unk_12260
                jmp     adlib_start_stream

; =============== S U B R O U T I N E =======================================


snd_disp_stream_12288       proc near               ; DATA XREF: seg127c:05F2↓o
                mov     ax, 0
                lea     bx, stream_voice1_state
                lea     cx, unk_12288
                jmp     adlib_start_stream
snd_disp_stream_12288       endp

; ---------------------------------------------------------------------------

snd_disp_stream_1229a:                              ; DATA XREF: seg127c:05F4↓o
                mov     ax, 0
                lea     bx, stream_voice2_state
                lea     cx, unk_1229A
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------

snd_disp_dual_stream_122ac:                              ; DATA XREF: seg127c:0604↓o
                mov     ax, 0
                lea     bx, stream_voice1_state
                lea     cx, byte_122AC
                call    adlib_start_stream
                lea     bx, stream_voice3_state
                lea     cx, byte_122B4
                jmp     adlib_start_stream
; ---------------------------------------------------------------------------
audio_sound_dispatch_table label word    ; audio_slot_66 dispatches by caller-provided byte offset.
                dw offset snd_disp_random_stream0
                dw offset snd_disp_random_stream2
                dw offset snd_disp_stream_12218
                dw offset snd_disp_stream_12246
                dw offset snd_disp_stream_1223c
                dw offset snd_disp_stream_1222e
                dw offset snd_disp_stream_1227e
                dw offset snd_disp_stream_12288
                dw offset snd_disp_stream_1229a
                dw offset snd_disp_stream_12224
                dw offset snd_disp_stream_12274_if_idle
                dw offset snd_disp_stream_12260
                dw offset snd_disp_stream_12258
                dw offset snd_disp_silence_voice0
                dw offset snd_disp_stream_12250
                dw offset snd_disp_stream_12268
                dw offset snd_disp_dual_stream_122ac
                dw offset snd_disp_stream_121d6
sample_dispatch_table       dw offset sample_play_case0     ; DATA XREF: seg127c:0806↓r
                dw offset sample_play_case1
                dw offset sample_play_case2

; =============== S U B R O U T I N E =======================================


sample_play_case0       proc near               ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:sample_dispatch_table↑o
                cmp     word_11CAE, 0
                jnz     short locret_12DDE
                mov     bx, 0
                mov     cx, 31F3h
                jmp     short loc_12E0B
; ---------------------------------------------------------------------------
                db 90h
; ---------------------------------------------------------------------------

locret_12DDE:                           ; CODE XREF: sample_play_case0+5↑j
                retn
; ---------------------------------------------------------------------------

sample_play_case1:                              ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:060A↑o
                mov     ax, sample_variant_index
                inc     ax
                cmp     al, sample_variant_max_index
                jbe     short loc_12DEB
                xor     ax, ax

loc_12DEB:                              ; CODE XREF: sample_play_case0+19↑j
                mov     sample_variant_index, ax
                shl     ax, 1
                shl     ax, 1
                lea     bx, sample_variant_ranges
                add     bx, ax
                mov     cx, [bx]               ; SampleRange.sr_end
                add     bx, 2
                mov     bx, [bx]               ; SampleRange.sr_start
                mov     ax, 2Dh ; '-'
                jmp     short loc_12E0E
; ---------------------------------------------------------------------------
                db 90h
; ---------------------------------------------------------------------------

sample_play_case2:                              ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:060C↑o
                mov     bx, 31F4h
                mov     cx, 4796h

loc_12E0B:                              ; CODE XREF: sample_play_case0+D↑j
                mov     ax, 1

loc_12E0E:                              ; CODE XREF: sample_play_case0+34↑j
                mov     word_11CAC, ax

loc_12E11:                              ; CODE XREF: sample_play_case0+48↓j
                cmp     word_11CAC, 0
                jnz     short loc_12E11
                push    bx
                push    cx
                call    sample_prepare_timer
                pop     di
                pop     si
                call    sample_stream_to_opl_volume
                jmp     short sample_restore_timer
sample_play_case0       endp

; ---------------------------------------------------------------------------
                db 90h

; =============== S U B R O U T I N E =======================================


sample_prepare_timer       proc near               ; CODE XREF: sample_play_case0+4C↑p
                call    sample_start_tone
                mov     bl, 94h
                mov     al, 0A5h
                call    timer2_start_mask_irq0
                mov     ah, 0FFh

loc_12E31:                              ; CODE XREF: sample_prepare_timer+18↓j
                mov     al, 80h

loc_12E33:                              ; DATA XREF: adlib_probe_init+41↑w
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12E37:                              ; CODE XREF: sample_prepare_timer+10↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                db 3Ah, 0E0h            ; cmp ah, al
                mov     ah, al
                jnb     short loc_12E31
                cli
                retn
sample_prepare_timer       endp

                assume es:nothing

; =============== S U B R O U T I N E =======================================


sample_restore_timer       proc near               ; CODE XREF: adlib_probe_init:loc_1292E↑p
                                        ; sample_play_case0+54↑j
                mov     al, 0B0h
                mov     bl, 0
                call    opl_shadow_write
                mov     al, 0B1h
                mov     bl, 0
                call    opl_shadow_write
                mov     al, byte_11C95
                out     21h, al         ; Interrupt controller, 8259A.
                mov     al, byte_11C96
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                xor     ax, ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                sti
                retn
sample_restore_timer       endp


; =============== S U B R O U T I N E =======================================


sample_start_tone       proc near               ; CODE XREF: sample_prepare_timer↑p
                mov     al, 20h ; ' '
                mov     bl, 23h ; '#'
                call    opl_shadow_write
                mov     al, 23h ; '#'
                mov     bl, 28h ; '('
                call    opl_shadow_write
                mov     al, 40h ; '@'
                mov     bl, 3Fh ; '?'
                call    opl_shadow_write
                mov     al, 43h ; 'C'
                mov     bl, 3Fh ; '?'
                call    opl_shadow_write
                mov     al, 60h ; '`'
                mov     bl, 0AFh
                call    opl_shadow_write
                mov     al, 63h ; 'c'
                mov     bl, 0AFh
                call    opl_shadow_write
                mov     al, 80h
                mov     bl, 0Dh
                call    opl_shadow_write
                mov     al, 83h
                mov     bl, 0Fh
                call    opl_shadow_write
                mov     al, 0C0h
                mov     bl, 5
                call    opl_shadow_write
                mov     al, 0E0h
                mov     bl, 0
                call    opl_shadow_write
                mov     al, 0E3h
                mov     bl, 2
                call    opl_shadow_write
                mov     al, 0B0h
                mov     bl, 1
                call    opl_shadow_write
                mov     al, 0A0h
                mov     bl, 8Fh
                call    opl_shadow_write
                mov     al, 0B0h
                mov     bl, 2Eh ; '.'
                call    opl_shadow_write
                cli
                mov     al, 36h ; '6'
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     ax, 4C90h
                out     40h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     40h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, 0
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     bl, al
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     bh, al

loc_12EE3:                              ; CODE XREF: sample_start_tone+90↓j
                mov     al, 0
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     cl, al
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     ch, al
                neg     cx
                add     cx, bx
                cmp     cx, 952h
                jb      short loc_12EE3
                mov     al, 0B0h
                mov     bl, 20h ; ' '
                call    opl_shadow_write
                mov     al, 0A0h
                mov     bl, 0
                call    opl_shadow_write
                sti
                retn
sample_start_tone       endp


; =============== S U B R O U T I N E =======================================


sample_stream_to_opl_volume       proc near               ; CODE XREF: sample_play_case0+51↑p
                push    ds
                mov     ax, word_11C97
                mov     ds, ax

loc_12F0F:                              ; CODE XREF: sample_stream_to_opl_volume+2B↓j
                mov     ah, 0FFh

loc_12F11:                              ; CODE XREF: sample_stream_to_opl_volume+14↓j
                mov     al, 80h

loc_12F13:                              ; DATA XREF: adlib_probe_init+45↑w
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12F17:                              ; CODE XREF: sample_stream_to_opl_volume+C↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                db 3Ah, 0E0h            ; cmp ah, al
                mov     ah, al
                jnb     short loc_12F11
                xor     bh, bh
                mov     bl, [si]
                shr     bx, 1
                shr     bx, 1
                db 2Eh, 8Ah, 9Fh, 0Dh, 00h ; mov bl, cs:[bx+000Dh]
                mov     al, 43h ; 'C'
                call    opl_write_port
                inc     si
                cmp     si, di
                jnz     short loc_12F0F
                pop     ds
                retn
sample_stream_to_opl_volume       endp

                assume ds:seg11a3

; =============== S U B R O U T I N E =======================================


timer2_start_mask_irq0       proc near               ; CODE XREF: adlib_probe_init+1C↑p
                                        ; sample_prepare_timer+7↑p
                push    ax
                mov     al, bl
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                pop     ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 61h         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     byte_11C96, al
                or      al, 1
                and     al, 0FDh
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                cli
                in      al, 21h         ; Interrupt controller, 8259A.
                mov     byte_11C95, al
                or      al, 1
                out     21h, al         ; Interrupt controller, 8259A.
                sti
                retn
timer2_start_mask_irq0       endp

; ---------------------------------------------------------------------------
sound_driver_setup:                     ; exported entry table offset 0797h
audio_slot_64:                          ; F14 ABI alias: audio_jump_64(int16, int16)
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                mov     cx, [bp+8]
                push    di
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     word_11C97, bx
                call    sample_set_variant_count
                call    adlib_probe_init
                pop     ds
                pop     di
                pop     bp
                retf
                assume ds:seg11a3

; =============== S U B R O U T I N E =======================================


sample_set_variant_count       proc near               ; CODE XREF: seg127c:07AB↑p
                mov     bl, 2
                cmp     cx, 7D9Dh
                jnb     short loc_12F87
                dec     bl
                cmp     cx, 6A1Ah
                jnb     short loc_12F87
                dec     bl

loc_12F87:                              ; CODE XREF: sample_set_variant_count+6↑j
                                        ; sample_set_variant_count+E↑j
                mov     sample_variant_max_index, bl
                retn
sample_set_variant_count       endp

; ---------------------------------------------------------------------------
sound_driver_shutdown:                  ; exported entry table offset 07CCh
audio_slot_65:                          ; F14 ABI alias: audio_jump_65(void)
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    adlib_reset_state
                call    opl_clear_regs
                pop     ds
                retf
; ---------------------------------------------------------------------------
sound_driver_dispatch_sound:            ; exported entry table offset 07DAh
audio_slot_66:                          ; F14 ABI alias: audio_jump_66()
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                cmp     bx, 22h ; '"'
                ja      short loc_12FB1
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    word ptr cs:[bx+5E4h]
                pop     ds

loc_12FB1:                              ; CODE XREF: seg127c:07E3↑j
                                        ; seg127c:07FC↓j
                pop     bp
                retf
; ---------------------------------------------------------------------------
sound_driver_play_sample:               ; exported entry table offset 07F3h
audio_slot_6d:                          ; F14 ABI alias: audio_jump_6d()
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                cmp     bx, 4
                ja      short loc_12FB1
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                push    di
                push    si
                call    cs:sample_dispatch_table[bx]
                pop     si
                pop     di
                pop     ds
                pop     bp
                retf
; ---------------------------------------------------------------------------
sound_driver_play_intro:                ; exported entry table offset 0810h, F14 slot.h: intro music?
audio_slot_67:                          ; F14 ABI alias: audio_jump_67()
                push    bp
                push    es
                push    si
                push    di
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                cmp     byte_125CA, 0
                jz      short loc_12FE4
                call    adlib_play_intro_until_key

loc_12FE4:                              ; CODE XREF: seg127c:081F↑j
                pop     ds
                pop     di
                pop     si
                pop     es
                assume es:nothing
                pop     bp
                retf
; ---------------------------------------------------------------------------
sound_driver_timer_tick:                ; exported entry table offset 082Ah, called from F14 increaseTimerCounters
audio_slot_6b:                          ; F14 ABI alias: audio_jump_6b()
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                dec     byte ptr unk_11C6B
                jnz     short loc_13002
                mov     byte ptr unk_11C6B, 7
                cmp     byte ptr unk_11C6A, 0
                jnz     short loc_13005

loc_13002:                              ; CODE XREF: seg127c:0834↑j
                call    adlib_service_tick

loc_13005:                              ; CODE XREF: seg127c:0840↑j
                mov     ax, word_11C8D
                mov     word_11C8D, 0
                pop     ds
                retf
; ---------------------------------------------------------------------------
sound_driver_noise_tick:                ; exported entry table offset 0850h, called from F14 timer IRQ path
audio_slot_6c:                          ; F14 ABI alias: audio_jump_6c()
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    adlib_update_noise_pitch
                pop     ds
                xor     ax, ax
                retf
; ---------------------------------------------------------------------------
sound_driver_set_drone_pitch:           ; exported entry table offset 085Dh
audio_slot_6a:                          ; F14 ABI alias: audio_jump_6a()
                push    bp
                mov     bp, sp
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     ax, [bp+6]
                cmp     ax, word_11CB4
                jl      short loc_13032
                mov     ax, word_11CB4

loc_13032:                              ; CODE XREF: seg127c:086D↑j
                mov     word_11CAE, ax
                pop     ds
                pop     bp
                retf
; ---------------------------------------------------------------------------
sound_driver_enable_drone:              ; exported entry table offset 0878h
audio_slot_68:                          ; F14 ABI alias: audio_jump_68()
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     byte_11CB6, 1
                pop     ds
                retf
; ---------------------------------------------------------------------------
sound_driver_disable_drone:             ; exported entry table offset 0885h
audio_slot_69:                          ; F14 ABI alias: audio_jump_69()
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     byte_11CB6, 0
                pop     ds
                retf
                assume es:seg11a3, ss:seg11a3, ds:seg11a3

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_voice_to_base_channel       proc near               ; CODE XREF: opl_set_voice_note+A↓p
                                        ; opl_set_voice_fnum+E↓p ...

var_2           = word ptr -2
arg_0           = word ptr  4

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 02h, 00h ; sub     sp, 2
                push    si
                push    di
                mov     ax, [bp+arg_0]
                mov     bl, al
                cmp     al, 6
                jle     short loc_13070
                mov     bl, 7
                cmp     al, 7
                jz      short loc_13070
                cmp     al, 0Ah
                jz      short loc_13070
                mov     bl, 8

loc_13070:                              ; CODE XREF: opl_voice_to_base_channel+10↑j
                                        ; opl_voice_to_base_channel+16↑j ...
                mov     bh, 0
                mov     [bp+var_2], bx
                mov     ax, [bp+var_2]
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
opl_voice_to_base_channel       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_set_voice_volume       proc near               ; CODE XREF: opl_key_on_voice+12F↓p
                                        ; adlib_interpret_stream+186↓p ...

var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                cmp     [bp+arg_0], 6
                ja      short loc_130A8
                mov     ax, [bp+arg_0]
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                jmp     short loc_130BF
; ---------------------------------------------------------------------------

loc_130A8:                              ; CODE XREF: opl_set_voice_volume+B↑j
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_2], ax

loc_130BF:                              ; CODE XREF: opl_set_voice_volume+28↑j
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                db 25h, 0C0h, 00h ; and     ax, 0C0h
                mov     [bp+var_4], ax
                mov     ax, [bp+arg_2]
                db 25h, 3Fh, 00h ; and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                or      [bp+var_4], cx
                push    [bp+var_4]
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_set_voice_volume       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_set_voice_volume_direct       proc near               ; CODE XREF: adlib_update_drone_mode+51↓p

var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                db 25h, 0C0h, 00h ; and     ax, 0C0h
                mov     [bp+var_4], ax
                mov     ax, [bp+arg_2]
                db 25h, 3Fh, 00h ; and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                or      [bp+var_4], cx
                push    [bp+var_4]
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_set_voice_volume_direct       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_set_voice_note       proc near               ; CODE XREF: opl_key_on_voice+11B↓p

var_C           = word ptr -0Ch
var_A           = byte ptr -0Ah
var_8           = byte ptr -8
var_6           = byte ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 0Ch, 00h ; sub     sp, 0Ch
                push    [bp+arg_0]
                call    opl_voice_to_base_channel
                add     sp, 2
                db 05h, 0A0h, 00h ; add     ax, 0A0h
                mov     [bp+var_2], ax
                mov     cx, 0Ch
                mov     ax, [bp+arg_2]
                sub     dx, dx
                div     cx
                mov     [bp+var_8], dl
                mov     cx, 0Ch
                mov     ax, [bp+arg_2]
                sub     dx, dx
                div     cx
                mov     [bp+var_A], al
                mov     al, [bp+var_8]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                mov     ax, [bx+292h]
                mov     [bp+var_4], ax
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                add     [bp+var_2], 10h
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                db 25h, 20h, 00h ; and     ax, 20h
                mov     [bp+var_6], al
                mov     cx, 8
                mov     ax, [bp+var_4]
                shr     ax, cl
                mov     [bp+var_C], ax
                mov     al, [bp+var_A]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                mov     cx, [bp+var_C]
                or      cx, ax
                or      [bp+var_6], cl
                mov     al, [bp+var_6]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_set_voice_note       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_set_voice_fnum       proc near               ; CODE XREF: adlib_update_drone_mode+C1↓p

var_4           = byte ptr -4
var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_voice_to_base_channel
                add     sp, 2
                db 05h, 0A0h, 00h ; add     ax, 0A0h
                mov     [bp+var_2], ax
                mov     ax, [bp+arg_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                add     [bp+var_2], 10h
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                db 25h, 20h, 00h ; and     ax, 20h
                mov     [bp+var_4], al
                mov     cx, 8
                mov     ax, [bp+arg_2]
                shr     ax, cl
                or      [bp+var_4], al
                mov     al, [bp+var_4]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_set_voice_fnum       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_add_voice_fnum_delta       proc near               ; CODE XREF: adlib_interpret_stream+2A6↓p

var_A           = word ptr -0Ah
var_8           = byte ptr -8
var_6           = word ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 0Ah, 00h ; sub     sp, 0Ah
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_voice_to_base_channel
                add     sp, 2
                db 05h, 0A0h, 00h ; add     ax, 0A0h
                mov     [bp+var_2], ax
                db 05h, 10h, 00h ; add     ax, 10h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                db 25h, 1Fh, 00h ; and     ax, 1Fh
                mov     cx, 8
                shl     ax, cl
                mov     [bp+var_6], ax
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     [bp+var_A], ax
                mov     al, [bp+arg_2]
                cbw
                mov     cx, [bp+var_A]
                add     cx, ax
                add     [bp+var_6], cx
                mov     ax, [bp+var_6]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     bx, [bp+var_4]
                mov     al, [bx+0C32h]
                db 25h, 20h, 00h ; and     ax, 20h
                mov     [bp+var_8], al
                mov     cx, 8
                mov     ax, [bp+var_6]
                shr     ax, cl
                or      [bp+var_8], al
                mov     al, [bp+var_8]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_add_voice_fnum_delta       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_fade_voice_volume       proc near               ; CODE XREF: adlib_interpret_stream+2DE↓p

var_8           = word ptr -8
var_6           = word ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 08h, 00h ; sub     sp, 8
                cmp     [bp+arg_0], 6
                ja      short loc_132CC
                mov     ax, [bp+arg_0]
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                jmp     short loc_132E3
; ---------------------------------------------------------------------------

loc_132CC:                              ; CODE XREF: opl_fade_voice_volume+B↑j
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_2], ax

loc_132E3:                              ; CODE XREF: opl_fade_voice_volume+28↑j
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     [bp+var_6], ax
                db 25h, 3Fh, 00h ; and     ax, 3Fh
                mov     [bp+var_8], ax
                mov     al, [bp+arg_2]
                cbw
                mov     cx, [bp+var_8]
                sub     cx, ax
                mov     [bp+var_4], cx
                mov     ax, [bp+var_6]
                db 25h, 0C0h, 0FFh ; and     ax, 0FFC0h
                or      [bp+var_4], ax
                push    [bp+var_4]
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_fade_voice_volume       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_key_off_voice       proc near               ; CODE XREF: opl_key_on_voice+107↓p
                                        ; adlib_interpret_stream+3A↓p ...

var_6           = word ptr -6
var_4           = word ptr -4
var_2           = byte ptr -2
arg_0           = byte ptr  4

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 06h, 00h ; sub     sp, 6
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                db 3Dh, 06h, 00h ; cmp     ax, 6
                jge     short loc_13360
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_voice_to_base_channel
                add     sp, 2
                db 05h, 0B0h, 00h ; add     ax, 0B0h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                db 25h, 0DFh, 00h ; and     ax, 0DFh
                mov     [bp+var_2], al
                mov     al, [bp+var_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    opl_write_shadow_args
                add     sp, 4
                jmp     short loc_13394
; ---------------------------------------------------------------------------
                even

loc_13360:                              ; CODE XREF: opl_key_off_voice+10↑j
                mov     al, byte_1271F
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     [bp+var_6], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                add     bx, 0FFFAh
                mov     al, [bx+28Ch]
                cbw
                not     ax
                mov     cx, [bp+var_6]
                and     cx, ax
                mov     [bp+var_2], cl
                mov     al, [bp+var_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    opl_write_shadow_args
                add     sp, 4

loc_13394:                              ; CODE XREF: opl_key_off_voice+41↑j
                mov     sp, bp
                pop     bp
                retn
opl_key_off_voice       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_key_on_voice       proc near               ; CODE XREF: adlib_interpret_stream+267↓p
                                        ; adlib_update_drone_mode+66↓p ...

var_6           = word ptr -6
var_4           = word ptr -4
var_2           = byte ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6
arg_4           = byte ptr  8
arg_6           = byte ptr  0Ah

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 06h, 00h ; sub     sp, 6
                push    si
                push    di
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_133BB
                jmp     loc_13492
; ---------------------------------------------------------------------------

loc_133BB:                              ; CODE XREF: opl_key_on_voice+1E↑j
                mov     al, byte_12658
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_133C6
                db 0E9h ; jmp     loc_1342C
                dw loc_1342C - ($ + 2)
; ---------------------------------------------------------------------------

loc_133C6:                              ; CODE XREF: opl_key_on_voice+29↑j
                mov     al, [bp+arg_0]
                mov     byte_1265F, al
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                mov     byte_12658, al
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+2]
                mov     word_1265A, ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+4]
                mov     word_125C2, ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+6]
                mov     word_125C6, ax
                call    adlib_mark_sound_active
                db 0E9h ; jmp     loc_1348F
                dw loc_1348F - ($ + 2)
; ---------------------------------------------------------------------------

loc_1342C:                              ; CODE XREF: opl_key_on_voice+2B↑j
                mov     al, [bp+arg_0]
                mov     byte_12660, al
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                mov     byte_12659, al
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+2]
                mov     word_1265C, ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+4]
                mov     word_125C4, ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+6]
                mov     word_125C8, ax
                call    adlib_mark_sound_active

loc_1348F:                              ; CODE XREF: opl_key_on_voice+91↑j
                jmp     loc_1353E
; ---------------------------------------------------------------------------

loc_13492:                              ; CODE XREF: opl_key_on_voice+20↑j
                cmp     [bp+arg_6], 0
                jnz     short loc_134A5
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_key_off_voice
                add     sp, 2

loc_134A5:                              ; CODE XREF: opl_key_on_voice+FE↑j
                mov     al, [bp+arg_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_set_voice_note
                add     sp, 4
                mov     al, [bp+arg_4]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_set_voice_volume
                add     sp, 4
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                db 3Dh, 06h, 00h ; cmp     ax, 6
                jge     short loc_1350C
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_voice_to_base_channel
                add     sp, 2
                db 05h, 0B0h, 00h ; add     ax, 0B0h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                db 0Dh, 20h, 00h ; or      ax, 20h
                mov     [bp+var_2], al
                mov     al, [bp+var_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    opl_write_shadow_args
                add     sp, 4
                jmp     short loc_1353E
; ---------------------------------------------------------------------------

loc_1350C:                              ; CODE XREF: opl_key_on_voice+13E↑j
                mov     al, byte_1271F
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     [bp+var_6], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                add     bx, 0FFFAh
                mov     al, [bx+28Ch]
                cbw
                mov     cx, [bp+var_6]
                or      cx, ax
                mov     [bp+var_2], cl
                mov     al, [bp+var_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    opl_write_shadow_args
                add     sp, 4

loc_1353E:                              ; CODE XREF: opl_key_on_voice:loc_1348F↑j
                                        ; opl_key_on_voice+172↑j
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
opl_key_on_voice       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_rhythm_flags       proc near               ; CODE XREF: opl_apply_instrument_part↓p

var_2           = byte ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 02h, 00h ; sub     sp, 2
                mov     al, byte_1271F
                db 25h, 3Fh, 00h ; and     ax, 3Fh
                mov     [bp+var_2], al
                mov     al, byte_11CDA
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_13562
                mov     ax, 80h
                jmp     short loc_13564
; ---------------------------------------------------------------------------
                even

loc_13562:                              ; CODE XREF: opl_apply_rhythm_flags+16↑j
                xor     ax, ax

loc_13564:                              ; CODE XREF: opl_apply_rhythm_flags+1B↑j
                or      [bp+var_2], al
                mov     al, byte_11CDB
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_13574
                mov     ax, 40h ; '@'
                jmp     short loc_13576
; ---------------------------------------------------------------------------

loc_13574:                              ; CODE XREF: opl_apply_rhythm_flags+29↑j
                xor     ax, ax

loc_13576:                              ; CODE XREF: opl_apply_rhythm_flags+2E↑j
                or      [bp+var_2], al
                mov     al, [bp+var_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_rhythm_flags       endp


; =============== S U B R O U T I N E =======================================


opl_apply_waveform_flag       proc near               ; CODE XREF: opl_apply_instrument_part+3↓p
                mov     al, byte_11CDC
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_1359C
                mov     ax, 40h ; '@'
                jmp     short loc_1359E
; ---------------------------------------------------------------------------
                even

loc_1359C:                              ; CODE XREF: opl_apply_waveform_flag+6↑j
                xor     ax, ax

loc_1359E:                              ; CODE XREF: opl_apply_waveform_flag+B↑j
                push    ax
                mov     ax, 8
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                retn
opl_apply_waveform_flag       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_operator_level       proc near               ; CODE XREF: opl_apply_instrument_part+6↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     ax, word_127BC
                db 05h, 40h, 00h ; add     ax, 40h ; '@'
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+6]
                db 25h, 3Fh, 00h ; and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                mov     [bp+var_2], cx
                mov     bx, word_127BE
                mov     al, [bx+7]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     cx, 6
                shl     ax, cl
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_operator_level       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_feedback       proc near               ; CODE XREF: opl_apply_instrument_part+9↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     ax, word_127BA
                db 05h, 0C0h, 00h ; add     ax, 0C0h
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+0Ah]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+0Dh]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_13620
                xor     ax, ax
                jmp     short loc_13623
; ---------------------------------------------------------------------------
                even

loc_13620:                              ; CODE XREF: opl_apply_feedback+29↑j
                mov     ax, 1

loc_13623:                              ; CODE XREF: opl_apply_feedback+2D↑j
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_feedback       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_attack_decay       proc near               ; CODE XREF: opl_apply_instrument_part+C↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     ax, word_127BC
                db 05h, 60h, 00h ; add     ax, 60h ; '`'
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+1]
                db 25h, 0Fh, 00h ; and     ax, 0Fh
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_attack_decay       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_sustain_release       proc near               ; CODE XREF: opl_apply_instrument_part+F↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     ax, word_127BC
                db 05h, 80h, 00h ; add     ax, 80h
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+3]
                db 25h, 0Fh, 00h ; and     ax, 0Fh
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_sustain_release       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_trem_vibr_sustain       proc near               ; CODE XREF: opl_apply_instrument_part+12↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 04h, 00h ; sub     sp, 4
                mov     ax, word_127BC
                db 05h, 20h, 00h ; add     ax, 20h ; ' '
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+0Bh]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_136E0
                mov     ax, 80h
                jmp     short loc_136E2
; ---------------------------------------------------------------------------
                even

loc_136E0:                              ; CODE XREF: opl_apply_trem_vibr_sustain+1A↑j
                xor     ax, ax

loc_136E2:                              ; CODE XREF: opl_apply_trem_vibr_sustain+1F↑j
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+0Ch]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_136F6
                mov     ax, 40h ; '@'
                jmp     short loc_136F8
; ---------------------------------------------------------------------------

loc_136F6:                              ; CODE XREF: opl_apply_trem_vibr_sustain+31↑j
                xor     ax, ax

loc_136F8:                              ; CODE XREF: opl_apply_trem_vibr_sustain+36↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+4]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_1370C
                mov     ax, 20h ; ' '
                jmp     short loc_1370E
; ---------------------------------------------------------------------------

loc_1370C:                              ; CODE XREF: opl_apply_trem_vibr_sustain+47↑j
                xor     ax, ax

loc_1370E:                              ; CODE XREF: opl_apply_trem_vibr_sustain+4C↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+5]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_13722
                mov     ax, 10h
                jmp     short loc_13724
; ---------------------------------------------------------------------------

loc_13722:                              ; CODE XREF: opl_apply_trem_vibr_sustain+5D↑j
                xor     ax, ax

loc_13724:                              ; CODE XREF: opl_apply_trem_vibr_sustain+62↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+9]
                db 25h, 0Fh, 00h ; and     ax, 0Fh
                add     [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_trem_vibr_sustain       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_apply_waveform_select       proc near               ; CODE XREF: opl_apply_instrument_part+15↓p

var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 02h, 00h ; sub     sp, 2
                mov     ax, word_127BC
                db 05h, 0E0h, 00h ; add     ax, 0E0h
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+8]
                db 25h, 03h, 00h ; and     ax, 3
                push    ax
                push    [bp+var_2]
                call    opl_write_shadow_args
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
opl_apply_waveform_select       endp


; =============== S U B R O U T I N E =======================================


opl_apply_instrument_part       proc near               ; CODE XREF: opl_load_instrument:loc_137D6↓p
                                        ; opl_load_instrument+10C↓p
                call    opl_apply_rhythm_flags
                call    opl_apply_waveform_flag
                call    opl_apply_operator_level
                call    opl_apply_feedback
                call    opl_apply_attack_decay
                call    opl_apply_sustain_release
                call    opl_apply_trem_vibr_sustain
                call    opl_apply_waveform_select
                retn
opl_apply_instrument_part       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

opl_load_instrument       proc near               ; CODE XREF: adlib_interpret_stream+126↓p
                                        ; adlib_update_drone_mode+35↓p ...

var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 02h, 00h ; sub     sp, 2
                push    si
                push    di
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_voice_to_base_channel
                add     sp, 2
                mov     word_127BA, ax
                mov     al, [bp+arg_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     cx, 2Ch ; ','
                imul    cx
                mov     cx, 2D6h
                add     cx, ax
                mov     word_127BE, cx
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                mov     word_127BC, ax
                db 3Dh, 14h, 00h ; cmp     ax, 14h
                jb      short loc_137D6
                jmp     loc_1385B
; ---------------------------------------------------------------------------

loc_137D6:                              ; CODE XREF: opl_load_instrument+49↑j
                call    opl_apply_instrument_part
                mov     bx, word_127BE
                mov     al, [bx+0Eh]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     ax, [bp+var_2]
                mov     [bx+0D32h], al
                mov     bx, word_127BE
                mov     ax, [bx+10h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+2], ax
                mov     bx, word_127BE
                mov     ax, [bx+12h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+4], ax
                mov     bx, word_127BE
                mov     ax, [bx+14h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+6], ax

loc_1385B:                              ; CODE XREF: opl_load_instrument+4B↑j
                mov     al, [bp+arg_2]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     cx, 2Ch ; ','
                imul    cx
                mov     cx, 2D6h
                add     cx, ax
                mov     ax, 16h
                add     cx, ax
                mov     word_127BE, cx
                mov     al, [bp+arg_0]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                mov     word_127BC, ax
                db 3Dh, 14h, 00h ; cmp     ax, 14h
                jnb     short loc_13897
                call    opl_apply_instrument_part

loc_13897:                              ; CODE XREF: opl_load_instrument+10A↑j
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
opl_load_instrument       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

adlib_interpret_stream       proc near               ; CODE XREF: adlib_update_all_streams+13↓p
                                        ; adlib_update_all_streams+1D↓p ...

var_6           = word ptr -6
var_4           = byte ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 06h, 00h ; sub     sp, 6
                push    si
                push    di
                mov     [bp+var_4], 0
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_138B8
                jmp     loc_13B2C
; ---------------------------------------------------------------------------

loc_138B8:                              ; CODE XREF: adlib_interpret_stream+15↑j
                mov     bx, [bp+arg_0]
                mov     al, [bx+7]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_138DE
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx+7]
                mov     al, [bx+7]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_138DE
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_key_off_voice
                add     sp, 2

loc_138DE:                              ; CODE XREF: adlib_interpret_stream+23↑j
                                        ; adlib_interpret_stream+31↑j
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx]
                mov     al, [bx]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jle     short loc_138ED
                jmp     loc_13B2C
; ---------------------------------------------------------------------------

loc_138ED:                              ; CODE XREF: adlib_interpret_stream+4A↑j
                                        ; adlib_interpret_stream:def_13A6F↓j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     cx, [bx+0Ah]
                add     cx, ax
                mov     [bp+var_2], cx
                mov     bx, cx
                mov     al, [bx]
                cbw
                db 25h, 80h, 00h ; and     ax, 80h
                jnz     short loc_1390B
                jmp     loc_13A88
; ---------------------------------------------------------------------------

loc_1390B:                              ; CODE XREF: adlib_interpret_stream+68↑j
                mov     bx, [bp+var_2]
                mov     al, [bx]
                cbw
                jmp     loc_13A60
; ---------------------------------------------------------------------------
loc_13914:
                mov     bx, [bp+arg_0]
                cmp     word ptr [bx+10h], 0
                jnz     short loc_1393A
                inc     [bp+var_2]
                mov     bx, [bp+var_2]
                mov     al, [bx]
                cbw
                mov     bx, [bp+arg_0]
                mov     [bx+10h], ax
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Eh]
                mov     bx, [bp+arg_0]
                mov     [bx+0Ch], ax
                jmp     short loc_1396A
; ---------------------------------------------------------------------------

loc_1393A:                              ; CODE XREF: adlib_interpret_stream+7D↑j
                mov     bx, [bp+arg_0]
                dec     word ptr [bx+10h]
                mov     bx, [bp+arg_0]
                cmp     word ptr [bx+10h], 0
                jnz     short loc_1395E
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     [bx+0Eh], ax
                jmp     short loc_1396A
; ---------------------------------------------------------------------------

loc_1395E:                              ; CODE XREF: adlib_interpret_stream+A9↑j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Eh]
                mov     bx, [bp+arg_0]
                mov     [bx+0Ch], ax

loc_1396A:                              ; CODE XREF: adlib_interpret_stream+9A↑j
                                        ; adlib_interpret_stream+BE↑j
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_1396E:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -2
                inc     word ptr [bx+0Ch]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     [bx+0Eh], ax
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_13980:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -3
                cmp     word ptr [bx+12h], 0
                jnz     short loc_13994
                mov     bx, [bp+arg_0]
                mov     word ptr [bx+0Ch], 0
                jmp     short loc_1399A
; ---------------------------------------------------------------------------
                even

loc_13994:                              ; CODE XREF: adlib_interpret_stream+E9↑j
                mov     bx, [bp+arg_0]
                call    word ptr [bx+12h]

loc_1399A:                              ; CODE XREF: adlib_interpret_stream+F3↑j
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_1399E:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -4
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+4], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+4]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_load_instrument
                add     sp, 4
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_139CE:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -5
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+6], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_139E6:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -6
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+1], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_139FE:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -7
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+5], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+5]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_set_voice_volume
                add     sp, 4
                db 0E9h ; jmp     def_13A6F       ; jumptable 00013A6F default case
                dw def_13A6F - ($ + 2)
; ---------------------------------------------------------------------------
                even

loc_13A2E:                              ; CODE XREF: adlib_interpret_stream+1D1↓j
                                        ; DATA XREF: adlib_interpret_stream:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -8
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+9], al
                inc     [bp+var_2]
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+2], al
                mov     bx, [bp+arg_0]
                mov     byte ptr [bx+8], 1
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 3
                db 0E9h ; jmp     def_13A6F       ; jumptable 00013A6F default case
                dw def_13A6F - ($ + 2)
; ---------------------------------------------------------------------------
                even
                db 0E9h ; jmp     def_13A6F       ; jumptable 00013A6F default case
                dw def_13A6F - ($ + 2)
; ---------------------------------------------------------------------------
                even

loc_13A60:                              ; CODE XREF: adlib_interpret_stream+73↑j
                db 2Dh, 0F8h, 0FFh ; sub     ax, 0FFF8h
                db 3Dh, 07h, 00h ; cmp     ax, 7
                jbe     short loc_13A6B
                db 0E9h ; jmp     def_13A6F       ; jumptable 00013A6F default case
                dw def_13A6F - ($ + 2)
; ---------------------------------------------------------------------------

loc_13A6B:                              ; CODE XREF: adlib_interpret_stream+1C8↑j
                shl     ax, 1
                mov     bx, ax
                jmp     cs:jpt_13A6F[bx] ; switch jump
; ---------------------------------------------------------------------------
jpt_13A6F       dw offset loc_13A2E     ; DATA XREF: adlib_interpret_stream+1D1↑r
                dw offset loc_139FE     ; jump table for switch statement
                dw offset loc_139E6
                dw offset loc_139CE
                dw offset loc_1399E
                dw offset loc_13980
                dw offset loc_1396E
                dw offset loc_13914
                align 4

def_13A6F:                              ; CODE XREF: adlib_interpret_stream:loc_1396A↑j
                                        ; adlib_interpret_stream+DF↑j ...
                jmp     loc_138ED       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_13A88:                              ; CODE XREF: adlib_interpret_stream+6A↑j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     cx, [bx+0Ah]
                add     cx, ax
                mov     [bp+var_2], cx
                mov     bx, [bp+var_2]
                inc     [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+3], al
                mov     bx, [bp+var_2]
                inc     [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+3]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jz      short loc_13AD0
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_13AE0

loc_13AD0:                              ; CODE XREF: adlib_interpret_stream+226↑j
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_key_off_voice
                add     sp, 2
                db 0E9h ; jmp     loc_13B2C
                dw loc_13B2C - ($ + 2)
; ---------------------------------------------------------------------------

loc_13AE0:                              ; CODE XREF: adlib_interpret_stream+230↑j
                mov     bx, [bp+arg_0]
                mov     al, [bx+7]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     bx, [bp+arg_0]
                mov     al, [bx+5]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     bx, [bp+arg_0]
                mov     al, [bx+3]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_key_on_voice
                add     sp, 8
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     bx, [bp+arg_0]
                mov     cl, [bx+6]
                mov     [bp+var_6], ax
                mov     ax, cx
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     cx, [bp+var_6]
                sub     cx, ax
                mov     bx, [bp+arg_0]
                mov     [bx+7], cl

loc_13B2C:                              ; CODE XREF: adlib_interpret_stream+17↑j
                                        ; adlib_interpret_stream+4C↑j ...
                mov     bx, [bp+arg_0]
                cmp     byte ptr [bx+1], 0
                jz      short loc_13B4A
                mov     bx, [bp+arg_0]
                mov     al, [bx+1]
                cbw
                push    ax
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_add_voice_fnum_delta
                add     sp, 4

loc_13B4A:                              ; CODE XREF: adlib_interpret_stream+295↑j
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx+8]
                mov     al, [bx+8]
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_13B82
                mov     bx, [bp+arg_0]
                mov     al, [bx+9]
                mov     bx, [bp+arg_0]
                mov     [bx+8], al
                mov     bx, [bp+arg_0]
                cmp     byte ptr [bx+2], 0
                jz      short loc_13B82
                mov     bx, [bp+arg_0]
                mov     al, [bx+2]
                cbw
                push    ax
                mov     al, byte_1265E
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                push    ax
                call    opl_fade_voice_volume
                add     sp, 4

loc_13B82:                              ; CODE XREF: adlib_interpret_stream+2B8↑j
                                        ; adlib_interpret_stream+2CD↑j
                inc     byte_1265E
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
adlib_interpret_stream       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

adlib_update_drone_mode       proc near               ; CODE XREF: adlib_update_all_streams+4B↓p

var_2           = word ptr -2

                push    bp
                mov     bp, sp
                db 81h, 0ECh, 02h, 00h ; sub     sp, 2
                push    si
                push    di
                mov     al, byte_11CB6
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     [bp+var_2], ax
                mov     al, byte_11CB7
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                mov     cx, [bp+var_2]
                cmp     cx, ax
                jnz     short loc_13BAE
                db 0E9h ; jmp     loc_13C2E
                dw loc_13C2E - ($ + 2)
; ---------------------------------------------------------------------------

loc_13BAE:                              ; CODE XREF: adlib_update_drone_mode+1D↑j
                mov     al, byte_11CB6
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_13BB9
                db 0E9h ; jmp     loc_13C10
                dw loc_13C10 - ($ + 2)
; ---------------------------------------------------------------------------

loc_13BB9:                              ; CODE XREF: adlib_update_drone_mode+28↑j
                mov     ax, 6
                push    ax
                mov     ax, 5
                push    ax
                call    opl_load_instrument
                add     sp, 4
                mov     ax, 1
                push    ax
                mov     ax, 6
                push    ax
                call    opl_load_instrument
                add     sp, 4
                mov     ax, 0Fh
                push    ax
                mov     ax, 5
                push    ax
                call    opl_set_voice_volume_direct
                add     sp, 4
                xor     ax, ax
                push    ax
                mov     ax, 0Fh
                push    ax
                mov     ax, 0Bh
                push    ax
                mov     ax, 5
                push    ax
                call    opl_key_on_voice
                add     sp, 8
                xor     ax, ax
                push    ax
                mov     ax, 0Fh
                push    ax
                mov     ax, 37h ; '7'
                push    ax
                mov     ax, 6
                push    ax
                call    opl_key_on_voice
                add     sp, 8
                jmp     short loc_13C24
; ---------------------------------------------------------------------------
                even

loc_13C10:                              ; CODE XREF: adlib_update_drone_mode+2A↑j
                mov     ax, 5
                push    ax
                call    opl_key_off_voice
                add     sp, 2
                mov     ax, 6
                push    ax
                call    opl_key_off_voice
                add     sp, 2

loc_13C24:                              ; CODE XREF: adlib_update_drone_mode+81↑j
                mov     al, byte_11CB6
                mov     byte_11CB7, al
                db 0E9h ; jmp     loc_13C85
                dw loc_13C85 - ($ + 2)
; ---------------------------------------------------------------------------
                even

loc_13C2E:                              ; CODE XREF: adlib_update_drone_mode+1F↑j
                mov     al, byte_11CB6
                db 25h, 0FFh, 00h ; and     ax, 0FFh
                jnz     short loc_13C39
                db 0E9h ; jmp     loc_13C85
                dw loc_13C85 - ($ + 2)
; ---------------------------------------------------------------------------

loc_13C39:                              ; CODE XREF: adlib_update_drone_mode+A8↑j
                mov     ax, word_11CB0
                cmp     word_11CAE, ax
                jz      short loc_13C85
                mov     ax, word_11CAE
                db 05h, 0FCh, 08h ; add     ax, 8FCh
                push    ax
                mov     ax, 5
                push    ax
                call    opl_set_voice_fnum
                add     sp, 4
                mov     cx, 6
                mov     ax, word_11CAE
                shr     ax, cl
                db 05h, 0Fh, 00h ; add     ax, 0Fh
                push    ax
                mov     ax, 6
                push    ax
                call    opl_set_voice_volume
                add     sp, 4
                mov     cx, 7
                mov     ax, word_11CAE
                shr     ax, cl
                db 05h, 0Fh, 00h ; add     ax, 0Fh
                push    ax
                mov     ax, 5
                push    ax
                call    opl_set_voice_volume
                add     sp, 4
                mov     ax, word_11CAE
                mov     word_11CB0, ax

loc_13C85:                              ; CODE XREF: adlib_update_drone_mode+9E↑j
                                        ; adlib_update_drone_mode+AA↑j ...
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
adlib_update_drone_mode       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================


adlib_update_all_streams       proc near               ; CODE XREF: adlib_service_tick+23↑P
                cmp     byte_125CA, 0
                jnz     short loc_13C96
                db 0E9h ; jmp     locret_13CDA
                dw locret_13CDA - ($ + 2)
; ---------------------------------------------------------------------------

loc_13C96:                              ; CODE XREF: adlib_update_all_streams+5↑j
                mov     byte_1265E, 0
                mov     ax, offset stream_voice0_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                mov     ax, offset stream_voice1_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                mov     ax, offset stream_voice2_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                mov     ax, offset stream_voice3_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                mov     ax, offset stream_voice4_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                mov     ax, offset stream_voice5_state
                push    ax
                call    adlib_interpret_stream
                add     sp, 2
                call    adlib_update_drone_mode

locret_13CDA:                           ; CODE XREF: adlib_update_all_streams+7↑j
                retn
adlib_update_all_streams       endp

; ---------------------------------------------------------------------------
                db 0
seg127c         ends

; ===========================================================================

; Segment type: Pure data

end
