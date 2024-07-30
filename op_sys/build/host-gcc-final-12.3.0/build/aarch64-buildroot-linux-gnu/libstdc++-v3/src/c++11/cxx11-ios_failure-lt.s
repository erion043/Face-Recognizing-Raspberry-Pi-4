	.arch armv8-a+crc
	.file	"cxx11-ios_failure.cc"
	.text
	.section	.rodata._ZNK12_GLOBAL__N_117io_error_category4nameEv.str1.8,"aMS",@progbits,1
	.align	3
.LC0:
	.string	"iostream"
	.section	.text._ZNK12_GLOBAL__N_117io_error_category4nameEv,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_ZNK12_GLOBAL__N_117io_error_category4nameEv, %function
_ZNK12_GLOBAL__N_117io_error_category4nameEv:
.LFB1544:
	.cfi_startproc
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	ret
	.cfi_endproc
.LFE1544:
	.size	_ZNK12_GLOBAL__N_117io_error_category4nameEv, .-_ZNK12_GLOBAL__N_117io_error_category4nameEv
	.section	.text._ZN12_GLOBAL__N_113constant_initD2Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_ZN12_GLOBAL__N_113constant_initD2Ev, %function
_ZN12_GLOBAL__N_113constant_initD2Ev:
.LFB1557:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE1557:
	.size	_ZN12_GLOBAL__N_113constant_initD2Ev, .-_ZN12_GLOBAL__N_113constant_initD2Ev
	.set	_ZN12_GLOBAL__N_113constant_initD1Ev,_ZN12_GLOBAL__N_113constant_initD2Ev
	.section	.text._ZN12_GLOBAL__N_117io_error_categoryD2Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_ZN12_GLOBAL__N_117io_error_categoryD2Ev, %function
_ZN12_GLOBAL__N_117io_error_categoryD2Ev:
.LFB1947:
	.cfi_startproc
	adrp	x1, _ZTVN12_GLOBAL__N_117io_error_categoryE+16
	add	x1, x1, :lo12:_ZTVN12_GLOBAL__N_117io_error_categoryE+16
	str	x1, [x0]
	b	_ZNSt3_V214error_categoryD2Ev
	.cfi_endproc
.LFE1947:
	.size	_ZN12_GLOBAL__N_117io_error_categoryD2Ev, .-_ZN12_GLOBAL__N_117io_error_categoryD2Ev
	.set	_ZN12_GLOBAL__N_117io_error_categoryD1Ev,_ZN12_GLOBAL__N_117io_error_categoryD2Ev
	.section	.text._ZN12_GLOBAL__N_117io_error_categoryD0Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_ZN12_GLOBAL__N_117io_error_categoryD0Ev, %function
_ZN12_GLOBAL__N_117io_error_categoryD0Ev:
.LFB1949:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	adrp	x1, _ZTVN12_GLOBAL__N_117io_error_categoryE+16
	add	x1, x1, :lo12:_ZTVN12_GLOBAL__N_117io_error_categoryE+16
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	str	x1, [x0]
	bl	_ZNSt3_V214error_categoryD2Ev
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	b	_ZdlPv
	.cfi_endproc
.LFE1949:
	.size	_ZN12_GLOBAL__N_117io_error_categoryD0Ev, .-_ZN12_GLOBAL__N_117io_error_categoryD0Ev
	.section	.text._ZNSt8ios_base7failureB5cxx11D2Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt8ios_base7failureB5cxx11D2Ev
	.type	_ZNSt8ios_base7failureB5cxx11D2Ev, %function
_ZNSt8ios_base7failureB5cxx11D2Ev:
.LFB1570:
	.cfi_startproc
	adrp	x1, :got:_ZTVNSt8ios_base7failureB5cxx11E
	ldr	x1, [x1, :got_lo12:_ZTVNSt8ios_base7failureB5cxx11E]
	add	x1, x1, 16
	str	x1, [x0]
	b	_ZNSt12system_errorD2Ev
	.cfi_endproc
.LFE1570:
	.size	_ZNSt8ios_base7failureB5cxx11D2Ev, .-_ZNSt8ios_base7failureB5cxx11D2Ev
	.global	_ZNSt8ios_base7failureB5cxx11D1Ev
	.set	_ZNSt8ios_base7failureB5cxx11D1Ev,_ZNSt8ios_base7failureB5cxx11D2Ev
	.section	.text._ZNSt8ios_base7failureB5cxx11D0Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt8ios_base7failureB5cxx11D0Ev
	.type	_ZNSt8ios_base7failureB5cxx11D0Ev, %function
_ZNSt8ios_base7failureB5cxx11D0Ev:
.LFB1572:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	bl	_ZNSt8ios_base7failureB5cxx11D1Ev
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	b	_ZdlPv
	.cfi_endproc
.LFE1572:
	.size	_ZNSt8ios_base7failureB5cxx11D0Ev, .-_ZNSt8ios_base7failureB5cxx11D0Ev
	.section	.text._ZNKSt8ios_base7failureB5cxx114whatEv,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNKSt8ios_base7failureB5cxx114whatEv
	.type	_ZNKSt8ios_base7failureB5cxx114whatEv, %function
_ZNKSt8ios_base7failureB5cxx114whatEv:
.LFB1573:
	.cfi_startproc
	b	_ZNKSt13runtime_error4whatEv
	.cfi_endproc
.LFE1573:
	.size	_ZNKSt8ios_base7failureB5cxx114whatEv, .-_ZNKSt8ios_base7failureB5cxx114whatEv
	.section	.text._ZNSt19__iosfail_type_infoD2Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt19__iosfail_type_infoD2Ev
	.type	_ZNSt19__iosfail_type_infoD2Ev, %function
_ZNSt19__iosfail_type_infoD2Ev:
.LFB1585:
	.cfi_startproc
	adrp	x1, :got:_ZTVSt19__iosfail_type_info
	ldr	x1, [x1, :got_lo12:_ZTVSt19__iosfail_type_info]
	add	x1, x1, 16
	str	x1, [x0]
	b	_ZN10__cxxabiv120__si_class_type_infoD2Ev
	.cfi_endproc
.LFE1585:
	.size	_ZNSt19__iosfail_type_infoD2Ev, .-_ZNSt19__iosfail_type_infoD2Ev
	.global	_ZNSt19__iosfail_type_infoD1Ev
	.set	_ZNSt19__iosfail_type_infoD1Ev,_ZNSt19__iosfail_type_infoD2Ev
	.section	.text._ZNSt19__iosfail_type_infoD0Ev,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt19__iosfail_type_infoD0Ev
	.type	_ZNSt19__iosfail_type_infoD0Ev, %function
_ZNSt19__iosfail_type_infoD0Ev:
.LFB1587:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	bl	_ZNSt19__iosfail_type_infoD1Ev
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	b	_ZdlPv
	.cfi_endproc
.LFE1587:
	.size	_ZNSt19__iosfail_type_infoD0Ev, .-_ZNSt19__iosfail_type_infoD0Ev
	.section	.text._ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv
	.type	_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv, %function
_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv:
.LFB1588:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	str	x21, [sp, 32]
	.cfi_offset 21, -16
	mov	x21, x0
	mov	x0, x1
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -32
	.cfi_offset 20, -24
	mov	x20, x1
	mov	x19, x2
	bl	_ZSt24__is_ios_failure_handlerPKN10__cxxabiv117__class_type_infoE
	tst	w0, 255
	beq	.L20
	ldr	x1, [x19]
	ldr	x21, [sp, 32]
	add	x1, x1, 32
	str	x1, [x19]
	ldp	x19, x20, [sp, 16]
	ldp	x29, x30, [sp], 48
	.cfi_remember_state
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 21
	.cfi_restore 19
	.cfi_restore 20
	.cfi_def_cfa_offset 0
	ret
	.p2align 2,,3
.L20:
	.cfi_restore_state
	mov	x2, x19
	mov	x1, x20
	ldp	x19, x20, [sp, 16]
	mov	x0, x21
	ldr	x21, [sp, 32]
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 21
	.cfi_restore 19
	.cfi_restore 20
	.cfi_def_cfa_offset 0
	b	_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv
	.cfi_endproc
.LFE1588:
	.size	_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv, .-_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv
	.section	.text._ZNSt13__ios_failureD2Ev,"axG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
	.align	2
	.p2align 4,,15
	.weak	_ZNSt13__ios_failureD2Ev
	.type	_ZNSt13__ios_failureD2Ev, %function
_ZNSt13__ios_failureD2Ev:
.LFB1581:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1581
	adrp	x1, :got:_ZTVSt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTVSt13__ios_failure]
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	add	x1, x1, 16
	str	x1, [x0], 32
	bl	_ZSt21__destroy_ios_failurePv
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	b	_ZNSt8ios_base7failureB5cxx11D2Ev
	.cfi_endproc
.LFE1581:
	.global	__gxx_personality_v0
	.section	.gcc_except_table._ZNSt13__ios_failureD2Ev,"aG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
.LLSDA1581:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1581-.LLSDACSB1581
.LLSDACSB1581:
.LLSDACSE1581:
	.section	.text._ZNSt13__ios_failureD2Ev,"axG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
	.size	_ZNSt13__ios_failureD2Ev, .-_ZNSt13__ios_failureD2Ev
	.weak	_ZNSt13__ios_failureD1Ev
	.set	_ZNSt13__ios_failureD1Ev,_ZNSt13__ios_failureD2Ev
	.section	.text._ZNSt13__ios_failureD0Ev,"axG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
	.align	2
	.p2align 4,,15
	.weak	_ZNSt13__ios_failureD0Ev
	.type	_ZNSt13__ios_failureD0Ev, %function
_ZNSt13__ios_failureD0Ev:
.LFB1583:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1583
	adrp	x1, :got:_ZTVSt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTVSt13__ios_failure]
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	add	x1, x1, 16
	str	x1, [x0], 32
	bl	_ZSt21__destroy_ios_failurePv
	mov	x0, x19
	bl	_ZNSt8ios_base7failureB5cxx11D2Ev
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	b	_ZdlPv
	.cfi_endproc
.LFE1583:
	.section	.gcc_except_table._ZNSt13__ios_failureD0Ev,"aG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
.LLSDA1583:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1583-.LLSDACSB1583
.LLSDACSB1583:
.LLSDACSE1583:
	.section	.text._ZNSt13__ios_failureD0Ev,"axG",@progbits,_ZNSt13__ios_failureD5Ev,comdat
	.size	_ZNSt13__ios_failureD0Ev, .-_ZNSt13__ios_failureD0Ev
	.section	.rodata._ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei.str1.8,"aMS",@progbits,1
	.align	3
.LC1:
	.string	"iostream error"
	.align	3
.LC2:
	.string	"Unknown error"
	.section	.text._ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei, %function
_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei:
.LFB1545:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1545
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	add	x0, x8, 16
	mov	x29, sp
	cmp	w1, 1
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x8
	stp	x0, xzr, [x8]
	strb	wzr, [x8, 16]
	beq	.L31
	adrp	x3, .LC2
	mov	x4, 13
	add	x3, x3, :lo12:.LC2
	mov	x2, 0
	mov	x1, 0
	mov	x0, x8
.LEHB0:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_remember_state
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	ret
	.p2align 2,,3
.L31:
	.cfi_restore_state
	adrp	x3, .LC1
	mov	x4, 14
	add	x3, x3, :lo12:.LC1
	mov	x2, 0
	mov	x1, 0
	mov	x0, x8
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE0:
	mov	x0, x19
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_remember_state
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	ret
.L29:
	.cfi_restore_state
	mov	x1, x0
	mov	x0, x19
	mov	x19, x1
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	mov	x0, x19
.LEHB1:
	bl	_Unwind_Resume
.LEHE1:
	.cfi_endproc
.LFE1545:
	.section	.gcc_except_table._ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei,"a",@progbits
.LLSDA1545:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1545-.LLSDACSB1545
.LLSDACSB1545:
	.uleb128 .LEHB0-.LFB1545
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L29-.LFB1545
	.uleb128 0
	.uleb128 .LEHB1-.LFB1545
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1545:
	.section	.text._ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	.size	_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei, .-_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	.section	.rodata._ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE.str1.8,"aMS",@progbits,1
	.align	3
.LC3:
	.string	"basic_string::append"
	.align	3
.LC4:
	.string	": "
	.section	.text._ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"axG",@progbits,_ZNSt12system_errorC5ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
	.align	2
	.p2align 4,,15
	.weak	_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, %function
_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1195:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1195
	stp	x29, x30, [sp, -192]!
	.cfi_def_cfa_offset 192
	.cfi_offset 29, -192
	.cfi_offset 30, -184
	mov	x29, sp
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -176
	.cfi_offset 20, -168
	mov	x20, x0
	stp	x23, x24, [sp, 48]
	.cfi_offset 23, -144
	.cfi_offset 24, -136
	add	x23, sp, 144
	ldp	x24, x19, [x3]
	stp	x21, x22, [sp, 32]
	.cfi_offset 21, -160
	.cfi_offset 22, -152
	mov	x22, x1
	mov	x21, x2
	cmp	x19, 15
	stp	x25, x26, [sp, 64]
	.cfi_offset 25, -128
	.cfi_offset 26, -120
	add	x25, sp, 128
	str	x27, [sp, 80]
	.cfi_offset 27, -112
	str	x23, [sp, 128]
	str	x19, [sp, 160]
	bhi	.L76
	cmp	x19, 1
	bne	.L35
	ldrb	w0, [x24]
	mov	x1, x23
	strb	w0, [sp, 144]
.L36:
	str	x19, [sp, 136]
	mov	x0, 4611686018427387903
	strb	wzr, [x1, x19]
	ldr	x1, [sp, 136]
	sub	x0, x0, x1
	cmp	x0, 1
	bls	.L77
	adrp	x1, .LC4
	mov	x2, 2
	add	x1, x1, :lo12:.LC4
	mov	x0, x25
.LEHB2:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
.LEHE2:
	ldr	x1, [x21]
	adrp	x0, _ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	add	x0, x0, :lo12:_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	ldr	x2, [x1, 32]
	cmp	x2, x0
	bne	.L40
	add	x0, sp, 176
	cmp	w22, 1
	strb	wzr, [sp, 176]
	add	x26, sp, 160
	stp	x0, xzr, [sp, 160]
	beq	.L78
	adrp	x3, .LC2
	mov	x4, 13
	add	x3, x3, :lo12:.LC2
	mov	x2, 0
	mov	x1, 0
	mov	x0, x26
.LEHB3:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE3:
.L42:
	ldp	x3, x4, [sp, 128]
	mov	x7, 15
	ldp	x1, x2, [sp, 160]
	cmp	x3, x23
	ldr	x0, [sp, 144]
	csel	x0, x0, x7, ne
	add	x6, x4, x2
	cmp	x6, x0
	bls	.L46
	add	x5, sp, 176
	ldr	x0, [sp, 176]
	cmp	x1, x5
	csel	x0, x0, x7, ne
	cmp	x6, x0
	bls	.L79
.L46:
	mov	x0, 4611686018427387903
	sub	x0, x0, x4
	cmp	x2, x0
	bhi	.L80
	mov	x0, x25
.LEHB4:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
.LEHE4:
	add	x27, sp, 112
	mov	x24, x0
	ldr	x2, [x0, 8]
	mov	x19, x0
	str	x27, [sp, 96]
	ldr	x0, [x24], 16
	cmp	x0, x24
	beq	.L81
.L52:
	ldr	x1, [x19, 16]
	str	x0, [sp, 96]
	str	x1, [sp, 112]
.L53:
	str	x2, [sp, 104]
	mov	x0, x20
	stp	x24, xzr, [x19]
	strb	wzr, [x19, 16]
	add	x19, sp, 96
	mov	x1, x19
.LEHB5:
	bl	_ZNSt13runtime_errorC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE5:
	ldr	x0, [sp, 96]
	cmp	x0, x27
	beq	.L54
	bl	_ZdlPv
.L54:
	ldr	x0, [sp, 160]
	add	x1, sp, 176
	cmp	x0, x1
	beq	.L55
	bl	_ZdlPv
.L55:
	ldr	x0, [sp, 128]
	cmp	x0, x23
	beq	.L56
	bl	_ZdlPv
.L56:
	adrp	x0, :got:_ZTVSt12system_error
	ldr	x0, [x0, :got_lo12:_ZTVSt12system_error]
	ldp	x23, x24, [sp, 48]
	ldp	x25, x26, [sp, 64]
	add	x0, x0, 16
	ldr	x27, [sp, 80]
	str	x0, [x20]
	stp	x22, x21, [x20, 16]
	ldp	x19, x20, [sp, 16]
	ldp	x21, x22, [sp, 32]
	ldp	x29, x30, [sp], 192
	.cfi_remember_state
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 27
	.cfi_restore 25
	.cfi_restore 26
	.cfi_restore 23
	.cfi_restore 24
	.cfi_restore 21
	.cfi_restore 22
	.cfi_restore 19
	.cfi_restore 20
	.cfi_def_cfa_offset 0
	ret
	.p2align 2,,3
.L35:
	.cfi_restore_state
	mov	x1, x23
	cbz	x19, .L36
	mov	x0, x23
	b	.L34
	.p2align 2,,3
.L76:
	add	x1, sp, 160
	mov	x2, 0
	mov	x0, x25
.LEHB6:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.LEHE6:
	ldr	x1, [sp, 160]
	str	x0, [sp, 128]
	str	x1, [sp, 144]
.L34:
	mov	x2, x19
	mov	x1, x24
	bl	memcpy
	ldr	x1, [sp, 128]
	ldr	x19, [sp, 160]
	b	.L36
	.p2align 2,,3
.L78:
	adrp	x3, .LC1
	mov	x4, 14
	add	x3, x3, :lo12:.LC1
	mov	x2, 0
	mov	x1, 0
	mov	x0, x26
.LEHB7:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE7:
	b	.L42
	.p2align 2,,3
.L79:
	mov	x2, 0
	mov	x1, 0
	mov	x0, x26
.LEHB8:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE8:
	add	x27, sp, 112
	mov	x24, x0
	ldr	x2, [x0, 8]
	mov	x19, x0
	str	x27, [sp, 96]
	ldr	x0, [x24], 16
	cmp	x0, x24
	bne	.L52
.L81:
	add	x2, x2, 1
	mov	x1, x24
	mov	x0, x27
	bl	memcpy
	ldr	x2, [x19, 8]
	b	.L53
	.p2align 2,,3
.L40:
	add	x26, sp, 160
	mov	w1, w22
	mov	x8, x26
	mov	x0, x21
.LEHB9:
	blr	x2
.LEHE9:
	b	.L42
.L77:
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
.LEHB10:
	bl	_ZSt20__throw_length_errorPKc
.LEHE10:
.L80:
	adrp	x0, .LC3
	add	x0, x0, :lo12:.LC3
.LEHB11:
	bl	_ZSt20__throw_length_errorPKc
.LEHE11:
.L62:
	mov	x19, x0
	b	.L44
.L65:
	mov	x19, x0
	b	.L44
.L64:
	mov	x1, x0
	mov	x0, x19
	mov	x19, x1
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
.L58:
	mov	x0, x26
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
.L44:
	mov	x0, x25
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	mov	x0, x19
.LEHB12:
	bl	_Unwind_Resume
.LEHE12:
.L66:
	mov	x19, x0
	b	.L58
.L63:
	mov	x19, x0
	b	.L58
	.cfi_endproc
.LFE1195:
	.section	.gcc_except_table._ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"aG",@progbits,_ZNSt12system_errorC5ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
.LLSDA1195:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1195-.LLSDACSB1195
.LLSDACSB1195:
	.uleb128 .LEHB2-.LFB1195
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L65-.LFB1195
	.uleb128 0
	.uleb128 .LEHB3-.LFB1195
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L66-.LFB1195
	.uleb128 0
	.uleb128 .LEHB4-.LFB1195
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L63-.LFB1195
	.uleb128 0
	.uleb128 .LEHB5-.LFB1195
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L64-.LFB1195
	.uleb128 0
	.uleb128 .LEHB6-.LFB1195
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB1195
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L66-.LFB1195
	.uleb128 0
	.uleb128 .LEHB8-.LFB1195
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L63-.LFB1195
	.uleb128 0
	.uleb128 .LEHB9-.LFB1195
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L62-.LFB1195
	.uleb128 0
	.uleb128 .LEHB10-.LFB1195
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L65-.LFB1195
	.uleb128 0
	.uleb128 .LEHB11-.LFB1195
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L63-.LFB1195
	.uleb128 0
	.uleb128 .LEHB12-.LFB1195
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
.LLSDACSE1195:
	.section	.text._ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"axG",@progbits,_ZNSt12system_errorC5ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
	.size	_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.weak	_ZNSt12system_errorC1ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.set	_ZNSt12system_errorC1ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._ZSt17iostream_categoryv,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZSt17iostream_categoryv
	.type	_ZSt17iostream_categoryv, %function
_ZSt17iostream_categoryv:
.LFB1559:
	.cfi_startproc
	adrp	x0, _ZN12_GLOBAL__N_120io_category_instanceE
	add	x0, x0, :lo12:_ZN12_GLOBAL__N_120io_category_instanceE
	ret
	.cfi_endproc
.LFE1559:
	.size	_ZSt17iostream_categoryv, .-_ZSt17iostream_categoryv
	.section	.text._ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, %function
_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1561:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -16
	.cfi_offset 20, -8
	mov	x20, x1
	mov	x19, x0
	bl	_ZSt17iostream_categoryv
	mov	x3, x20
	mov	x2, x0
	mov	x1, 1
	mov	x0, x19
	bl	_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	adrp	x0, :got:_ZTVNSt8ios_base7failureB5cxx11E
	ldr	x0, [x0, :got_lo12:_ZTVNSt8ios_base7failureB5cxx11E]
	add	x0, x0, 16
	str	x0, [x19]
	ldp	x19, x20, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_restore 20
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE1561:
	.size	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.global	_ZNSt8ios_base7failureB5cxx11C1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.set	_ZNSt8ios_base7failureB5cxx11C1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code
	.type	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code, %function
_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code:
.LFB1564:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	mov	x3, x1
	ldp	x4, x5, [x2]
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	mov	x19, x0
	mov	x1, x4
	mov	x2, x5
	bl	_ZNSt12system_errorC2ESt10error_codeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	adrp	x0, :got:_ZTVNSt8ios_base7failureB5cxx11E
	ldr	x0, [x0, :got_lo12:_ZTVNSt8ios_base7failureB5cxx11E]
	add	x0, x0, 16
	str	x0, [x19]
	ldr	x19, [sp, 16]
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE1564:
	.size	_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code, .-_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code
	.global	_ZNSt8ios_base7failureB5cxx11C1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code
	.set	_ZNSt8ios_base7failureB5cxx11C1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code,_ZNSt8ios_base7failureB5cxx11C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt10error_code
	.section	.text._ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code,"ax",@progbits
	.align	2
	.p2align 4,,15
	.global	_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
	.type	_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code, %function
_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code:
.LFB1567:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1567
	stp	x29, x30, [sp, -192]!
	.cfi_def_cfa_offset 192
	.cfi_offset 29, -192
	.cfi_offset 30, -184
	mov	x29, sp
	adrp	x3, _ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	add	x3, x3, :lo12:_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	stp	x21, x22, [sp, 32]
	.cfi_offset 21, -160
	.cfi_offset 22, -152
	ldr	x22, [x2, 8]
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -176
	.cfi_offset 20, -168
	mov	x20, x0
	stp	x23, x24, [sp, 48]
	ldr	x0, [x22]
	stp	x25, x26, [sp, 64]
	.cfi_offset 23, -144
	.cfi_offset 24, -136
	.cfi_offset 25, -128
	.cfi_offset 26, -120
	ldr	w24, [x2]
	stp	x27, x28, [sp, 80]
	.cfi_offset 27, -112
	.cfi_offset 28, -104
	mov	x27, x1
	ldr	x2, [x0, 32]
	cmp	x2, x3
	bne	.L88
	add	x0, sp, 112
	cmp	w24, 1
	strb	wzr, [sp, 112]
	add	x25, sp, 96
	stp	x0, xzr, [sp, 96]
	beq	.L110
	adrp	x3, .LC2
	mov	x4, 13
	add	x3, x3, :lo12:.LC2
	mov	x2, 0
	mov	x1, 0
	mov	x0, x25
.LEHB13:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE13:
.L90:
	adrp	x3, .LC4
	mov	x4, 2
	add	x3, x3, :lo12:.LC4
	mov	x2, 0
	mov	x1, 0
	mov	x0, x25
.LEHB14:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE14:
	add	x23, sp, 144
	mov	x21, x0
	ldr	x2, [x0, 8]
	mov	x19, x0
	str	x23, [sp, 128]
	ldr	x0, [x21], 16
	cmp	x0, x21
	beq	.L111
	ldr	x1, [x19, 16]
	str	x0, [sp, 128]
	str	x1, [sp, 144]
.L94:
	mov	x0, x27
	stp	x21, xzr, [x19]
	add	x26, sp, 128
	strb	wzr, [x19, 16]
	str	x2, [sp, 136]
	bl	strlen
	mov	x4, x0
	mov	x3, x27
	mov	x0, x26
	mov	x2, 0
	mov	x1, 0
.LEHB15:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE15:
	add	x27, sp, 176
	mov	x21, x0
	ldr	x2, [x0, 8]
	mov	x19, x0
	str	x27, [sp, 160]
	ldr	x0, [x21], 16
	cmp	x0, x21
	beq	.L112
	ldr	x1, [x19, 16]
	str	x0, [sp, 160]
	str	x1, [sp, 176]
.L96:
	add	x28, sp, 160
	mov	x0, x20
	stp	x21, xzr, [x19]
	mov	x1, x28
	strb	wzr, [x19, 16]
	str	x2, [sp, 168]
.LEHB16:
	bl	_ZNSt13runtime_errorC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE16:
	ldr	x0, [sp, 160]
	cmp	x0, x27
	beq	.L97
	bl	_ZdlPv
.L97:
	ldr	x0, [sp, 128]
	cmp	x0, x23
	beq	.L98
	bl	_ZdlPv
.L98:
	ldr	x0, [sp, 96]
	add	x1, sp, 112
	cmp	x0, x1
	beq	.L99
	bl	_ZdlPv
.L99:
	adrp	x0, :got:_ZTVNSt8ios_base7failureB5cxx11E
	ldr	x0, [x0, :got_lo12:_ZTVNSt8ios_base7failureB5cxx11E]
	ldp	x25, x26, [sp, 64]
	ldp	x27, x28, [sp, 80]
	add	x0, x0, 16
	str	x0, [x20]
	str	w24, [x20, 16]
	str	x22, [x20, 24]
	ldp	x19, x20, [sp, 16]
	ldp	x21, x22, [sp, 32]
	ldp	x23, x24, [sp, 48]
	ldp	x29, x30, [sp], 192
	.cfi_remember_state
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 27
	.cfi_restore 28
	.cfi_restore 25
	.cfi_restore 26
	.cfi_restore 23
	.cfi_restore 24
	.cfi_restore 21
	.cfi_restore 22
	.cfi_restore 19
	.cfi_restore 20
	.cfi_def_cfa_offset 0
	ret
	.p2align 2,,3
.L110:
	.cfi_restore_state
	adrp	x3, .LC1
	mov	x4, 14
	add	x3, x3, :lo12:.LC1
	mov	x2, 0
	mov	x1, 0
	mov	x0, x25
.LEHB17:
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
.LEHE17:
	b	.L90
	.p2align 2,,3
.L88:
	add	x25, sp, 96
	mov	w1, w24
	mov	x8, x25
	mov	x0, x22
.LEHB18:
	blr	x2
	b	.L90
	.p2align 2,,3
.L112:
	add	x2, x2, 1
	mov	x1, x21
	mov	x0, x27
	bl	memcpy
	ldr	x2, [x19, 8]
	b	.L96
	.p2align 2,,3
.L111:
	add	x2, x2, 1
	mov	x1, x21
	mov	x0, x23
	bl	memcpy
	ldr	x2, [x19, 8]
	b	.L94
.L106:
	mov	x19, x0
	b	.L102
.L104:
	mov	x19, x0
.L101:
	mov	x0, x26
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
.L102:
	mov	x0, x25
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	mov	x0, x19
	bl	_Unwind_Resume
.LEHE18:
.L103:
	mov	x19, x0
	b	.L102
.L105:
	mov	x19, x0
	mov	x0, x28
	bl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
	b	.L101
	.cfi_endproc
.LFE1567:
	.section	.gcc_except_table._ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code,"a",@progbits
.LLSDA1567:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1567-.LLSDACSB1567
.LLSDACSB1567:
	.uleb128 .LEHB13-.LFB1567
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L106-.LFB1567
	.uleb128 0
	.uleb128 .LEHB14-.LFB1567
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L103-.LFB1567
	.uleb128 0
	.uleb128 .LEHB15-.LFB1567
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L104-.LFB1567
	.uleb128 0
	.uleb128 .LEHB16-.LFB1567
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L105-.LFB1567
	.uleb128 0
	.uleb128 .LEHB17-.LFB1567
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L106-.LFB1567
	.uleb128 0
	.uleb128 .LEHB18-.LFB1567
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE1567:
	.section	.text._ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
	.size	_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code, .-_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
	.global	_ZNSt8ios_base7failureB5cxx11C1EPKcRKSt10error_code
	.set	_ZNSt8ios_base7failureB5cxx11C1EPKcRKSt10error_code,_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
	.section	.text.unlikely._ZSt19__throw_ios_failurePKc,"ax",@progbits
	.align	2
	.global	_ZSt19__throw_ios_failurePKc
	.type	_ZSt19__throw_ios_failurePKc, %function
_ZSt19__throw_ios_failurePKc:
.LFB1589:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1589
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -32
	.cfi_offset 20, -24
	mov	x20, x0
	mov	x0, 48
	bl	__cxa_allocate_exception
	mov	x19, x0
	mov	x0, x20
	bl	gettext
	mov	x20, x0
	bl	_ZSt17iostream_categoryv
	mov	x3, x0
	mov	w4, 1
	mov	x1, x20
	mov	x0, x19
	add	x2, sp, 32
	str	w4, [sp, 32]
	str	x3, [sp, 40]
.LEHB19:
	bl	_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
.LEHE19:
	adrp	x1, :got:_ZTVSt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTVSt13__ios_failure]
	mov	x0, x19
	add	x1, x1, 16
	str	x1, [x19]
	bl	_ZNKSt13runtime_error4whatEv
	mov	x1, x0
	add	x0, x19, 32
.LEHB20:
	bl	_ZSt23__construct_ios_failurePvPKc
.LEHE20:
	adrp	x2, :got:_ZNSt13__ios_failureD1Ev
	ldr	x2, [x2, :got_lo12:_ZNSt13__ios_failureD1Ev]
	mov	x0, x19
	adrp	x1, :got:_ZTISt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTISt13__ios_failure]
.LEHB21:
	bl	__cxa_throw
.L118:
	mov	x20, x0
	mov	x0, x19
	bl	_ZNSt8ios_base7failureB5cxx11D2Ev
	b	.L116
.L117:
	mov	x20, x0
.L116:
	mov	x0, x19
	bl	__cxa_free_exception
	mov	x0, x20
	bl	_Unwind_Resume
.LEHE21:
	.cfi_endproc
.LFE1589:
	.section	.gcc_except_table._ZSt19__throw_ios_failurePKc,"a",@progbits
.LLSDA1589:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1589-.LLSDACSB1589
.LLSDACSB1589:
	.uleb128 .LEHB19-.LFB1589
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L117-.LFB1589
	.uleb128 0
	.uleb128 .LEHB20-.LFB1589
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L118-.LFB1589
	.uleb128 0
	.uleb128 .LEHB21-.LFB1589
	.uleb128 .LEHE21-.LEHB21
	.uleb128 0
	.uleb128 0
.LLSDACSE1589:
	.section	.text.unlikely._ZSt19__throw_ios_failurePKc
	.size	_ZSt19__throw_ios_failurePKc, .-_ZSt19__throw_ios_failurePKc
	.section	.text.unlikely._ZSt19__throw_ios_failurePKci,"ax",@progbits
	.align	2
	.global	_ZSt19__throw_ios_failurePKci
	.type	_ZSt19__throw_ios_failurePKci, %function
_ZSt19__throw_ios_failurePKci:
.LFB1599:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1599
	stp	x29, x30, [sp, -64]!
	.cfi_def_cfa_offset 64
	.cfi_offset 29, -64
	.cfi_offset 30, -56
	mov	x29, sp
	str	x21, [sp, 32]
	.cfi_offset 21, -32
	mov	x21, x0
	mov	x0, 48
	stp	x19, x20, [sp, 16]
	.cfi_offset 19, -48
	.cfi_offset 20, -40
	mov	w20, w1
	bl	__cxa_allocate_exception
	mov	x19, x0
	mov	x0, x21
	bl	gettext
	mov	x21, x0
	cbz	w20, .L122
	bl	_ZNSt3_V216generic_categoryEv
	str	w20, [sp, 48]
	str	x0, [sp, 56]
	b	.L123
.L122:
	bl	_ZSt17iostream_categoryv
	mov	w1, 1
	str	x0, [sp, 56]
	str	w1, [sp, 48]
.L123:
	mov	x1, x21
	add	x2, sp, 48
	mov	x0, x19
.LEHB22:
	bl	_ZNSt8ios_base7failureB5cxx11C2EPKcRKSt10error_code
.LEHE22:
	adrp	x1, :got:_ZTVSt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTVSt13__ios_failure]
	mov	x0, x19
	add	x1, x1, 16
	str	x1, [x19]
	bl	_ZNKSt13runtime_error4whatEv
	mov	x1, x0
	add	x0, x19, 32
.LEHB23:
	bl	_ZSt23__construct_ios_failurePvPKc
.LEHE23:
	adrp	x2, :got:_ZNSt13__ios_failureD1Ev
	ldr	x2, [x2, :got_lo12:_ZNSt13__ios_failureD1Ev]
	mov	x0, x19
	adrp	x1, :got:_ZTISt13__ios_failure
	ldr	x1, [x1, :got_lo12:_ZTISt13__ios_failure]
.LEHB24:
	bl	__cxa_throw
.L128:
	mov	x20, x0
	mov	x0, x19
	bl	_ZNSt8ios_base7failureB5cxx11D2Ev
	b	.L126
.L127:
	mov	x20, x0
.L126:
	mov	x0, x19
	bl	__cxa_free_exception
	mov	x0, x20
	bl	_Unwind_Resume
.LEHE24:
	.cfi_endproc
.LFE1599:
	.section	.gcc_except_table._ZSt19__throw_ios_failurePKci,"a",@progbits
.LLSDA1599:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1599-.LLSDACSB1599
.LLSDACSB1599:
	.uleb128 .LEHB22-.LFB1599
	.uleb128 .LEHE22-.LEHB22
	.uleb128 .L127-.LFB1599
	.uleb128 0
	.uleb128 .LEHB23-.LFB1599
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L128-.LFB1599
	.uleb128 0
	.uleb128 .LEHB24-.LFB1599
	.uleb128 .LEHE24-.LEHB24
	.uleb128 0
	.uleb128 0
.LLSDACSE1599:
	.section	.text.unlikely._ZSt19__throw_ios_failurePKci
	.size	_ZSt19__throw_ios_failurePKci, .-_ZSt19__throw_ios_failurePKci
	.section	.text.startup._GLOBAL__sub_I_cxx11_ios_failure.cc,"ax",@progbits
	.align	2
	.p2align 4,,15
	.type	_GLOBAL__sub_I_cxx11_ios_failure.cc, %function
_GLOBAL__sub_I_cxx11_ios_failure.cc:
.LFB1951:
	.cfi_startproc
	adrp	x2, __dso_handle
	adrp	x1, _ZN12_GLOBAL__N_120io_category_instanceE
	adrp	x0, _ZN12_GLOBAL__N_113constant_initD1Ev
	add	x2, x2, :lo12:__dso_handle
	add	x1, x1, :lo12:_ZN12_GLOBAL__N_120io_category_instanceE
	add	x0, x0, :lo12:_ZN12_GLOBAL__N_113constant_initD1Ev
	b	__cxa_atexit
	.cfi_endproc
.LFE1951:
	.size	_GLOBAL__sub_I_cxx11_ios_failure.cc, .-_GLOBAL__sub_I_cxx11_ios_failure.cc
	.section	.init_array,"aw"
	.align	3
	.xword	_GLOBAL__sub_I_cxx11_ios_failure.cc
	.weak	_ZTSNSt8ios_base7failureB5cxx11E
	.section	.rodata._ZTSNSt8ios_base7failureB5cxx11E,"aG",@progbits,_ZTSNSt8ios_base7failureB5cxx11E,comdat
	.align	3
	.type	_ZTSNSt8ios_base7failureB5cxx11E, %object
	.size	_ZTSNSt8ios_base7failureB5cxx11E, 29
_ZTSNSt8ios_base7failureB5cxx11E:
	.string	"NSt8ios_base7failureB5cxx11E"
	.weak	_ZTINSt8ios_base7failureB5cxx11E
	.section	.data.rel.ro._ZTINSt8ios_base7failureB5cxx11E,"awG",@progbits,_ZTINSt8ios_base7failureB5cxx11E,comdat
	.align	3
	.type	_ZTINSt8ios_base7failureB5cxx11E, %object
	.size	_ZTINSt8ios_base7failureB5cxx11E, 24
_ZTINSt8ios_base7failureB5cxx11E:
	.xword	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.xword	_ZTSNSt8ios_base7failureB5cxx11E
	.xword	_ZTISt12system_error
	.section	.data.rel.ro._ZTIN12_GLOBAL__N_117io_error_categoryE,"aw"
	.align	3
	.type	_ZTIN12_GLOBAL__N_117io_error_categoryE, %object
	.size	_ZTIN12_GLOBAL__N_117io_error_categoryE, 24
_ZTIN12_GLOBAL__N_117io_error_categoryE:
	.xword	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.xword	_ZTSN12_GLOBAL__N_117io_error_categoryE
	.xword	_ZTINSt3_V214error_categoryE
	.section	.rodata._ZTSN12_GLOBAL__N_117io_error_categoryE,"a"
	.align	3
	.type	_ZTSN12_GLOBAL__N_117io_error_categoryE, %object
	.size	_ZTSN12_GLOBAL__N_117io_error_categoryE, 37
_ZTSN12_GLOBAL__N_117io_error_categoryE:
	.string	"*N12_GLOBAL__N_117io_error_categoryE"
	.weak	_ZTSSt13__ios_failure
	.section	.rodata._ZTSSt13__ios_failure,"aG",@progbits,_ZTSSt13__ios_failure,comdat
	.align	3
	.type	_ZTSSt13__ios_failure, %object
	.size	_ZTSSt13__ios_failure, 18
_ZTSSt13__ios_failure:
	.string	"St13__ios_failure"
	.weak	_ZTISt13__ios_failure
	.section	.data.rel.ro._ZTISt13__ios_failure,"awG",@progbits,_ZTISt13__ios_failure,comdat
	.align	3
	.type	_ZTISt13__ios_failure, %object
	.size	_ZTISt13__ios_failure, 24
_ZTISt13__ios_failure:
	.xword	_ZTVSt19__iosfail_type_info+16
	.xword	_ZTSSt13__ios_failure
	.xword	_ZTINSt8ios_base7failureB5cxx11E
	.weak	_ZTSSt19__iosfail_type_info
	.section	.rodata._ZTSSt19__iosfail_type_info,"aG",@progbits,_ZTSSt19__iosfail_type_info,comdat
	.align	3
	.type	_ZTSSt19__iosfail_type_info, %object
	.size	_ZTSSt19__iosfail_type_info, 24
_ZTSSt19__iosfail_type_info:
	.string	"St19__iosfail_type_info"
	.weak	_ZTISt19__iosfail_type_info
	.section	.data.rel.ro._ZTISt19__iosfail_type_info,"awG",@progbits,_ZTISt19__iosfail_type_info,comdat
	.align	3
	.type	_ZTISt19__iosfail_type_info, %object
	.size	_ZTISt19__iosfail_type_info, 40
_ZTISt19__iosfail_type_info:
	.xword	_ZTVN10__cxxabiv121__vmi_class_type_infoE+16
	.xword	_ZTSSt19__iosfail_type_info
	.word	0
	.word	1
	.xword	_ZTIN10__cxxabiv120__si_class_type_infoE
	.xword	0
	.section	.data.rel.ro._ZTVN12_GLOBAL__N_117io_error_categoryE,"aw"
	.align	3
	.type	_ZTVN12_GLOBAL__N_117io_error_categoryE, %object
	.size	_ZTVN12_GLOBAL__N_117io_error_categoryE, 80
_ZTVN12_GLOBAL__N_117io_error_categoryE:
	.xword	0
	.xword	_ZTIN12_GLOBAL__N_117io_error_categoryE
	.xword	_ZN12_GLOBAL__N_117io_error_categoryD1Ev
	.xword	_ZN12_GLOBAL__N_117io_error_categoryD0Ev
	.xword	_ZNK12_GLOBAL__N_117io_error_category4nameEv
	.xword	_ZNKSt3_V214error_category10_M_messageB5cxx11Ei
	.xword	_ZNK12_GLOBAL__N_117io_error_category7messageB5cxx11Ei
	.xword	_ZNKSt3_V214error_category23default_error_conditionEi
	.xword	_ZNKSt3_V214error_category10equivalentEiRKSt15error_condition
	.xword	_ZNKSt3_V214error_category10equivalentERKSt10error_codei
	.weak	_ZTVNSt8ios_base7failureB5cxx11E
	.section	.data.rel.ro._ZTVNSt8ios_base7failureB5cxx11E,"awG",@progbits,_ZTVNSt8ios_base7failureB5cxx11E,comdat
	.align	3
	.type	_ZTVNSt8ios_base7failureB5cxx11E, %object
	.size	_ZTVNSt8ios_base7failureB5cxx11E, 40
_ZTVNSt8ios_base7failureB5cxx11E:
	.xword	0
	.xword	_ZTINSt8ios_base7failureB5cxx11E
	.xword	_ZNSt8ios_base7failureB5cxx11D1Ev
	.xword	_ZNSt8ios_base7failureB5cxx11D0Ev
	.xword	_ZNKSt8ios_base7failureB5cxx114whatEv
	.weak	_ZTVSt13__ios_failure
	.section	.data.rel.ro._ZTVSt13__ios_failure,"awG",@progbits,_ZTVSt13__ios_failure,comdat
	.align	3
	.type	_ZTVSt13__ios_failure, %object
	.size	_ZTVSt13__ios_failure, 40
_ZTVSt13__ios_failure:
	.xword	0
	.xword	_ZTISt13__ios_failure
	.xword	_ZNSt13__ios_failureD1Ev
	.xword	_ZNSt13__ios_failureD0Ev
	.xword	_ZNKSt8ios_base7failureB5cxx114whatEv
	.weak	_ZTVSt19__iosfail_type_info
	.section	.data.rel.ro._ZTVSt19__iosfail_type_info,"awG",@progbits,_ZTVSt19__iosfail_type_info,comdat
	.align	3
	.type	_ZTVSt19__iosfail_type_info, %object
	.size	_ZTVSt19__iosfail_type_info, 88
_ZTVSt19__iosfail_type_info:
	.xword	0
	.xword	_ZTISt19__iosfail_type_info
	.xword	_ZNSt19__iosfail_type_infoD1Ev
	.xword	_ZNSt19__iosfail_type_infoD0Ev
	.xword	_ZNKSt9type_info14__is_pointer_pEv
	.xword	_ZNKSt9type_info15__is_function_pEv
	.xword	_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj
	.xword	_ZNKSt19__iosfail_type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv
	.xword	_ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE
	.xword	_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastElNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE
	.xword	_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcElPKvPKNS_17__class_type_infoES2_
	.section	.data.rel.local._ZN12_GLOBAL__N_120io_category_instanceE,"aw"
	.align	3
	.type	_ZN12_GLOBAL__N_120io_category_instanceE, %object
	.size	_ZN12_GLOBAL__N_120io_category_instanceE, 8
_ZN12_GLOBAL__N_120io_category_instanceE:
	.xword	_ZTVN12_GLOBAL__N_117io_error_categoryE+16
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align	3
	.type	DW.ref.__gxx_personality_v0, %object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.xword	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Buildroot 2024.02.2) 12.3.0"
	.section	.note.GNU-stack,"",@progbits
