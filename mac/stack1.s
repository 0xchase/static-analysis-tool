	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$112, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -92(%rbp)
	movl	%edi, -88(%rbp)
	movq	%rsi, -104(%rbp)
	cmpl	$1, -88(%rbp)
	jne	LBB0_2
## %bb.1:
	movl	$1, %edi
	leaq	L_.str(%rip), %rsi
	movb	$0, %al
	callq	_errx
LBB0_2:
	leaq	-80(%rbp), %rdi
	movl	$0, -84(%rbp)
	movq	-104(%rbp), %rax
	movq	8(%rax), %rsi
	movl	$64, %edx
	callq	___strcpy_chk
	movl	-84(%rbp), %eax
	cmpl	$1633837924, %eax       ## imm = 0x61626364
	jne	LBB0_4
## %bb.3:
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_5
LBB0_4:
	movl	-84(%rbp), %esi
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_5:
	movl	-92(%rbp), %eax
	movq	-8(%rbp), %rcx
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	subq	%rcx, %rdx
	jne	LBB0_6
	jmp	LBB0_7
LBB0_6:
	callq	___stack_chk_fail
LBB0_7:
	addq	$112, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"please specify an argument\n"

L_.str.1:                               ## @.str.1
	.asciz	"you have correctly got the variable to the right value\n"

L_.str.2:                               ## @.str.2
	.asciz	"Try again, you got 0x%08x\n"


.subsections_via_symbols
