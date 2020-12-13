	.file	"main.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "enter the value of n: \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "enter employee id: \0"
LC3:
	.ascii "enter employee name:\0"
LC4:
	.ascii "%s\0"
LC5:
	.ascii "enter employee salary: \0"
LC6:
	.ascii "%f\0"
LC7:
	.ascii "\12employee id: %d\0"
LC8:
	.ascii "\12employee name: %s\0"
LC9:
	.ascii "\12employee salary: %f\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$2032, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$0, 2028(%esp)
	jmp	L2
L3:
	movl	$LC2, (%esp)
	call	_printf
	leal	28(%esp), %ecx
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	addl	%ecx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC3, (%esp)
	call	_printf
	leal	28(%esp), %ecx
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	addl	%ecx, %eax
	addl	$4, %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_scanf
	movl	$LC5, (%esp)
	call	_printf
	leal	28(%esp), %ecx
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	addl	$32, %eax
	addl	%ecx, %eax
	addl	$4, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_scanf
	addl	$1, 2028(%esp)
L2:
	movl	24(%esp), %eax
	cmpl	%eax, 2028(%esp)
	jle	L3
	movl	$0, 2028(%esp)
	jmp	L4
L5:
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	leal	2032(%esp), %ecx
	addl	%ecx, %eax
	subl	$2004, %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	leal	28(%esp), %ecx
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	addl	%ecx, %eax
	addl	$4, %eax
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	2028(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$3, %eax
	leal	2032(%esp), %ecx
	addl	%ecx, %eax
	subl	$1968, %eax
	flds	(%eax)
	fstpl	4(%esp)
	movl	$LC9, (%esp)
	call	_printf
	addl	$1, 2028(%esp)
L4:
	movl	24(%esp), %eax
	cmpl	%eax, 2028(%esp)
	jle	L5
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (i686-posix-dwarf-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
