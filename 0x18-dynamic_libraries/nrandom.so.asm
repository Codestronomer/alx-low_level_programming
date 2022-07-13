
Elf64_Sym struc ; (sizeof=0x18, align=0x8, mappedto_1)
                        ; XREF: LOAD:0000000000000230/r
                        ; LOAD:0000000000000248/r ...
st_name dd ?            ; offset (00000350)
st_info db ?
st_other db ?
st_shndx dw ?
st_value dq ?           ; offset (00000000)
st_size dq ?
Elf64_Sym ends


Elf64_Rela struc ; (sizeof=0x18, align=0x8, copyof_2)
                        ; XREF: LOAD:0000000000000428/r
                        ; LOAD:0000000000000440/r ...
r_offset dq ?
r_info dq ?
r_addend dq ?
Elf64_Rela ends


Elf64_Dyn struc ; (sizeof=0x10, align=0x8, copyof_3)
                        ; XREF: LOAD:_DYNAMIC/r
                        ; LOAD:0000000000200E20/r ...
d_tag dq ?
d_un dq ?
Elf64_Dyn ends


Elf64_Verneed struc ; (sizeof=0x10, align=0x4, mappedto_4)
                        ; XREF: LOAD:0000000000000408/r
vn_version dw ?
vn_cnt dw ?
vn_file dd ?            ; offset (00000350)
vn_aux dd ?
vn_next dd ?
Elf64_Verneed ends


Elf64_Vernaux struc ; (sizeof=0x10, align=0x4, mappedto_5)
                        ; XREF: LOAD:0000000000000418/r
vna_hash dd ?
vna_flags dw ?
vna_other dw ?
vna_name dd ?           ; offset (00000350)
vna_next dd ?
Elf64_Vernaux ends


;
; +-------------------------------------------------------------------------+
; |      This file was generated by The Interactive Disassembler (IDA)      |
; |           Copyright (c) 2022 Hex-Rays, <support@hex-rays.com>           |
; |                            Freeware version                             |
; +-------------------------------------------------------------------------+
;
; Input SHA256 : AD156FCDFC49B5D655720AE7B475CB57D440AA541974EA82E24F3B05F0A4B490
; Input MD5    : EDD34A8021B2A0FD6E8DCCF808D6E96A
; Input CRC32  : CA0C4E19

; File Name   : C:\Users\tllps\Downloads\nrandom.so
; Format      : ELF64 for x86-64 (Shared object)
; Needed Library 'libc.so.6'
; Shared Name 'random.so'
;
; Source File : 'crtstuff.c'
; Source File : 'random_num.c'
; Source File : 'crtstuff.c'

.686p
.mmx
.model flat
.intel_syntax noprefix


; Segment type: Pure code
; Segment permissions: Read/Execute
LOAD segment byte public 'CODE' use64
assume cs:LOAD
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
dword_0 dd 464C457Fh    ; File format: \x7FELF
db 2                    ; File class: 64-bit
db 1                    ; Data encoding: little-endian
db 1                    ; File version
db 0                    ; OS/ABI: UNIX System V ABI
db 0                    ; ABI Version
db 7 dup(0)             ; Padding
dw 3                    ; File type: Shared object
dw 3Eh                  ; Machine: x86-64
dd 1                    ; File version
dq offset deregister_tm_clones ; Entry point
dq 40h                  ; PHT file offset
dq 1148h                ; SHT file offset
dd 0                    ; Processor-specific flags
dw 40h                  ; ELF header size
dw 38h                  ; PHT entry size
dw 7                    ; Number of entries in PHT
dw 40h                  ; SHT entry size
dw 1Ah                  ; Number of entries in SHT
dw 17h                  ; SHT entry index for string table
; ELF64 Program Header
; PHT Entry 0
dd 1                    ; Type: LOAD
dd 5                    ; Flags
dq 0                    ; File offset
dq 0                    ; Virtual address
dq 0                    ; Physical address
dq 704h                 ; Size in file image
dq 704h                 ; Size in memory image
dq 200000h              ; Alignment
; PHT Entry 1
dd 1                    ; Type: LOAD
dd 6                    ; Flags
dq 0E00h                ; File offset
dq offset __frame_dummy_init_array_entry ; Virtual address
dq 200E00h              ; Physical address
dq 230h                 ; Size in file image
dq 238h                 ; Size in memory image
dq 200000h              ; Alignment
; PHT Entry 2
dd 2                    ; Type: DYNAMIC
dd 6                    ; Flags
dq 0E10h                ; File offset
dq offset _DYNAMIC      ; Virtual address
dq 200E10h              ; Physical address
dq 1D0h                 ; Size in file image
dq 1D0h                 ; Size in memory image
dq 8                    ; Alignment
; PHT Entry 3
dd 4                    ; Type: NOTE
dd 4                    ; Flags
dq 1C8h                 ; File offset
dq offset dword_1C8     ; Virtual address
dq 1C8h                 ; Physical address
dq 24h                  ; Size in file image
dq 24h                  ; Size in memory image
dq 4                    ; Alignment
; PHT Entry 4
dd 6474E550h            ; Type: EH_FRAME
dd 4                    ; Flags
dq 684h                 ; File offset
dq offset unk_684       ; Virtual address
dq 684h                 ; Physical address
dq 1Ch                  ; Size in file image
dq 1Ch                  ; Size in memory image
dq 4                    ; Alignment
; PHT Entry 5
dd 6474E551h            ; Type: STACK
dd 6                    ; Flags
dq 0                    ; File offset
dq 0                    ; Virtual address
dq 0                    ; Physical address
dq 0                    ; Size in file image
dq 0                    ; Size in memory image
dq 10h                  ; Alignment
; PHT Entry 6
dd 6474E552h            ; Type: RO-AFTER
dd 4                    ; Flags
dq 0E00h                ; File offset
dq offset __frame_dummy_init_array_entry ; Virtual address
dq 200E00h              ; Physical address
dq 200h                 ; Size in file image
dq 200h                 ; Size in memory image
dq 1                    ; Alignment
; ELF Note Entry
dword_1C8 dd 4          ; Name Size
dd 14h                  ; Desc Size
dd 3                    ; Type: NT_GNU_BUILD_ID
aGnu db 'GNU',0         ; Name
db 9Eh, 9Bh, 91h, 32h, 6Eh, 0BEh, 1Bh, 0BEh ; Desc
db 8Ah, 0FCh, 1, 0F7h, 43h, 75h, 0F9h, 2 dup(5Ch)
db 0F7h, 0Dh, 64h
align 10h
; ELF GNU Hash Table
elf_gnu_hash_nbuckets dd 3
elf_gnu_hash_symbias dd 6
elf_gnu_hash_bitmask_nwords dd 1
elf_gnu_hash_shift dd 6
elf_gnu_hash_indexes dq 9C004000120C088h
elf_gnu_hash_bucket dd 6, 9, 0Bh
elf_gnu_hash_chain dd 0ECD54542h, 7C9D3DEAh, 7C92E3BBh, 1C5871D8h
dd 0EF18DB9h, 0EEFD3EBh, 0
; ELF Symbol Table
Elf64_Sym <0>
Elf64_Sym <offset byte_350 - offset byte_350,\
           3, 0, 9, offset _init_proc, \
           0>
Elf64_Sym <offset aItmDeregistert - offset byte_350,\ ; "_ITM_deregisterTMCloneTable"
           20h, 0, 0, offset dword_0, 0>
Elf64_Sym <offset aGmonStart - offset byte_350,\ ; "__gmon_start__"
           20h, 0, 0, offset dword_0, 0>
Elf64_Sym <offset aItmRegistertmc - offset byte_350,\ ; "_ITM_registerTMCloneTable"
           20h, 0, 0, offset dword_0, 0>
Elf64_Sym <offset aCxaFinalize - offset byte_350,\ ; "__cxa_finalize"
           22h, 0, 0, offset dword_0, 0>
Elf64_Sym <offset aEdata - offset byte_350,\ ; "_edata"
           10h, 0, 14h, \
           offset __bss_start, 0>
Elf64_Sym <offset aRand - offset byte_350,\ ; "rand"
           12h, 0, 0Bh, offset rand, \
           4Bh>
Elf64_Sym <offset aEnd - offset byte_350,\ ; "_end"
           10h, 0, 15h, offset _end, 0>
Elf64_Sym <offset aBssStart - offset byte_350,\ ; "__bss_start"
           10h, 0, 15h, \
           offset __bss_start, 0>
Elf64_Sym <offset aInit - offset byte_350,\ ; "_init"
           12h, 0, 9, offset _init_proc,\
           0>
Elf64_Sym <offset aFini - offset byte_350,\ ; "_fini"
           12h, 0, 0Ch, \
           offset _term_proc, 0>
; ELF String Table
byte_350 db 0
aGmonStart db '__gmon_start__',0
aInit db '_init',0
aFini db '_fini',0
aItmDeregistert db '_ITM_deregisterTMCloneTable',0
aItmRegistertmc db '_ITM_registerTMCloneTable',0
aCxaFinalize db '__cxa_finalize',0
aRand db 'rand',0
aLibcSo6 db 'libc.so.6',0
aEdata db '_edata',0
aBssStart db '__bss_start',0
aEnd db '_end',0
aRandomSo db 'random.so',0
aGlibc225 db 'GLIBC_2.2.5',0
; ELF GNU Symbol Version Table
dw 0
dw 0
dw 0                    ; local  symbol: _ITM_deregisterTMCloneTable
dw 0                    ; local  symbol: __gmon_start__
dw 0                    ; local  symbol: _ITM_registerTMCloneTable
dw 2                    ; __cxa_finalize@@GLIBC_2.2.5
dw 1                    ; global symbol: _edata
dw 1                    ; global symbol: rand
dw 1                    ; global symbol: _end
dw 1                    ; global symbol: __bss_start
dw 1                    ; global symbol: _init
dw 1                    ; global symbol: _fini
dw 0
; ELF GNU Symbol Version Requirements
Elf64_Verneed <1, 1, \  ; "libc.so.6"
               offset aLibcSo6 - offset byte_350,\
               10h, 0>
Elf64_Vernaux <9691A75h, 0, 2, \ ; "GLIBC_2.2.5"
               offset aGlibc225 - offset byte_350,\
               0>
; ELF RELA Relocation Table
Elf64_Rela <200E00h, 8, 620h> ; R_X86_64_RELATIVE +620h
Elf64_Rela <200E08h, 8, 5E0h> ; R_X86_64_RELATIVE +5E0h
Elf64_Rela <201028h, 8, 201028h> ; R_X86_64_RELATIVE +201028h
Elf64_Rela <200FE0h, 200000006h, 0> ; R_X86_64_GLOB_DAT _ITM_deregisterTMCloneTable
Elf64_Rela <200FE8h, 300000006h, 0> ; R_X86_64_GLOB_DAT __gmon_start__
Elf64_Rela <200FF0h, 400000006h, 0> ; R_X86_64_GLOB_DAT _ITM_registerTMCloneTable
Elf64_Rela <200FF8h, 500000006h, 0> ; R_X86_64_GLOB_DAT __cxa_finalize
; ELF JMPREL Relocation Table
Elf64_Rela <201018h, 300000007h, 0> ; R_X86_64_JUMP_SLOT __gmon_start__
Elf64_Rela <201020h, 500000007h, 0> ; R_X86_64_JUMP_SLOT __cxa_finalize
LOAD ends


; Segment type: Pure code
; Segment permissions: Read/Execute
_init segment dword public 'CODE' use64
assume cs:_init
;org 500h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing



public _init_proc
_init_proc proc near
sub     rsp, 8          ; _init
mov     rax, cs:__gmon_start___ptr
test    rax, rax
jz      short loc_515
call    ___gmon_start__

loc_515:
add     rsp, 8
retn
_init_proc endp

_init ends


; Segment type: Pure code
; Segment permissions: Read/Execute
LOAD segment byte public 'CODE' use64
assume cs:LOAD
;org 51Ah
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
align 20h
LOAD ends


; Segment type: Pure code
; Segment permissions: Read/Execute
_plt segment para public 'CODE' use64
assume cs:_plt
;org 520h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing



sub_520 proc near
push    cs:qword_201008
jmp     cs:qword_201010
sub_520 endp

align 10h
; [00000006 BYTES: COLLAPSED FUNCTION ___gmon_start__. PRESS CTRL-NUMPAD+ TO EXPAND]
push    0
jmp     sub_520
; [00000006 BYTES: COLLAPSED FUNCTION ___cxa_finalize. PRESS CTRL-NUMPAD+ TO EXPAND]
push    1
jmp     sub_520
_plt ends


; Segment type: Pure code
; Segment permissions: Read/Execute
_text segment para public 'CODE' use64
assume cs:_text
;org 550h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing


; Attributes: bp-based frame

public deregister_tm_clones
deregister_tm_clones proc near
lea     rdi, __bss_start
push    rbp
lea     rax, __bss_start
cmp     rax, rdi
mov     rbp, rsp
jz      short loc_580
mov     rax, cs:_ITM_deregisterTMCloneTable_ptr
test    rax, rax
jz      short loc_580
pop     rbp
jmp     rax
align 20h

loc_580:
pop     rbp
retn
deregister_tm_clones endp

align 10h


; Attributes: bp-based frame

register_tm_clones proc near
lea     rdi, __bss_start
lea     rsi, __bss_start
push    rbp
sub     rsi, rdi
mov     rbp, rsp
sar     rsi, 3
mov     rax, rsi
shr     rax, 3Fh
add     rsi, rax
sar     rsi, 1
jz      short loc_5D0
mov     rax, cs:_ITM_registerTMCloneTable_ptr
test    rax, rax
jz      short loc_5D0
pop     rbp
jmp     rax
align 10h

loc_5D0:
pop     rbp
retn
register_tm_clones endp

align 20h



__do_global_dtors_aux proc near
cmp     cs:__bss_start, 0
jnz     short locret_618
cmp     cs:__cxa_finalize_ptr, 0
push    rbp
mov     rbp, rsp
jz      short loc_603
mov     rdi, cs:__dso_handle
call    ___cxa_finalize

loc_603:
call    deregister_tm_clones
mov     cs:__bss_start, 1
pop     rbp
retn
align 8

locret_618:
rep retn
__do_global_dtors_aux endp

align 20h


; Attributes: bp-based frame

frame_dummy proc near
push    rbp
mov     rbp, rsp
pop     rbp
jmp     register_tm_clones
frame_dummy endp



; Attributes: bp-based frame

public rand
rand proc near

var_24= dword ptr -24h
var_20= dword ptr -20h
var_1C= dword ptr -1Ch
var_18= dword ptr -18h
var_14= dword ptr -14h
var_10= dword ptr -10h
var_C= dword ptr -0Ch

push    rbp
mov     rbp, rsp
mov     [rbp+var_20], 8
mov     [rbp+var_1C], 8
mov     [rbp+var_18], 7
mov     [rbp+var_14], 9
mov     [rbp+var_10], 17h
mov     [rbp+var_C], 4Ah ; 'J'
mov     eax, cs:i_1794
lea     edx, [rax+1]
mov     cs:i_1794, edx
mov     [rbp+var_24], eax
mov     eax, [rbp+var_24]
cdqe
mov     eax, [rbp+rax*4+var_20]
pop     rbp
retn
rand endp

_text ends


; Segment type: Pure code
; Segment permissions: Read/Execute
LOAD segment byte public 'CODE' use64
assume cs:LOAD
;org 675h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
align 8
LOAD ends


; Segment type: Pure code
; Segment permissions: Read/Execute
_fini segment dword public 'CODE' use64
assume cs:_fini
;org 678h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing



public _term_proc
_term_proc proc near
sub     rsp, 8          ; _fini
add     rsp, 8
retn
_term_proc endp

_fini ends


; Segment type: Pure code
; Segment permissions: Read/Execute
LOAD segment byte public 'CODE' use64
assume cs:LOAD
;org 681h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
align 4
LOAD ends


; Segment type: Pure data
; Segment permissions: Read
_eh_frame_hdr segment dword public 'CONST' use64
assume cs:_eh_frame_hdr
;org 684h
unk_684 db    1
db  1Bh
db    3
db  3Bh ; ;
db  18h
db    0
db    0
db    0
db    2
db    0
db    0
db    0
db  9Ch
db 0FEh
db 0FFh
db 0FFh
db  34h ; 4
db    0
db    0
db    0
db 0A6h
db 0FFh
db 0FFh
db 0FFh
db  5Ch ; \
db    0
db    0
db    0
_eh_frame_hdr ends


; Segment type: Pure data
; Segment permissions: Read
_eh_frame segment qword public 'CONST' use64
assume cs:_eh_frame
;org 6A0h
db  14h
db    0
db    0
db    0
db    0
db    0
db    0
db    0
db    1
db  7Ah ; z
db  52h ; R
db    0
db    1
db  78h ; x
db  10h
db    1
db  1Bh
db  0Ch
db    7
db    8
db  90h
db    1
db    0
db    0
db  24h ; $
db    0
db    0
db    0
db  1Ch
db    0
db    0
db    0
db  60h ; `
db 0FEh
db 0FFh
db 0FFh
db  30h ; 0
db    0
db    0
db    0
db    0
db  0Eh
db  10h
db  46h ; F
db  0Eh
db  18h
db  4Ah ; J
db  0Fh
db  0Bh
db  77h ; w
db    8
db  80h
db    0
db  3Fh ; ?
db  1Ah
db  3Bh ; ;
db  2Ah ; *
db  33h ; 3
db  24h ; $
db  22h ; "
db    0
db    0
db    0
db    0
db  1Ch
db    0
db    0
db    0
db  44h ; D
db    0
db    0
db    0
db  42h ; B
db 0FFh
db 0FFh
db 0FFh
db  4Bh ; K
db    0
db    0
db    0
db    0
db  41h ; A
db  0Eh
db  10h
db  86h
db    2
db  43h ; C
db  0Dh
db    6
db    2
db  46h ; F
db  0Ch
db    7
db    8
db    0
db    0
__FRAME_END__ db    0
db    0
db    0
db    0
_eh_frame ends

; ELF Initialization Function Table

; Segment type: Pure data
; Segment permissions: Read/Write
_init_array segment qword public 'DATA' use64
assume cs:_init_array
;org 200E00h
__frame_dummy_init_array_entry dq offset frame_dummy
_init_array ends

; ELF Termination Function Table

; Segment type: Pure data
; Segment permissions: Read/Write
_fini_array segment qword public 'DATA' use64
assume cs:_fini_array
;org 200E08h
__do_global_dtors_aux_fini_array_entry dq offset __do_global_dtors_aux
_fini_array ends

; ELF Dynamic Information

; Segment type: Pure data
; Segment permissions: Read/Write
LOAD segment byte public 'DATA' use64
assume cs:LOAD
;org 200E10h
_DYNAMIC Elf64_Dyn <1, 66h> ; DT_NEEDED libc.so.6
Elf64_Dyn <0Eh, 88h>    ; DT_SONAME random.so
Elf64_Dyn <0Ch, 500h>   ; DT_INIT
Elf64_Dyn <0Dh, 678h>   ; DT_FINI
Elf64_Dyn <19h, 200E00h> ; DT_INIT_ARRAY
Elf64_Dyn <1Bh, 8>      ; DT_INIT_ARRAYSZ
Elf64_Dyn <1Ah, 200E08h> ; DT_FINI_ARRAY
Elf64_Dyn <1Ch, 8>      ; DT_FINI_ARRAYSZ
Elf64_Dyn <6FFFFEF5h, 1F0h> ; DT_GNU_HASH
Elf64_Dyn <5, 350h>     ; DT_STRTAB
Elf64_Dyn <6, 230h>     ; DT_SYMTAB
Elf64_Dyn <0Ah, 9Eh>    ; DT_STRSZ
Elf64_Dyn <0Bh, 18h>    ; DT_SYMENT
Elf64_Dyn <3, 201000h>  ; DT_PLTGOT
Elf64_Dyn <2, 30h>      ; DT_PLTRELSZ
Elf64_Dyn <14h, 7>      ; DT_PLTREL
Elf64_Dyn <17h, 4D0h>   ; DT_JMPREL
Elf64_Dyn <7, 428h>     ; DT_RELA
Elf64_Dyn <8, 0A8h>     ; DT_RELASZ
Elf64_Dyn <9, 18h>      ; DT_RELAENT
Elf64_Dyn <6FFFFFFEh, 408h> ; DT_VERNEED
Elf64_Dyn <6FFFFFFFh, 1> ; DT_VERNEEDNUM
Elf64_Dyn <6FFFFFF0h, 3EEh> ; DT_VERSYM
Elf64_Dyn <6FFFFFF9h, 3> ; DT_RELACOUNT
Elf64_Dyn <0>           ; DT_NULL
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
db    0
db    0
db    0
db    0
LOAD ends


; Segment type: Pure data
; Segment permissions: Read/Write
_got segment qword public 'DATA' use64
assume cs:_got
;org 200FE0h
_ITM_deregisterTMCloneTable_ptr dq offset _ITM_deregisterTMCloneTable
__gmon_start___ptr dq offset __gmon_start__
_ITM_registerTMCloneTable_ptr dq offset _ITM_registerTMCloneTable
__cxa_finalize_ptr dq offset __cxa_finalize
_got ends


; Segment type: Pure data
; Segment permissions: Read/Write
_got_plt segment qword public 'DATA' use64
assume cs:_got_plt
;org 201000h
_GLOBAL_OFFSET_TABLE_ dq offset _DYNAMIC
qword_201008 dq 0
qword_201010 dq 0
off_201018 dq offset __gmon_start__
off_201020 dq offset __cxa_finalize
_got_plt ends


; Segment type: Pure data
; Segment permissions: Read/Write
_data segment qword public 'DATA' use64
assume cs:_data
;org 201028h
__dso_handle dq offset __dso_handle
_data ends


; Segment type: Uninitialized
; Segment permissions: Read/Write
_bss segment dword public 'BSS' use64
assume cs:_bss
;org 201030h
assume es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
public __bss_start
__bss_start db ?        ; Alternative name is '_edata'
                        ; completed.7589
                        ; _edata
                        ; __bss_start
                        ; _edata
align 4
i_1794 dd ?
_bss ends


; Segment type: Zero-length
_prgend segment byte public '' use64
_end label byte
_prgend ends


; Segment type: Externs
; extern
extrn __cxa_finalize:near ; weak
extrn _ITM_deregisterTMCloneTable ; weak
extrn __gmon_start__:near ; weak
extrn _ITM_registerTMCloneTable ; weak


end deregister_tm_clones
