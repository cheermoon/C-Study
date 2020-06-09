	.file	"arrangeString.c"
	.text
	.section	.rodata
.LC0:
	.string	"Input %d chars please:\n"
.LC1:
	.string	"Your input is full"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -132(%rbp)
	movl	$30, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L2
.L5:
	call	getchar@PLT
	movl	%eax, %edx
	movl	-132(%rbp), %eax
	cltq
	movl	%edx, -128(%rbp,%rax,4)
	movl	-132(%rbp), %eax
	cltq
	movl	-128(%rbp,%rax,4), %eax
	cmpl	$10, %eax
	je	.L12
	addl	$1, -132(%rbp)
.L2:
	cmpl	$30, -132(%rbp)
	jne	.L5
	jmp	.L4
.L12:
	nop
.L4:
	cmpl	$30, -132(%rbp)
	jne	.L6
	movl	$10, -12(%rbp)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
.L6:
	movl	$0, -132(%rbp)
	jmp	.L7
.L9:
	addl	$1, -132(%rbp)
.L7:
	cmpl	$30, -132(%rbp)
	je	.L8
	movl	-132(%rbp), %eax
	cltq
	movl	-128(%rbp,%rax,4), %eax
	movl	%eax, %edi
	call	putchar@PLT
	cmpl	$10, %eax
	jne	.L9
.L8:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
