
ctarget:	file format ELF64-x86-64

Disassembly of section .init:
_init:
  400bf0:	48 83 ec 08 	subq	$8, %rsp
  400bf4:	48 8b 05 fd 33 20 00 	movq	2110461(%rip), %rax
  400bfb:	48 85 c0 	testq	%rax, %rax
  400bfe:	74 02 	je	2 <_init+0x12>
  400c00:	ff d0 	callq	*%rax
  400c02:	48 83 c4 08 	addq	$8, %rsp
  400c06:	c3 	retq
Disassembly of section .plt:
.plt:
  400c10:	ff 35 f2 33 20 00 	pushq	2110450(%rip)
  400c16:	ff 25 f4 33 20 00 	jmpq	*2110452(%rip)
  400c1c:	0f 1f 40 00 	nopl	(%rax)
  400c20:	ff 25 f2 33 20 00 	jmpq	*2110450(%rip)
  400c26:	68 00 00 00 00 	pushq	$0
  400c2b:	e9 e0 ff ff ff 	jmp	-32 <.plt>
  400c30:	ff 25 ea 33 20 00 	jmpq	*2110442(%rip)
  400c36:	68 01 00 00 00 	pushq	$1
  400c3b:	e9 d0 ff ff ff 	jmp	-48 <.plt>
  400c40:	ff 25 e2 33 20 00 	jmpq	*2110434(%rip)
  400c46:	68 02 00 00 00 	pushq	$2
  400c4b:	e9 c0 ff ff ff 	jmp	-64 <.plt>
  400c50:	ff 25 da 33 20 00 	jmpq	*2110426(%rip)
  400c56:	68 03 00 00 00 	pushq	$3
  400c5b:	e9 b0 ff ff ff 	jmp	-80 <.plt>
  400c60:	ff 25 d2 33 20 00 	jmpq	*2110418(%rip)
  400c66:	68 04 00 00 00 	pushq	$4
  400c6b:	e9 a0 ff ff ff 	jmp	-96 <.plt>
  400c70:	ff 25 ca 33 20 00 	jmpq	*2110410(%rip)
  400c76:	68 05 00 00 00 	pushq	$5
  400c7b:	e9 90 ff ff ff 	jmp	-112 <.plt>
  400c80:	ff 25 c2 33 20 00 	jmpq	*2110402(%rip)
  400c86:	68 06 00 00 00 	pushq	$6
  400c8b:	e9 80 ff ff ff 	jmp	-128 <.plt>
  400c90:	ff 25 ba 33 20 00 	jmpq	*2110394(%rip)
  400c96:	68 07 00 00 00 	pushq	$7
  400c9b:	e9 70 ff ff ff 	jmp	-144 <.plt>
  400ca0:	ff 25 b2 33 20 00 	jmpq	*2110386(%rip)
  400ca6:	68 08 00 00 00 	pushq	$8
  400cab:	e9 60 ff ff ff 	jmp	-160 <.plt>
  400cb0:	ff 25 aa 33 20 00 	jmpq	*2110378(%rip)
  400cb6:	68 09 00 00 00 	pushq	$9
  400cbb:	e9 50 ff ff ff 	jmp	-176 <.plt>
  400cc0:	ff 25 a2 33 20 00 	jmpq	*2110370(%rip)
  400cc6:	68 0a 00 00 00 	pushq	$10
  400ccb:	e9 40 ff ff ff 	jmp	-192 <.plt>
  400cd0:	ff 25 9a 33 20 00 	jmpq	*2110362(%rip)
  400cd6:	68 0b 00 00 00 	pushq	$11
  400cdb:	e9 30 ff ff ff 	jmp	-208 <.plt>
  400ce0:	ff 25 92 33 20 00 	jmpq	*2110354(%rip)
  400ce6:	68 0c 00 00 00 	pushq	$12
  400ceb:	e9 20 ff ff ff 	jmp	-224 <.plt>
  400cf0:	ff 25 8a 33 20 00 	jmpq	*2110346(%rip)
  400cf6:	68 0d 00 00 00 	pushq	$13
  400cfb:	e9 10 ff ff ff 	jmp	-240 <.plt>
  400d00:	ff 25 82 33 20 00 	jmpq	*2110338(%rip)
  400d06:	68 0e 00 00 00 	pushq	$14
  400d0b:	e9 00 ff ff ff 	jmp	-256 <.plt>
  400d10:	ff 25 7a 33 20 00 	jmpq	*2110330(%rip)
  400d16:	68 0f 00 00 00 	pushq	$15
  400d1b:	e9 f0 fe ff ff 	jmp	-272 <.plt>
  400d20:	ff 25 72 33 20 00 	jmpq	*2110322(%rip)
  400d26:	68 10 00 00 00 	pushq	$16
  400d2b:	e9 e0 fe ff ff 	jmp	-288 <.plt>
  400d30:	ff 25 6a 33 20 00 	jmpq	*2110314(%rip)
  400d36:	68 11 00 00 00 	pushq	$17
  400d3b:	e9 d0 fe ff ff 	jmp	-304 <.plt>
  400d40:	ff 25 62 33 20 00 	jmpq	*2110306(%rip)
  400d46:	68 12 00 00 00 	pushq	$18
  400d4b:	e9 c0 fe ff ff 	jmp	-320 <.plt>
  400d50:	ff 25 5a 33 20 00 	jmpq	*2110298(%rip)
  400d56:	68 13 00 00 00 	pushq	$19
  400d5b:	e9 b0 fe ff ff 	jmp	-336 <.plt>
  400d60:	ff 25 52 33 20 00 	jmpq	*2110290(%rip)
  400d66:	68 14 00 00 00 	pushq	$20
  400d6b:	e9 a0 fe ff ff 	jmp	-352 <.plt>
  400d70:	ff 25 4a 33 20 00 	jmpq	*2110282(%rip)
  400d76:	68 15 00 00 00 	pushq	$21
  400d7b:	e9 90 fe ff ff 	jmp	-368 <.plt>
  400d80:	ff 25 42 33 20 00 	jmpq	*2110274(%rip)
  400d86:	68 16 00 00 00 	pushq	$22
  400d8b:	e9 80 fe ff ff 	jmp	-384 <.plt>
  400d90:	ff 25 3a 33 20 00 	jmpq	*2110266(%rip)
  400d96:	68 17 00 00 00 	pushq	$23
  400d9b:	e9 70 fe ff ff 	jmp	-400 <.plt>
  400da0:	ff 25 32 33 20 00 	jmpq	*2110258(%rip)
  400da6:	68 18 00 00 00 	pushq	$24
  400dab:	e9 60 fe ff ff 	jmp	-416 <.plt>
  400db0:	ff 25 2a 33 20 00 	jmpq	*2110250(%rip)
  400db6:	68 19 00 00 00 	pushq	$25
  400dbb:	e9 50 fe ff ff 	jmp	-432 <.plt>
  400dc0:	ff 25 22 33 20 00 	jmpq	*2110242(%rip)
  400dc6:	68 1a 00 00 00 	pushq	$26
  400dcb:	e9 40 fe ff ff 	jmp	-448 <.plt>
  400dd0:	ff 25 1a 33 20 00 	jmpq	*2110234(%rip)
  400dd6:	68 1b 00 00 00 	pushq	$27
  400ddb:	e9 30 fe ff ff 	jmp	-464 <.plt>
  400de0:	ff 25 12 33 20 00 	jmpq	*2110226(%rip)
  400de6:	68 1c 00 00 00 	pushq	$28
  400deb:	e9 20 fe ff ff 	jmp	-480 <.plt>
  400df0:	ff 25 0a 33 20 00 	jmpq	*2110218(%rip)
  400df6:	68 1d 00 00 00 	pushq	$29
  400dfb:	e9 10 fe ff ff 	jmp	-496 <.plt>
  400e00:	ff 25 02 33 20 00 	jmpq	*2110210(%rip)
  400e06:	68 1e 00 00 00 	pushq	$30
  400e0b:	e9 00 fe ff ff 	jmp	-512 <.plt>
  400e10:	ff 25 fa 32 20 00 	jmpq	*2110202(%rip)
  400e16:	68 1f 00 00 00 	pushq	$31
  400e1b:	e9 f0 fd ff ff 	jmp	-528 <.plt>
Disassembly of section .text:
_start:
  400e20:	31 ed 	xorl	%ebp, %ebp
  400e22:	49 89 d1 	movq	%rdx, %r9
  400e25:	5e 	popq	%rsi
  400e26:	48 89 e2 	movq	%rsp, %rdx
  400e29:	48 83 e4 f0 	andq	$-16, %rsp
  400e2d:	50 	pushq	%rax
  400e2e:	54 	pushq	%rsp
  400e2f:	49 c7 c0 70 2d 40 00 	movq	$4205936, %r8
  400e36:	48 c7 c1 00 2d 40 00 	movq	$4205824, %rcx
  400e3d:	48 c7 c7 a1 10 40 00 	movq	$4198561, %rdi
  400e44:	ff 15 a6 31 20 00 	callq	*2109862(%rip)
  400e4a:	f4 	hlt
  400e4b:	0f 1f 44 00 00 	nopl	(%rax,%rax)

_dl_relocate_static_pie:
  400e50:	f3 c3 	rep		retq
  400e52:	66 2e 0f 1f 84 00 00 00 00 00 	nopw	%cs:(%rax,%rax)
  400e5c:	0f 1f 40 00 	nopl	(%rax)

deregister_tm_clones:
  400e60:	55 	pushq	%rbp
  400e61:	b8 58 41 60 00 	movl	$6308184, %eax
  400e66:	48 3d 58 41 60 00 	cmpq	$6308184, %rax
  400e6c:	48 89 e5 	movq	%rsp, %rbp
  400e6f:	74 17 	je	23 <deregister_tm_clones+0x28>
  400e71:	b8 00 00 00 00 	movl	$0, %eax
  400e76:	48 85 c0 	testq	%rax, %rax
  400e79:	74 0d 	je	13 <deregister_tm_clones+0x28>
  400e7b:	5d 	popq	%rbp
  400e7c:	bf 58 41 60 00 	movl	$6308184, %edi
  400e81:	ff e0 	jmpq	*%rax
  400e83:	0f 1f 44 00 00 	nopl	(%rax,%rax)
  400e88:	5d 	popq	%rbp
  400e89:	c3 	retq
  400e8a:	66 0f 1f 44 00 00 	nopw	(%rax,%rax)

register_tm_clones:
  400e90:	be 58 41 60 00 	movl	$6308184, %esi
  400e95:	55 	pushq	%rbp
  400e96:	48 81 ee 58 41 60 00 	subq	$6308184, %rsi
  400e9d:	48 89 e5 	movq	%rsp, %rbp
  400ea0:	48 c1 fe 03 	sarq	$3, %rsi
  400ea4:	48 89 f0 	movq	%rsi, %rax
  400ea7:	48 c1 e8 3f 	shrq	$63, %rax
  400eab:	48 01 c6 	addq	%rax, %rsi
  400eae:	48 d1 fe 	sarq	%rsi
  400eb1:	74 15 	je	21 <register_tm_clones+0x38>
  400eb3:	b8 00 00 00 00 	movl	$0, %eax
  400eb8:	48 85 c0 	testq	%rax, %rax
  400ebb:	74 0b 	je	11 <register_tm_clones+0x38>
  400ebd:	5d 	popq	%rbp
  400ebe:	bf 58 41 60 00 	movl	$6308184, %edi
  400ec3:	ff e0 	jmpq	*%rax
  400ec5:	0f 1f 00 	nopl	(%rax)
  400ec8:	5d 	popq	%rbp
  400ec9:	c3 	retq
  400eca:	66 0f 1f 44 00 00 	nopw	(%rax,%rax)

__do_global_dtors_aux:
  400ed0:	80 3d b1 32 20 00 00 	cmpb	$0, 2110129(%rip)
  400ed7:	75 17 	jne	23 <__do_global_dtors_aux+0x20>
  400ed9:	55 	pushq	%rbp
  400eda:	48 89 e5 	movq	%rsp, %rbp
  400edd:	e8 7e ff ff ff 	callq	-130 <deregister_tm_clones>
  400ee2:	c6 05 9f 32 20 00 01 	movb	$1, 2110111(%rip)
  400ee9:	5d 	popq	%rbp
  400eea:	c3 	retq
  400eeb:	0f 1f 44 00 00 	nopl	(%rax,%rax)
  400ef0:	f3 c3 	rep		retq
  400ef2:	0f 1f 40 00 	nopl	(%rax)
  400ef6:	66 2e 0f 1f 84 00 00 00 00 00 	nopw	%cs:(%rax,%rax)

frame_dummy:
  400f00:	55 	pushq	%rbp
  400f01:	48 89 e5 	movq	%rsp, %rbp
  400f04:	5d 	popq	%rbp
  400f05:	eb 89 	jmp	-119 <register_tm_clones>

usage:
  400f07:	48 83 ec 08 	subq	$8, %rsp
  400f0b:	48 89 fa 	movq	%rdi, %rdx
  400f0e:	83 3d d3 35 20 00 00 	cmpl	$0, 2110931(%rip)
  400f15:	74 50 	je	80 <usage+0x60>
  400f17:	48 8d 35 6a 1e 00 00 	leaq	7786(%rip), %rsi
  400f1e:	bf 01 00 00 00 	movl	$1, %edi
  400f23:	b8 00 00 00 00 	movl	$0, %eax
  400f28:	e8 63 fe ff ff 	callq	-413 <.plt+0x180>
  400f2d:	48 8d 3d 8c 1e 00 00 	leaq	7820(%rip), %rdi
  400f34:	e8 27 fd ff ff 	callq	-729 <.plt+0x50>
  400f39:	48 8d 3d 80 1f 00 00 	leaq	8064(%rip), %rdi
  400f40:	e8 1b fd ff ff 	callq	-741 <.plt+0x50>
  400f45:	48 8d 3d 9c 1e 00 00 	leaq	7836(%rip), %rdi
  400f4c:	e8 0f fd ff ff 	callq	-753 <.plt+0x50>
  400f51:	48 8d 3d 82 1f 00 00 	leaq	8066(%rip), %rdi
  400f58:	e8 03 fd ff ff 	callq	-765 <.plt+0x50>
  400f5d:	bf 00 00 00 00 	movl	$0, %edi
  400f62:	e8 69 fe ff ff 	callq	-407 <.plt+0x1c0>
  400f67:	48 8d 35 88 1f 00 00 	leaq	8072(%rip), %rsi
  400f6e:	bf 01 00 00 00 	movl	$1, %edi
  400f73:	b8 00 00 00 00 	movl	$0, %eax
  400f78:	e8 13 fe ff ff 	callq	-493 <.plt+0x180>
  400f7d:	48 8d 3d 8c 1e 00 00 	leaq	7820(%rip), %rdi
  400f84:	e8 d7 fc ff ff 	callq	-809 <.plt+0x50>
  400f89:	48 8d 3d a8 1e 00 00 	leaq	7848(%rip), %rdi
  400f90:	e8 cb fc ff ff 	callq	-821 <.plt+0x50>
  400f95:	48 8d 3d 78 1f 00 00 	leaq	8056(%rip), %rdi
  400f9c:	e8 bf fc ff ff 	callq	-833 <.plt+0x50>
  400fa1:	eb ba 	jmp	-70 <usage+0x56>

initialize_target:
  400fa3:	55 	pushq	%rbp
  400fa4:	53 	pushq	%rbx
  400fa5:	48 81 ec 18 20 00 00 	subq	$8216, %rsp
  400fac:	89 f5 	movl	%esi, %ebp
  400fae:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  400fb7:	48 89 84 24 08 20 00 00 	movq	%rax, 8200(%rsp)
  400fbf:	31 c0 	xorl	%eax, %eax
  400fc1:	89 3d 11 35 20 00 	movl	%edi, 2110737(%rip)
  400fc7:	8b 3d 5b 31 20 00 	movl	2109787(%rip), %edi
  400fcd:	e8 0f 1d 00 00 	callq	7439 <gencookie>
  400fd2:	89 05 0c 35 20 00 	movl	%eax, 2110732(%rip)
  400fd8:	89 c7 	movl	%eax, %edi
  400fda:	e8 02 1d 00 00 	callq	7426 <gencookie>
  400fdf:	89 05 fb 34 20 00 	movl	%eax, 2110715(%rip)
  400fe5:	8b 05 3d 31 20 00 	movl	2109757(%rip), %eax
  400feb:	8d 78 01 	leal	1(%rax), %edi
  400fee:	e8 3d fc ff ff 	callq	-963 <.plt+0x20>
  400ff3:	e8 68 fd ff ff 	callq	-664 <.plt+0x150>
  400ff8:	89 c7 	movl	%eax, %edi
  400ffa:	e8 8d 02 00 00 	callq	653 <scramble>
  400fff:	89 c3 	movl	%eax, %ebx
  401001:	85 ed 	testl	%ebp, %ebp
  401003:	75 50 	jne	80 <initialize_target+0xb2>
  401005:	b8 00 00 00 00 	movl	$0, %eax
  40100a:	01 d8 	addl	%ebx, %eax
  40100c:	0f b7 c0 	movzwl	%ax, %eax
  40100f:	8d 04 c5 00 01 00 00 	leal	256(,%rax,8), %eax
  401016:	89 c0 	movl	%eax, %eax
  401018:	48 89 05 29 31 20 00 	movq	%rax, 2109737(%rip)
  40101f:	c6 05 e2 40 20 00 63 	movb	$99, 2113762(%rip)
  401026:	83 3d 23 31 20 00 00 	cmpl	$0, 2109731(%rip)
  40102d:	74 09 	je	9 <initialize_target+0x95>
  40102f:	83 3d b2 34 20 00 00 	cmpl	$0, 2110642(%rip)
  401036:	74 35 	je	53 <initialize_target+0xca>
  401038:	48 8b 84 24 08 20 00 00 	movq	8200(%rsp), %rax
  401040:	64 48 33 04 25 28 00 00 00 	xorq	%fs:40, %rax
  401049:	75 51 	jne	81 <initialize_target+0xf9>
  40104b:	48 81 c4 18 20 00 00 	addq	$8216, %rsp
  401052:	5b 	popq	%rbx
  401053:	5d 	popq	%rbp
  401054:	c3 	retq
  401055:	bf 00 00 00 00 	movl	$0, %edi
  40105a:	e8 e1 fc ff ff 	callq	-799 <.plt+0x130>
  40105f:	89 c7 	movl	%eax, %edi
  401061:	e8 ca fb ff ff 	callq	-1078 <.plt+0x20>
  401066:	e8 f5 fc ff ff 	callq	-779 <.plt+0x150>
  40106b:	eb 9d 	jmp	-99 <initialize_target+0x67>
  40106d:	48 89 e7 	movq	%rsp, %rdi
  401070:	e8 9c 19 00 00 	callq	6556 <init_driver>
  401075:	85 c0 	testl	%eax, %eax
  401077:	79 bf 	jns	-65 <initialize_target+0x95>
  401079:	48 89 e2 	movq	%rsp, %rdx
  40107c:	48 8d 35 e5 1d 00 00 	leaq	7653(%rip), %rsi
  401083:	bf 01 00 00 00 	movl	$1, %edi
  401088:	b8 00 00 00 00 	movl	$0, %eax
  40108d:	e8 fe fc ff ff 	callq	-770 <.plt+0x180>
  401092:	bf 08 00 00 00 	movl	$8, %edi
  401097:	e8 34 fd ff ff 	callq	-716 <.plt+0x1c0>
  40109c:	e8 df fb ff ff 	callq	-1057 <.plt+0x70>

main:
  4010a1:	41 56 	pushq	%r14
  4010a3:	41 55 	pushq	%r13
  4010a5:	41 54 	pushq	%r12
  4010a7:	55 	pushq	%rbp
  4010a8:	53 	pushq	%rbx
  4010a9:	41 89 fc 	movl	%edi, %r12d
  4010ac:	48 89 f3 	movq	%rsi, %rbx
  4010af:	48 c7 c6 36 1d 40 00 	movq	$4201782, %rsi
  4010b6:	bf 0b 00 00 00 	movl	$11, %edi
  4010bb:	e8 20 fc ff ff 	callq	-992 <.plt+0xd0>
  4010c0:	48 c7 c6 e2 1c 40 00 	movq	$4201698, %rsi
  4010c7:	bf 07 00 00 00 	movl	$7, %edi
  4010cc:	e8 0f fc ff ff 	callq	-1009 <.plt+0xd0>
  4010d1:	48 c7 c6 8a 1d 40 00 	movq	$4201866, %rsi
  4010d8:	bf 04 00 00 00 	movl	$4, %edi
  4010dd:	e8 fe fb ff ff 	callq	-1026 <.plt+0xd0>
  4010e2:	83 3d ff 33 20 00 00 	cmpl	$0, 2110463(%rip)
  4010e9:	75 26 	jne	38 <main+0x70>
  4010eb:	48 8d 2d 3b 1e 00 00 	leaq	7739(%rip), %rbp
  4010f2:	48 8b 05 67 30 20 00 	movq	2109543(%rip), %rax
  4010f9:	48 89 05 d0 33 20 00 	movq	%rax, 2110416(%rip)
  401100:	41 bd 00 00 00 00 	movl	$0, %r13d
  401106:	41 be 00 00 00 00 	movl	$0, %r14d
  40110c:	e9 8d 00 00 00 	jmp	141 <main+0xfd>
  401111:	48 c7 c6 de 1d 40 00 	movq	$4201950, %rsi
  401118:	bf 0e 00 00 00 	movl	$14, %edi
  40111d:	e8 be fb ff ff 	callq	-1090 <.plt+0xd0>
  401122:	bf 05 00 00 00 	movl	$5, %edi
  401127:	e8 84 fb ff ff 	callq	-1148 <.plt+0xa0>
  40112c:	48 8d 2d ff 1d 00 00 	leaq	7679(%rip), %rbp
  401133:	eb bd 	jmp	-67 <main+0x51>
  401135:	48 8b 3b 	movq	(%rbx), %rdi
  401138:	e8 ca fd ff ff 	callq	-566 <usage>
  40113d:	48 8d 35 41 20 00 00 	leaq	8257(%rip), %rsi
  401144:	48 8b 3d 1d 30 20 00 	movq	2109469(%rip), %rdi
  40114b:	e8 50 fc ff ff 	callq	-944 <.plt+0x190>
  401150:	48 89 05 79 33 20 00 	movq	%rax, 2110329(%rip)
  401157:	48 85 c0 	testq	%rax, %rax
  40115a:	75 42 	jne	66 <main+0xfd>
  40115c:	48 8b 0d 05 30 20 00 	movq	2109445(%rip), %rcx
  401163:	48 8d 15 d0 1d 00 00 	leaq	7632(%rip), %rdx
  40116a:	be 01 00 00 00 	movl	$1, %esi
  40116f:	48 8b 3d 0a 30 20 00 	movq	2109450(%rip), %rdi
  401176:	e8 75 fc ff ff 	callq	-907 <.plt+0x1e0>
  40117b:	b8 01 00 00 00 	movl	$1, %eax
  401180:	e9 d9 00 00 00 	jmp	217 <main+0x1bd>
  401185:	ba 10 00 00 00 	movl	$16, %edx
  40118a:	be 00 00 00 00 	movl	$0, %esi
  40118f:	48 8b 3d d2 2f 20 00 	movq	2109394(%rip), %rdi
  401196:	e8 25 fc ff ff 	callq	-987 <.plt+0x1b0>
  40119b:	41 89 c6 	movl	%eax, %r14d
  40119e:	48 89 ea 	movq	%rbp, %rdx
  4011a1:	48 89 de 	movq	%rbx, %rsi
  4011a4:	44 89 e7 	movl	%r12d, %edi
  4011a7:	e8 04 fc ff ff 	callq	-1020 <.plt+0x1a0>
  4011ac:	3c ff 	cmpb	$-1, %al
  4011ae:	74 62 	je	98 <main+0x171>
  4011b0:	0f be d0 	movsbl	%al, %edx
  4011b3:	83 e8 61 	subl	$97, %eax
  4011b6:	3c 10 	cmpb	$16, %al
  4011b8:	77 3a 	ja	58 <main+0x153>
  4011ba:	0f b6 c0 	movzbl	%al, %eax
  4011bd:	48 8d 0d b4 1d 00 00 	leaq	7604(%rip), %rcx
  4011c4:	48 63 04 81 	movslq	(%rcx,%rax,4), %rax
  4011c8:	48 01 c8 	addq	%rcx, %rax
  4011cb:	ff e0 	jmpq	*%rax
  4011cd:	ba 0a 00 00 00 	movl	$10, %edx
  4011d2:	be 00 00 00 00 	movl	$0, %esi
  4011d7:	48 8b 3d 8a 2f 20 00 	movq	2109322(%rip), %rdi
  4011de:	e8 3d fb ff ff 	callq	-1219 <.plt+0x110>
  4011e3:	41 89 c5 	movl	%eax, %r13d
  4011e6:	eb b6 	jmp	-74 <main+0xfd>
  4011e8:	c7 05 5e 2f 20 00 00 00 00 00 	movl	$0, 2109278(%rip)
  4011f2:	eb aa 	jmp	-86 <main+0xfd>
  4011f4:	48 8d 35 5c 1d 00 00 	leaq	7516(%rip), %rsi
  4011fb:	bf 01 00 00 00 	movl	$1, %edi
  401200:	b8 00 00 00 00 	movl	$0, %eax
  401205:	e8 86 fb ff ff 	callq	-1146 <.plt+0x180>
  40120a:	48 8b 3b 	movq	(%rbx), %rdi
  40120d:	e8 f5 fc ff ff 	callq	-779 <usage>
  401212:	be 00 00 00 00 	movl	$0, %esi
  401217:	44 89 ef 	movl	%r13d, %edi
  40121a:	e8 84 fd ff ff 	callq	-636 <initialize_target>
  40121f:	83 3d c2 32 20 00 00 	cmpl	$0, 2110146(%rip)
  401226:	74 09 	je	9 <main+0x190>
  401228:	44 39 35 b1 32 20 00 	cmpl	%r14d, 2110129(%rip)
  40122f:	75 36 	jne	54 <main+0x1c6>
  401231:	8b 15 ad 32 20 00 	movl	2110125(%rip), %edx
  401237:	48 8d 35 2c 1d 00 00 	leaq	7468(%rip), %rsi
  40123e:	bf 01 00 00 00 	movl	$1, %edi
  401243:	b8 00 00 00 00 	movl	$0, %eax
  401248:	e8 43 fb ff ff 	callq	-1213 <.plt+0x180>
  40124d:	48 8b 3d f4 2e 20 00 	movq	2109172(%rip), %rdi
  401254:	e8 91 0c 00 00 	callq	3217 <stable_launch>
  401259:	b8 00 00 00 00 	movl	$0, %eax
  40125e:	5b 	popq	%rbx
  40125f:	5d 	popq	%rbp
  401260:	41 5c 	popq	%r12
  401262:	41 5d 	popq	%r13
  401264:	41 5e 	popq	%r14
  401266:	c3 	retq
  401267:	44 89 f2 	movl	%r14d, %edx
  40126a:	48 8d 35 1f 1c 00 00 	leaq	7199(%rip), %rsi
  401271:	bf 01 00 00 00 	movl	$1, %edi
  401276:	b8 00 00 00 00 	movl	$0, %eax
  40127b:	e8 10 fb ff ff 	callq	-1264 <.plt+0x180>
  401280:	b8 00 00 00 00 	movl	$0, %eax
  401285:	e8 b8 06 00 00 	callq	1720 <check_fail>
  40128a:	eb a5 	jmp	-91 <main+0x190>

scramble:
  40128c:	48 83 ec 38 	subq	$56, %rsp
  401290:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  401299:	48 89 44 24 28 	movq	%rax, 40(%rsp)
  40129e:	31 c0 	xorl	%eax, %eax
  4012a0:	eb 10 	jmp	16 <scramble+0x26>
  4012a2:	69 d0 5f 38 00 00 	imull	$14431, %eax, %edx
  4012a8:	01 fa 	addl	%edi, %edx
  4012aa:	89 c1 	movl	%eax, %ecx
  4012ac:	89 14 8c 	movl	%edx, (%rsp,%rcx,4)
  4012af:	83 c0 01 	addl	$1, %eax
  4012b2:	83 f8 09 	cmpl	$9, %eax
  4012b5:	76 eb 	jbe	-21 <scramble+0x16>
  4012b7:	8b 44 24 10 	movl	16(%rsp), %eax
  4012bb:	69 c0 c9 e5 00 00 	imull	$58825, %eax, %eax
  4012c1:	89 44 24 10 	movl	%eax, 16(%rsp)
  4012c5:	8b 44 24 0c 	movl	12(%rsp), %eax
  4012c9:	69 c0 58 bc 00 00 	imull	$48216, %eax, %eax
  4012cf:	89 44 24 0c 	movl	%eax, 12(%rsp)
  4012d3:	8b 44 24 1c 	movl	28(%rsp), %eax
  4012d7:	69 c0 2d a3 00 00 	imull	$41773, %eax, %eax
  4012dd:	89 44 24 1c 	movl	%eax, 28(%rsp)
  4012e1:	8b 44 24 24 	movl	36(%rsp), %eax
  4012e5:	69 c0 24 b9 00 00 	imull	$47396, %eax, %eax
  4012eb:	89 44 24 24 	movl	%eax, 36(%rsp)
  4012ef:	8b 44 24 04 	movl	4(%rsp), %eax
  4012f3:	69 c0 8b a2 00 00 	imull	$41611, %eax, %eax
  4012f9:	89 44 24 04 	movl	%eax, 4(%rsp)
  4012fd:	8b 44 24 20 	movl	32(%rsp), %eax
  401301:	69 c0 6b 05 00 00 	imull	$1387, %eax, %eax
  401307:	89 44 24 20 	movl	%eax, 32(%rsp)
  40130b:	8b 44 24 14 	movl	20(%rsp), %eax
  40130f:	69 c0 91 b5 00 00 	imull	$46481, %eax, %eax
  401315:	89 44 24 14 	movl	%eax, 20(%rsp)
  401319:	8b 44 24 08 	movl	8(%rsp), %eax
  40131d:	69 c0 4b 44 00 00 	imull	$17483, %eax, %eax
  401323:	89 44 24 08 	movl	%eax, 8(%rsp)
  401327:	8b 04 24 	movl	(%rsp), %eax
  40132a:	69 c0 20 9d 00 00 	imull	$40224, %eax, %eax
  401330:	89 04 24 	movl	%eax, (%rsp)
  401333:	8b 44 24 14 	movl	20(%rsp), %eax
  401337:	69 c0 dd 82 00 00 	imull	$33501, %eax, %eax
  40133d:	89 44 24 14 	movl	%eax, 20(%rsp)
  401341:	8b 44 24 04 	movl	4(%rsp), %eax
  401345:	69 c0 ed ed 00 00 	imull	$60909, %eax, %eax
  40134b:	89 44 24 04 	movl	%eax, 4(%rsp)
  40134f:	8b 44 24 20 	movl	32(%rsp), %eax
  401353:	69 c0 a3 75 00 00 	imull	$30115, %eax, %eax
  401359:	89 44 24 20 	movl	%eax, 32(%rsp)
  40135d:	8b 44 24 24 	movl	36(%rsp), %eax
  401361:	69 c0 31 cd 00 00 	imull	$52529, %eax, %eax
  401367:	89 44 24 24 	movl	%eax, 36(%rsp)
  40136b:	8b 44 24 08 	movl	8(%rsp), %eax
  40136f:	69 c0 5c 76 00 00 	imull	$30300, %eax, %eax
  401375:	89 44 24 08 	movl	%eax, 8(%rsp)
  401379:	8b 44 24 20 	movl	32(%rsp), %eax
  40137d:	69 c0 b9 f1 00 00 	imull	$61881, %eax, %eax
  401383:	89 44 24 20 	movl	%eax, 32(%rsp)
  401387:	8b 44 24 10 	movl	16(%rsp), %eax
  40138b:	69 c0 cd 04 00 00 	imull	$1229, %eax, %eax
  401391:	89 44 24 10 	movl	%eax, 16(%rsp)
  401395:	8b 44 24 14 	movl	20(%rsp), %eax
  401399:	69 c0 7a 04 00 00 	imull	$1146, %eax, %eax
  40139f:	89 44 24 14 	movl	%eax, 20(%rsp)
  4013a3:	8b 44 24 10 	movl	16(%rsp), %eax
  4013a7:	69 c0 37 bd 00 00 	imull	$48439, %eax, %eax
  4013ad:	89 44 24 10 	movl	%eax, 16(%rsp)
  4013b1:	8b 44 24 18 	movl	24(%rsp), %eax
  4013b5:	69 c0 0e c8 00 00 	imull	$51214, %eax, %eax
  4013bb:	89 44 24 18 	movl	%eax, 24(%rsp)
  4013bf:	8b 44 24 04 	movl	4(%rsp), %eax
  4013c3:	69 c0 3d 60 00 00 	imull	$24637, %eax, %eax
  4013c9:	89 44 24 04 	movl	%eax, 4(%rsp)
  4013cd:	8b 44 24 08 	movl	8(%rsp), %eax
  4013d1:	69 c0 bb 1c 00 00 	imull	$7355, %eax, %eax
  4013d7:	89 44 24 08 	movl	%eax, 8(%rsp)
  4013db:	8b 44 24 10 	movl	16(%rsp), %eax
  4013df:	69 c0 b9 e3 00 00 	imull	$58297, %eax, %eax
  4013e5:	89 44 24 10 	movl	%eax, 16(%rsp)
  4013e9:	8b 44 24 08 	movl	8(%rsp), %eax
  4013ed:	69 c0 1f fb 00 00 	imull	$64287, %eax, %eax
  4013f3:	89 44 24 08 	movl	%eax, 8(%rsp)
  4013f7:	8b 44 24 18 	movl	24(%rsp), %eax
  4013fb:	69 c0 ac 9d 00 00 	imull	$40364, %eax, %eax
  401401:	89 44 24 18 	movl	%eax, 24(%rsp)
  401405:	8b 44 24 14 	movl	20(%rsp), %eax
  401409:	69 c0 50 9c 00 00 	imull	$40016, %eax, %eax
  40140f:	89 44 24 14 	movl	%eax, 20(%rsp)
  401413:	8b 44 24 10 	movl	16(%rsp), %eax
  401417:	69 c0 fb fe 00 00 	imull	$65275, %eax, %eax
  40141d:	89 44 24 10 	movl	%eax, 16(%rsp)
  401421:	8b 44 24 10 	movl	16(%rsp), %eax
  401425:	69 c0 4e 90 00 00 	imull	$36942, %eax, %eax
  40142b:	89 44 24 10 	movl	%eax, 16(%rsp)
  40142f:	8b 44 24 08 	movl	8(%rsp), %eax
  401433:	69 c0 de 7b 00 00 	imull	$31710, %eax, %eax
  401439:	89 44 24 08 	movl	%eax, 8(%rsp)
  40143d:	8b 44 24 20 	movl	32(%rsp), %eax
  401441:	69 c0 52 6f 00 00 	imull	$28498, %eax, %eax
  401447:	89 44 24 20 	movl	%eax, 32(%rsp)
  40144b:	8b 44 24 14 	movl	20(%rsp), %eax
  40144f:	69 c0 ee 29 00 00 	imull	$10734, %eax, %eax
  401455:	89 44 24 14 	movl	%eax, 20(%rsp)
  401459:	8b 44 24 04 	movl	4(%rsp), %eax
  40145d:	69 c0 da 58 00 00 	imull	$22746, %eax, %eax
  401463:	89 44 24 04 	movl	%eax, 4(%rsp)
  401467:	8b 04 24 	movl	(%rsp), %eax
  40146a:	69 c0 8d 38 00 00 	imull	$14477, %eax, %eax
  401470:	89 04 24 	movl	%eax, (%rsp)
  401473:	8b 04 24 	movl	(%rsp), %eax
  401476:	69 c0 e0 ef 00 00 	imull	$61408, %eax, %eax
  40147c:	89 04 24 	movl	%eax, (%rsp)
  40147f:	8b 04 24 	movl	(%rsp), %eax
  401482:	69 c0 fc 04 00 00 	imull	$1276, %eax, %eax
  401488:	89 04 24 	movl	%eax, (%rsp)
  40148b:	8b 44 24 04 	movl	4(%rsp), %eax
  40148f:	69 c0 20 6c 00 00 	imull	$27680, %eax, %eax
  401495:	89 44 24 04 	movl	%eax, 4(%rsp)
  401499:	8b 44 24 20 	movl	32(%rsp), %eax
  40149d:	69 c0 87 22 00 00 	imull	$8839, %eax, %eax
  4014a3:	89 44 24 20 	movl	%eax, 32(%rsp)
  4014a7:	8b 44 24 08 	movl	8(%rsp), %eax
  4014ab:	69 c0 e2 ca 00 00 	imull	$51938, %eax, %eax
  4014b1:	89 44 24 08 	movl	%eax, 8(%rsp)
  4014b5:	8b 44 24 14 	movl	20(%rsp), %eax
  4014b9:	69 c0 28 5b 00 00 	imull	$23336, %eax, %eax
  4014bf:	89 44 24 14 	movl	%eax, 20(%rsp)
  4014c3:	8b 44 24 14 	movl	20(%rsp), %eax
  4014c7:	69 c0 44 2e 00 00 	imull	$11844, %eax, %eax
  4014cd:	89 44 24 14 	movl	%eax, 20(%rsp)
  4014d1:	8b 44 24 24 	movl	36(%rsp), %eax
  4014d5:	69 c0 41 5e 00 00 	imull	$24129, %eax, %eax
  4014db:	89 44 24 24 	movl	%eax, 36(%rsp)
  4014df:	8b 44 24 18 	movl	24(%rsp), %eax
  4014e3:	69 c0 5e 19 00 00 	imull	$6494, %eax, %eax
  4014e9:	89 44 24 18 	movl	%eax, 24(%rsp)
  4014ed:	8b 44 24 24 	movl	36(%rsp), %eax
  4014f1:	69 c0 d3 54 00 00 	imull	$21715, %eax, %eax
  4014f7:	89 44 24 24 	movl	%eax, 36(%rsp)
  4014fb:	8b 44 24 1c 	movl	28(%rsp), %eax
  4014ff:	69 c0 db d1 00 00 	imull	$53723, %eax, %eax
  401505:	89 44 24 1c 	movl	%eax, 28(%rsp)
  401509:	8b 44 24 24 	movl	36(%rsp), %eax
  40150d:	69 c0 2d 07 00 00 	imull	$1837, %eax, %eax
  401513:	89 44 24 24 	movl	%eax, 36(%rsp)
  401517:	8b 44 24 24 	movl	36(%rsp), %eax
  40151b:	69 c0 eb c2 00 00 	imull	$49899, %eax, %eax
  401521:	89 44 24 24 	movl	%eax, 36(%rsp)
  401525:	8b 44 24 04 	movl	4(%rsp), %eax
  401529:	69 c0 38 a2 00 00 	imull	$41528, %eax, %eax
  40152f:	89 44 24 04 	movl	%eax, 4(%rsp)
  401533:	8b 44 24 1c 	movl	28(%rsp), %eax
  401537:	69 c0 d6 5f 00 00 	imull	$24534, %eax, %eax
  40153d:	89 44 24 1c 	movl	%eax, 28(%rsp)
  401541:	8b 04 24 	movl	(%rsp), %eax
  401544:	69 c0 19 79 00 00 	imull	$31001, %eax, %eax
  40154a:	89 04 24 	movl	%eax, (%rsp)
  40154d:	8b 04 24 	movl	(%rsp), %eax
  401550:	69 c0 89 d0 00 00 	imull	$53385, %eax, %eax
  401556:	89 04 24 	movl	%eax, (%rsp)
  401559:	8b 44 24 18 	movl	24(%rsp), %eax
  40155d:	69 c0 a4 07 00 00 	imull	$1956, %eax, %eax
  401563:	89 44 24 18 	movl	%eax, 24(%rsp)
  401567:	8b 44 24 0c 	movl	12(%rsp), %eax
  40156b:	69 c0 4f e3 00 00 	imull	$58191, %eax, %eax
  401571:	89 44 24 0c 	movl	%eax, 12(%rsp)
  401575:	8b 44 24 1c 	movl	28(%rsp), %eax
  401579:	69 c0 86 c5 00 00 	imull	$50566, %eax, %eax
  40157f:	89 44 24 1c 	movl	%eax, 28(%rsp)
  401583:	8b 04 24 	movl	(%rsp), %eax
  401586:	69 c0 6b 30 00 00 	imull	$12395, %eax, %eax
  40158c:	89 04 24 	movl	%eax, (%rsp)
  40158f:	8b 44 24 04 	movl	4(%rsp), %eax
  401593:	69 c0 33 74 00 00 	imull	$29747, %eax, %eax
  401599:	89 44 24 04 	movl	%eax, 4(%rsp)
  40159d:	8b 44 24 20 	movl	32(%rsp), %eax
  4015a1:	69 c0 83 19 00 00 	imull	$6531, %eax, %eax
  4015a7:	89 44 24 20 	movl	%eax, 32(%rsp)
  4015ab:	8b 44 24 20 	movl	32(%rsp), %eax
  4015af:	69 c0 44 29 00 00 	imull	$10564, %eax, %eax
  4015b5:	89 44 24 20 	movl	%eax, 32(%rsp)
  4015b9:	8b 44 24 14 	movl	20(%rsp), %eax
  4015bd:	69 c0 b1 2f 00 00 	imull	$12209, %eax, %eax
  4015c3:	89 44 24 14 	movl	%eax, 20(%rsp)
  4015c7:	8b 04 24 	movl	(%rsp), %eax
  4015ca:	69 c0 8f dc 00 00 	imull	$56463, %eax, %eax
  4015d0:	89 04 24 	movl	%eax, (%rsp)
  4015d3:	8b 44 24 08 	movl	8(%rsp), %eax
  4015d7:	69 c0 c8 4e 00 00 	imull	$20168, %eax, %eax
  4015dd:	89 44 24 08 	movl	%eax, 8(%rsp)
  4015e1:	8b 44 24 1c 	movl	28(%rsp), %eax
  4015e5:	69 c0 b9 42 00 00 	imull	$17081, %eax, %eax
  4015eb:	89 44 24 1c 	movl	%eax, 28(%rsp)
  4015ef:	8b 44 24 24 	movl	36(%rsp), %eax
  4015f3:	69 c0 d7 14 00 00 	imull	$5335, %eax, %eax
  4015f9:	89 44 24 24 	movl	%eax, 36(%rsp)
  4015fd:	8b 44 24 1c 	movl	28(%rsp), %eax
  401601:	69 c0 78 2d 00 00 	imull	$11640, %eax, %eax
  401607:	89 44 24 1c 	movl	%eax, 28(%rsp)
  40160b:	8b 44 24 18 	movl	24(%rsp), %eax
  40160f:	69 c0 b6 bf 00 00 	imull	$49078, %eax, %eax
  401615:	89 44 24 18 	movl	%eax, 24(%rsp)
  401619:	8b 44 24 0c 	movl	12(%rsp), %eax
  40161d:	69 c0 63 c4 00 00 	imull	$50275, %eax, %eax
  401623:	89 44 24 0c 	movl	%eax, 12(%rsp)
  401627:	8b 44 24 24 	movl	36(%rsp), %eax
  40162b:	69 c0 a8 24 00 00 	imull	$9384, %eax, %eax
  401631:	89 44 24 24 	movl	%eax, 36(%rsp)
  401635:	8b 44 24 24 	movl	36(%rsp), %eax
  401639:	69 c0 e9 cc 00 00 	imull	$52457, %eax, %eax
  40163f:	89 44 24 24 	movl	%eax, 36(%rsp)
  401643:	8b 44 24 14 	movl	20(%rsp), %eax
  401647:	69 c0 32 f6 00 00 	imull	$63026, %eax, %eax
  40164d:	89 44 24 14 	movl	%eax, 20(%rsp)
  401651:	8b 44 24 24 	movl	36(%rsp), %eax
  401655:	69 c0 29 b6 00 00 	imull	$46633, %eax, %eax
  40165b:	89 44 24 24 	movl	%eax, 36(%rsp)
  40165f:	8b 44 24 10 	movl	16(%rsp), %eax
  401663:	69 c0 1e b3 00 00 	imull	$45854, %eax, %eax
  401669:	89 44 24 10 	movl	%eax, 16(%rsp)
  40166d:	8b 44 24 14 	movl	20(%rsp), %eax
  401671:	69 c0 4c 85 00 00 	imull	$34124, %eax, %eax
  401677:	89 44 24 14 	movl	%eax, 20(%rsp)
  40167b:	8b 44 24 0c 	movl	12(%rsp), %eax
  40167f:	69 c0 d0 fc 00 00 	imull	$64720, %eax, %eax
  401685:	89 44 24 0c 	movl	%eax, 12(%rsp)
  401689:	8b 44 24 04 	movl	4(%rsp), %eax
  40168d:	69 c0 83 ff 00 00 	imull	$65411, %eax, %eax
  401693:	89 44 24 04 	movl	%eax, 4(%rsp)
  401697:	8b 44 24 10 	movl	16(%rsp), %eax
  40169b:	69 c0 a8 2c 00 00 	imull	$11432, %eax, %eax
  4016a1:	89 44 24 10 	movl	%eax, 16(%rsp)
  4016a5:	ba 00 00 00 00 	movl	$0, %edx
  4016aa:	b8 00 00 00 00 	movl	$0, %eax
  4016af:	eb 0a 	jmp	10 <scramble+0x42f>
  4016b1:	89 d1 	movl	%edx, %ecx
  4016b3:	8b 0c 8c 	movl	(%rsp,%rcx,4), %ecx
  4016b6:	01 c8 	addl	%ecx, %eax
  4016b8:	83 c2 01 	addl	$1, %edx
  4016bb:	83 fa 09 	cmpl	$9, %edx
  4016be:	76 f1 	jbe	-15 <scramble+0x425>
  4016c0:	48 8b 74 24 28 	movq	40(%rsp), %rsi
  4016c5:	64 48 33 34 25 28 00 00 00 	xorq	%fs:40, %rsi
  4016ce:	75 05 	jne	5 <scramble+0x449>
  4016d0:	48 83 c4 38 	addq	$56, %rsp
  4016d4:	c3 	retq
  4016d5:	e8 a6 f5 ff ff 	callq	-2650 <.plt+0x70>

getbuf:
  4016da:	48 83 ec 18 	subq	$24, %rsp
  4016de:	48 89 e7 	movq	%rsp, %rdi
  4016e1:	e8 94 02 00 00 	callq	660 <Gets>
  4016e6:	b8 01 00 00 00 	movl	$1, %eax
  4016eb:	48 83 c4 18 	addq	$24, %rsp
  4016ef:	c3 	retq

touch1:
  4016f0:	48 83 ec 08 	subq	$8, %rsp
  4016f4:	c7 05 de 2d 20 00 01 00 00 00 	movl	$1, 2108894(%rip)
  4016fe:	48 8d 3d d4 18 00 00 	leaq	6356(%rip), %rdi
  401705:	e8 56 f5 ff ff 	callq	-2730 <.plt+0x50>
  40170a:	bf 01 00 00 00 	movl	$1, %edi
  40170f:	e8 d6 04 00 00 	callq	1238 <validate>
  401714:	bf 00 00 00 00 	movl	$0, %edi
  401719:	e8 b2 f6 ff ff 	callq	-2382 <.plt+0x1c0>

touch2:
  40171e:	48 83 ec 08 	subq	$8, %rsp
  401722:	89 fa 	movl	%edi, %edx
  401724:	c7 05 ae 2d 20 00 02 00 00 00 	movl	$2, 2108846(%rip)
  40172e:	39 3d b0 2d 20 00 	cmpl	%edi, 2108848(%rip)
  401734:	74 2a 	je	42 <touch2+0x42>
  401736:	48 8d 35 eb 18 00 00 	leaq	6379(%rip), %rsi
  40173d:	bf 01 00 00 00 	movl	$1, %edi
  401742:	b8 00 00 00 00 	movl	$0, %eax
  401747:	e8 44 f6 ff ff 	callq	-2492 <.plt+0x180>
  40174c:	bf 02 00 00 00 	movl	$2, %edi
  401751:	e8 64 05 00 00 	callq	1380 <fail>
  401756:	bf 00 00 00 00 	movl	$0, %edi
  40175b:	e8 70 f6 ff ff 	callq	-2448 <.plt+0x1c0>
  401760:	48 8d 35 99 18 00 00 	leaq	6297(%rip), %rsi
  401767:	bf 01 00 00 00 	movl	$1, %edi
  40176c:	b8 00 00 00 00 	movl	$0, %eax
  401771:	e8 1a f6 ff ff 	callq	-2534 <.plt+0x180>
  401776:	bf 02 00 00 00 	movl	$2, %edi
  40177b:	e8 6a 04 00 00 	callq	1130 <validate>
  401780:	eb d4 	jmp	-44 <touch2+0x38>

hexmatch:
  401782:	41 54 	pushq	%r12
  401784:	55 	pushq	%rbp
  401785:	53 	pushq	%rbx
  401786:	48 83 c4 80 	addq	$-128, %rsp
  40178a:	89 fd 	movl	%edi, %ebp
  40178c:	48 89 f3 	movq	%rsi, %rbx
  40178f:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  401798:	48 89 44 24 78 	movq	%rax, 120(%rsp)
  40179d:	31 c0 	xorl	%eax, %eax
  40179f:	e8 bc f5 ff ff 	callq	-2628 <.plt+0x150>
  4017a4:	48 89 c1 	movq	%rax, %rcx
  4017a7:	48 ba 0b d7 a3 70 3d 0a d7 a3 	movabsq	$-6640827866535438581, %rdx
  4017b1:	48 f7 ea 	imulq	%rdx
  4017b4:	48 01 ca 	addq	%rcx, %rdx
  4017b7:	48 c1 fa 06 	sarq	$6, %rdx
  4017bb:	48 89 c8 	movq	%rcx, %rax
  4017be:	48 c1 f8 3f 	sarq	$63, %rax
  4017c2:	48 29 c2 	subq	%rax, %rdx
  4017c5:	48 8d 04 92 	leaq	(%rdx,%rdx,4), %rax
  4017c9:	48 8d 14 80 	leaq	(%rax,%rax,4), %rdx
  4017cd:	48 8d 04 95 00 00 00 00 	leaq	(,%rdx,4), %rax
  4017d5:	48 29 c1 	subq	%rax, %rcx
  4017d8:	4c 8d 24 0c 	leaq	(%rsp,%rcx), %r12
  4017dc:	41 89 e8 	movl	%ebp, %r8d
  4017df:	48 8d 0d 10 18 00 00 	leaq	6160(%rip), %rcx
  4017e6:	48 c7 c2 ff ff ff ff 	movq	$-1, %rdx
  4017ed:	be 01 00 00 00 	movl	$1, %esi
  4017f2:	4c 89 e7 	movq	%r12, %rdi
  4017f5:	b8 00 00 00 00 	movl	$0, %eax
  4017fa:	e8 01 f6 ff ff 	callq	-2559 <.plt+0x1f0>
  4017ff:	ba 09 00 00 00 	movl	$9, %edx
  401804:	4c 89 e6 	movq	%r12, %rsi
  401807:	48 89 df 	movq	%rbx, %rdi
  40180a:	e8 31 f4 ff ff 	callq	-3023 <.plt+0x30>
  40180f:	85 c0 	testl	%eax, %eax
  401811:	0f 94 c0 	sete	%al
  401814:	48 8b 5c 24 78 	movq	120(%rsp), %rbx
  401819:	64 48 33 1c 25 28 00 00 00 	xorq	%fs:40, %rbx
  401822:	75 0c 	jne	12 <hexmatch+0xae>
  401824:	0f b6 c0 	movzbl	%al, %eax
  401827:	48 83 ec 80 	subq	$-128, %rsp
  40182b:	5b 	popq	%rbx
  40182c:	5d 	popq	%rbp
  40182d:	41 5c 	popq	%r12
  40182f:	c3 	retq
  401830:	e8 4b f4 ff ff 	callq	-2997 <.plt+0x70>

touch3:
  401835:	53 	pushq	%rbx
  401836:	48 89 fb 	movq	%rdi, %rbx
  401839:	c7 05 99 2c 20 00 03 00 00 00 	movl	$3, 2108569(%rip)
  401843:	48 89 fe 	movq	%rdi, %rsi
  401846:	8b 3d 98 2c 20 00 	movl	2108568(%rip), %edi
  40184c:	e8 31 ff ff ff 	callq	-207 <hexmatch>
  401851:	85 c0 	testl	%eax, %eax
  401853:	74 2d 	je	45 <touch3+0x4d>
  401855:	48 89 da 	movq	%rbx, %rdx
  401858:	48 8d 35 f1 17 00 00 	leaq	6129(%rip), %rsi
  40185f:	bf 01 00 00 00 	movl	$1, %edi
  401864:	b8 00 00 00 00 	movl	$0, %eax
  401869:	e8 22 f5 ff ff 	callq	-2782 <.plt+0x180>
  40186e:	bf 03 00 00 00 	movl	$3, %edi
  401873:	e8 72 03 00 00 	callq	882 <validate>
  401878:	bf 00 00 00 00 	movl	$0, %edi
  40187d:	e8 4e f5 ff ff 	callq	-2738 <.plt+0x1c0>
  401882:	48 89 da 	movq	%rbx, %rdx
  401885:	48 8d 35 ec 17 00 00 	leaq	6124(%rip), %rsi
  40188c:	bf 01 00 00 00 	movl	$1, %edi
  401891:	b8 00 00 00 00 	movl	$0, %eax
  401896:	e8 f5 f4 ff ff 	callq	-2827 <.plt+0x180>
  40189b:	bf 03 00 00 00 	movl	$3, %edi
  4018a0:	e8 15 04 00 00 	callq	1045 <fail>
  4018a5:	eb d1 	jmp	-47 <touch3+0x43>

test:
  4018a7:	48 83 ec 08 	subq	$8, %rsp
  4018ab:	b8 00 00 00 00 	movl	$0, %eax
  4018b0:	e8 25 fe ff ff 	callq	-475 <getbuf>
  4018b5:	89 c2 	movl	%eax, %edx
  4018b7:	48 8d 35 e2 17 00 00 	leaq	6114(%rip), %rsi
  4018be:	bf 01 00 00 00 	movl	$1, %edi
  4018c3:	b8 00 00 00 00 	movl	$0, %eax
  4018c8:	e8 c3 f4 ff ff 	callq	-2877 <.plt+0x180>
  4018cd:	48 83 c4 08 	addq	$8, %rsp
  4018d1:	c3 	retq

save_char:
  4018d2:	8b 05 2c 38 20 00 	movl	2111532(%rip), %eax
  4018d8:	3d ff 03 00 00 	cmpl	$1023, %eax
  4018dd:	7f 4a 	jg	74 <save_char+0x57>
  4018df:	89 f9 	movl	%edi, %ecx
  4018e1:	c0 e9 04 	shrb	$4, %cl
  4018e4:	8d 14 40 	leal	(%rax,%rax,2), %edx
  4018e7:	4c 8d 05 d2 1a 00 00 	leaq	6866(%rip), %r8
  4018ee:	83 e1 0f 	andl	$15, %ecx
  4018f1:	45 0f b6 0c 08 	movzbl	(%r8,%rcx), %r9d
  4018f6:	48 8d 0d 03 2c 20 00 	leaq	2108419(%rip), %rcx
  4018fd:	48 63 f2 	movslq	%edx, %rsi
  401900:	44 88 0c 31 	movb	%r9b, (%rcx,%rsi)
  401904:	8d 72 01 	leal	1(%rdx), %esi
  401907:	83 e7 0f 	andl	$15, %edi
  40190a:	41 0f b6 3c 38 	movzbl	(%r8,%rdi), %edi
  40190f:	48 63 f6 	movslq	%esi, %rsi
  401912:	40 88 3c 31 	movb	%dil, (%rcx,%rsi)
  401916:	83 c2 02 	addl	$2, %edx
  401919:	48 63 d2 	movslq	%edx, %rdx
  40191c:	c6 04 11 20 	movb	$32, (%rcx,%rdx)
  401920:	83 c0 01 	addl	$1, %eax
  401923:	89 05 db 37 20 00 	movl	%eax, 2111451(%rip)
  401929:	f3 c3 	rep		retq

save_term:
  40192b:	8b 05 d3 37 20 00 	movl	2111443(%rip), %eax
  401931:	8d 04 40 	leal	(%rax,%rax,2), %eax
  401934:	48 98 	cltq
  401936:	48 8d 15 c3 2b 20 00 	leaq	2108355(%rip), %rdx
  40193d:	c6 04 02 00 	movb	$0, (%rdx,%rax)
  401941:	c3 	retq

check_fail:
  401942:	48 83 ec 08 	subq	$8, %rsp
  401946:	0f be 15 bb 37 20 00 	movsbl	2111419(%rip), %edx
  40194d:	4c 8d 05 ac 2b 20 00 	leaq	2108332(%rip), %r8
  401954:	8b 0d 7e 2b 20 00 	movl	2108286(%rip), %ecx
  40195a:	48 8d 35 62 17 00 00 	leaq	5986(%rip), %rsi
  401961:	bf 01 00 00 00 	movl	$1, %edi
  401966:	b8 00 00 00 00 	movl	$0, %eax
  40196b:	e8 20 f4 ff ff 	callq	-3040 <.plt+0x180>
  401970:	bf 01 00 00 00 	movl	$1, %edi
  401975:	e8 56 f4 ff ff 	callq	-2986 <.plt+0x1c0>

Gets:
  40197a:	41 54 	pushq	%r12
  40197c:	55 	pushq	%rbp
  40197d:	53 	pushq	%rbx
  40197e:	49 89 fc 	movq	%rdi, %r12
  401981:	c7 05 79 37 20 00 00 00 00 00 	movl	$0, 2111353(%rip)
  40198b:	48 89 fb 	movq	%rdi, %rbx
  40198e:	eb 11 	jmp	17 <Gets+0x27>
  401990:	48 8d 6b 01 	leaq	1(%rbx), %rbp
  401994:	88 03 	movb	%al, (%rbx)
  401996:	0f b6 f8 	movzbl	%al, %edi
  401999:	e8 34 ff ff ff 	callq	-204 <save_char>
  40199e:	48 89 eb 	movq	%rbp, %rbx
  4019a1:	48 8b 3d 28 2b 20 00 	movq	2108200(%rip), %rdi
  4019a8:	e8 c3 f3 ff ff 	callq	-3133 <.plt+0x160>
  4019ad:	83 f8 ff 	cmpl	$-1, %eax
  4019b0:	74 05 	je	5 <Gets+0x3d>
  4019b2:	83 f8 0a 	cmpl	$10, %eax
  4019b5:	75 d9 	jne	-39 <Gets+0x16>
  4019b7:	c6 03 00 	movb	$0, (%rbx)
  4019ba:	b8 00 00 00 00 	movl	$0, %eax
  4019bf:	e8 67 ff ff ff 	callq	-153 <save_term>
  4019c4:	4c 89 e0 	movq	%r12, %rax
  4019c7:	5b 	popq	%rbx
  4019c8:	5d 	popq	%rbp
  4019c9:	41 5c 	popq	%r12
  4019cb:	c3 	retq

notify_server:
  4019cc:	55 	pushq	%rbp
  4019cd:	53 	pushq	%rbx
  4019ce:	48 81 ec 18 40 00 00 	subq	$16408, %rsp
  4019d5:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  4019de:	48 89 84 24 08 40 00 00 	movq	%rax, 16392(%rsp)
  4019e6:	31 c0 	xorl	%eax, %eax
  4019e8:	83 3d f9 2a 20 00 00 	cmpl	$0, 2108153(%rip)
  4019ef:	0f 85 d2 00 00 00 	jne	210 <notify_server+0xfb>
  4019f5:	89 fb 	movl	%edi, %ebx
  4019f7:	8b 05 07 37 20 00 	movl	2111239(%rip), %eax
  4019fd:	83 c0 64 	addl	$100, %eax
  401a00:	3d 00 20 00 00 	cmpl	$8192, %eax
  401a05:	0f 8f dd 00 00 00 	jg	221 <notify_server+0x11c>
  401a0b:	0f be 05 f6 36 20 00 	movsbl	2111222(%rip), %eax
  401a12:	83 3d 37 27 20 00 00 	cmpl	$0, 2107191(%rip)
  401a19:	0f 84 e9 00 00 00 	je	233 <notify_server+0x13c>
  401a1f:	8b 15 bb 2a 20 00 	movl	2108091(%rip), %edx
  401a25:	85 db 	testl	%ebx, %ebx
  401a27:	0f 84 e5 00 00 00 	je	229 <notify_server+0x146>
  401a2d:	48 8d 2d a5 16 00 00 	leaq	5797(%rip), %rbp
  401a34:	48 89 e7 	movq	%rsp, %rdi
  401a37:	48 8d 0d c2 2a 20 00 	leaq	2108098(%rip), %rcx
  401a3e:	51 	pushq	%rcx
  401a3f:	56 	pushq	%rsi
  401a40:	50 	pushq	%rax
  401a41:	52 	pushq	%rdx
  401a42:	49 89 e9 	movq	%rbp, %r9
  401a45:	44 8b 05 dc 26 20 00 	movl	2107100(%rip), %r8d
  401a4c:	48 8d 0d 90 16 00 00 	leaq	5776(%rip), %rcx
  401a53:	ba 00 20 00 00 	movl	$8192, %edx
  401a58:	be 01 00 00 00 	movl	$1, %esi
  401a5d:	b8 00 00 00 00 	movl	$0, %eax
  401a62:	e8 99 f3 ff ff 	callq	-3175 <.plt+0x1f0>
  401a67:	48 83 c4 20 	addq	$32, %rsp
  401a6b:	83 3d de 26 20 00 00 	cmpl	$0, 2107102(%rip)
  401a72:	0f 84 df 00 00 00 	je	223 <notify_server+0x18b>
  401a78:	85 db 	testl	%ebx, %ebx
  401a7a:	0f 84 c6 00 00 00 	je	198 <notify_server+0x17a>
  401a80:	48 89 e1 	movq	%rsp, %rcx
  401a83:	4c 8d 8c 24 00 20 00 00 	leaq	8192(%rsp), %r9
  401a8b:	41 b8 00 00 00 00 	movl	$0, %r8d
  401a91:	48 8b 15 a0 26 20 00 	movq	2107040(%rip), %rdx
  401a98:	48 8b 35 a1 26 20 00 	movq	2107041(%rip), %rsi
  401a9f:	48 8b 3d 8a 26 20 00 	movq	2107018(%rip), %rdi
  401aa6:	e8 91 11 00 00 	callq	4497 <driver_post>
  401aab:	85 c0 	testl	%eax, %eax
  401aad:	78 6f 	js	111 <notify_server+0x152>
  401aaf:	48 8d 3d 72 17 00 00 	leaq	6002(%rip), %rdi
  401ab6:	e8 a5 f1 ff ff 	callq	-3675 <.plt+0x50>
  401abb:	48 8d 3d 49 16 00 00 	leaq	5705(%rip), %rdi
  401ac2:	e8 99 f1 ff ff 	callq	-3687 <.plt+0x50>
  401ac7:	48 8b 84 24 08 40 00 00 	movq	16392(%rsp), %rax
  401acf:	64 48 33 04 25 28 00 00 00 	xorq	%fs:40, %rax
  401ad8:	0f 85 07 01 00 00 	jne	263 <notify_server+0x219>
  401ade:	48 81 c4 18 40 00 00 	addq	$16408, %rsp
  401ae5:	5b 	popq	%rbx
  401ae6:	5d 	popq	%rbp
  401ae7:	c3 	retq
  401ae8:	48 8d 35 09 17 00 00 	leaq	5897(%rip), %rsi
  401aef:	bf 01 00 00 00 	movl	$1, %edi
  401af4:	b8 00 00 00 00 	movl	$0, %eax
  401af9:	e8 92 f2 ff ff 	callq	-3438 <.plt+0x180>
  401afe:	bf 01 00 00 00 	movl	$1, %edi
  401b03:	e8 c8 f2 ff ff 	callq	-3384 <.plt+0x1c0>
  401b08:	ba ff ff ff ff 	movl	$4294967295, %edx
  401b0d:	e9 13 ff ff ff 	jmp	-237 <notify_server+0x59>
  401b12:	48 8d 2d c5 15 00 00 	leaq	5573(%rip), %rbp
  401b19:	e9 16 ff ff ff 	jmp	-234 <notify_server+0x68>
  401b1e:	48 8d 94 24 00 20 00 00 	leaq	8192(%rsp), %rdx
  401b26:	48 8d 35 d2 15 00 00 	leaq	5586(%rip), %rsi
  401b2d:	bf 01 00 00 00 	movl	$1, %edi
  401b32:	b8 00 00 00 00 	movl	$0, %eax
  401b37:	e8 54 f2 ff ff 	callq	-3500 <.plt+0x180>
  401b3c:	bf 01 00 00 00 	movl	$1, %edi
  401b41:	e8 8a f2 ff ff 	callq	-3446 <.plt+0x1c0>
  401b46:	48 8d 3d c8 15 00 00 	leaq	5576(%rip), %rdi
  401b4d:	e8 0e f1 ff ff 	callq	-3826 <.plt+0x50>
  401b52:	e9 70 ff ff ff 	jmp	-144 <notify_server+0xfb>
  401b57:	48 89 ea 	movq	%rbp, %rdx
  401b5a:	48 8d 35 ff 16 00 00 	leaq	5887(%rip), %rsi
  401b61:	bf 01 00 00 00 	movl	$1, %edi
  401b66:	b8 00 00 00 00 	movl	$0, %eax
  401b6b:	e8 20 f2 ff ff 	callq	-3552 <.plt+0x180>
  401b70:	48 8b 15 b9 25 20 00 	movq	2106809(%rip), %rdx
  401b77:	48 8d 35 9e 15 00 00 	leaq	5534(%rip), %rsi
  401b7e:	bf 01 00 00 00 	movl	$1, %edi
  401b83:	b8 00 00 00 00 	movl	$0, %eax
  401b88:	e8 03 f2 ff ff 	callq	-3581 <.plt+0x180>
  401b8d:	48 8b 15 ac 25 20 00 	movq	2106796(%rip), %rdx
  401b94:	48 8d 35 8e 15 00 00 	leaq	5518(%rip), %rsi
  401b9b:	bf 01 00 00 00 	movl	$1, %edi
  401ba0:	b8 00 00 00 00 	movl	$0, %eax
  401ba5:	e8 e6 f1 ff ff 	callq	-3610 <.plt+0x180>
  401baa:	48 8b 15 87 25 20 00 	movq	2106759(%rip), %rdx
  401bb1:	48 8d 35 7d 15 00 00 	leaq	5501(%rip), %rsi
  401bb8:	bf 01 00 00 00 	movl	$1, %edi
  401bbd:	b8 00 00 00 00 	movl	$0, %eax
  401bc2:	e8 c9 f1 ff ff 	callq	-3639 <.plt+0x180>
  401bc7:	48 89 e2 	movq	%rsp, %rdx
  401bca:	48 8d 35 6d 15 00 00 	leaq	5485(%rip), %rsi
  401bd1:	bf 01 00 00 00 	movl	$1, %edi
  401bd6:	b8 00 00 00 00 	movl	$0, %eax
  401bdb:	e8 b0 f1 ff ff 	callq	-3664 <.plt+0x180>
  401be0:	e9 e2 fe ff ff 	jmp	-286 <notify_server+0xfb>
  401be5:	e8 96 f0 ff ff 	callq	-3946 <.plt+0x70>

validate:
  401bea:	53 	pushq	%rbx
  401beb:	89 fb 	movl	%edi, %ebx
  401bed:	83 3d f4 28 20 00 00 	cmpl	$0, 2107636(%rip)
  401bf4:	74 72 	je	114 <validate+0x7e>
  401bf6:	39 3d e0 28 20 00 	cmpl	%edi, 2107616(%rip)
  401bfc:	75 32 	jne	50 <validate+0x46>
  401bfe:	8b 15 d4 28 20 00 	movl	2107604(%rip), %edx
  401c04:	39 fa 	cmpl	%edi, %edx
  401c06:	75 3e 	jne	62 <validate+0x5c>
  401c08:	0f be 15 f9 34 20 00 	movsbl	2110713(%rip), %edx
  401c0f:	4c 8d 05 ea 28 20 00 	leaq	2107626(%rip), %r8
  401c16:	89 f9 	movl	%edi, %ecx
  401c18:	48 8d 35 49 15 00 00 	leaq	5449(%rip), %rsi
  401c1f:	bf 01 00 00 00 	movl	$1, %edi
  401c24:	b8 00 00 00 00 	movl	$0, %eax
  401c29:	e8 62 f1 ff ff 	callq	-3742 <.plt+0x180>
  401c2e:	5b 	popq	%rbx
  401c2f:	c3 	retq
  401c30:	48 8d 3d 13 15 00 00 	leaq	5395(%rip), %rdi
  401c37:	e8 24 f0 ff ff 	callq	-4060 <.plt+0x50>
  401c3c:	b8 00 00 00 00 	movl	$0, %eax
  401c41:	e8 fc fc ff ff 	callq	-772 <check_fail>
  401c46:	89 f9 	movl	%edi, %ecx
  401c48:	48 8d 35 39 16 00 00 	leaq	5689(%rip), %rsi
  401c4f:	bf 01 00 00 00 	movl	$1, %edi
  401c54:	b8 00 00 00 00 	movl	$0, %eax
  401c59:	e8 32 f1 ff ff 	callq	-3790 <.plt+0x180>
  401c5e:	b8 00 00 00 00 	movl	$0, %eax
  401c63:	e8 da fc ff ff 	callq	-806 <check_fail>
  401c68:	39 3d 6e 28 20 00 	cmpl	%edi, 2107502(%rip)
  401c6e:	74 1a 	je	26 <validate+0xa0>
  401c70:	48 8d 3d d3 14 00 00 	leaq	5331(%rip), %rdi
  401c77:	e8 e4 ef ff ff 	callq	-4124 <.plt+0x50>
  401c7c:	89 de 	movl	%ebx, %esi
  401c7e:	bf 00 00 00 00 	movl	$0, %edi
  401c83:	e8 44 fd ff ff 	callq	-700 <notify_server>
  401c88:	eb a4 	jmp	-92 <validate+0x44>
  401c8a:	0f be 0d 77 34 20 00 	movsbl	2110583(%rip), %ecx
  401c91:	89 fa 	movl	%edi, %edx
  401c93:	48 8d 35 16 16 00 00 	leaq	5654(%rip), %rsi
  401c9a:	bf 01 00 00 00 	movl	$1, %edi
  401c9f:	b8 00 00 00 00 	movl	$0, %eax
  401ca4:	e8 e7 f0 ff ff 	callq	-3865 <.plt+0x180>
  401ca9:	89 de 	movl	%ebx, %esi
  401cab:	bf 01 00 00 00 	movl	$1, %edi
  401cb0:	e8 17 fd ff ff 	callq	-745 <notify_server>
  401cb5:	e9 74 ff ff ff 	jmp	-140 <validate+0x44>

fail:
  401cba:	48 83 ec 08 	subq	$8, %rsp
  401cbe:	83 3d 23 28 20 00 00 	cmpl	$0, 2107427(%rip)
  401cc5:	75 11 	jne	17 <fail+0x1e>
  401cc7:	89 fe 	movl	%edi, %esi
  401cc9:	bf 00 00 00 00 	movl	$0, %edi
  401cce:	e8 f9 fc ff ff 	callq	-775 <notify_server>
  401cd3:	48 83 c4 08 	addq	$8, %rsp
  401cd7:	c3 	retq
  401cd8:	b8 00 00 00 00 	movl	$0, %eax
  401cdd:	e8 60 fc ff ff 	callq	-928 <check_fail>

bushandler:
  401ce2:	48 83 ec 08 	subq	$8, %rsp
  401ce6:	83 3d fb 27 20 00 00 	cmpl	$0, 2107387(%rip)
  401ced:	74 16 	je	22 <bushandler+0x23>
  401cef:	48 8d 3d 87 14 00 00 	leaq	5255(%rip), %rdi
  401cf6:	e8 65 ef ff ff 	callq	-4251 <.plt+0x50>
  401cfb:	b8 00 00 00 00 	movl	$0, %eax
  401d00:	e8 3d fc ff ff 	callq	-963 <check_fail>
  401d05:	48 8d 3d dc 15 00 00 	leaq	5596(%rip), %rdi
  401d0c:	e8 4f ef ff ff 	callq	-4273 <.plt+0x50>
  401d11:	48 8d 3d 6f 14 00 00 	leaq	5231(%rip), %rdi
  401d18:	e8 43 ef ff ff 	callq	-4285 <.plt+0x50>
  401d1d:	be 00 00 00 00 	movl	$0, %esi
  401d22:	bf 00 00 00 00 	movl	$0, %edi
  401d27:	e8 a0 fc ff ff 	callq	-864 <notify_server>
  401d2c:	bf 01 00 00 00 	movl	$1, %edi
  401d31:	e8 9a f0 ff ff 	callq	-3942 <.plt+0x1c0>

seghandler:
  401d36:	48 83 ec 08 	subq	$8, %rsp
  401d3a:	83 3d a7 27 20 00 00 	cmpl	$0, 2107303(%rip)
  401d41:	74 16 	je	22 <seghandler+0x23>
  401d43:	48 8d 3d 53 14 00 00 	leaq	5203(%rip), %rdi
  401d4a:	e8 11 ef ff ff 	callq	-4335 <.plt+0x50>
  401d4f:	b8 00 00 00 00 	movl	$0, %eax
  401d54:	e8 e9 fb ff ff 	callq	-1047 <check_fail>
  401d59:	48 8d 3d a8 15 00 00 	leaq	5544(%rip), %rdi
  401d60:	e8 fb ee ff ff 	callq	-4357 <.plt+0x50>
  401d65:	48 8d 3d 1b 14 00 00 	leaq	5147(%rip), %rdi
  401d6c:	e8 ef ee ff ff 	callq	-4369 <.plt+0x50>
  401d71:	be 00 00 00 00 	movl	$0, %esi
  401d76:	bf 00 00 00 00 	movl	$0, %edi
  401d7b:	e8 4c fc ff ff 	callq	-948 <notify_server>
  401d80:	bf 01 00 00 00 	movl	$1, %edi
  401d85:	e8 46 f0 ff ff 	callq	-4026 <.plt+0x1c0>

illegalhandler:
  401d8a:	48 83 ec 08 	subq	$8, %rsp
  401d8e:	83 3d 53 27 20 00 00 	cmpl	$0, 2107219(%rip)
  401d95:	74 16 	je	22 <illegalhandler+0x23>
  401d97:	48 8d 3d 12 14 00 00 	leaq	5138(%rip), %rdi
  401d9e:	e8 bd ee ff ff 	callq	-4419 <.plt+0x50>
  401da3:	b8 00 00 00 00 	movl	$0, %eax
  401da8:	e8 95 fb ff ff 	callq	-1131 <check_fail>
  401dad:	48 8d 3d 7c 15 00 00 	leaq	5500(%rip), %rdi
  401db4:	e8 a7 ee ff ff 	callq	-4441 <.plt+0x50>
  401db9:	48 8d 3d c7 13 00 00 	leaq	5063(%rip), %rdi
  401dc0:	e8 9b ee ff ff 	callq	-4453 <.plt+0x50>
  401dc5:	be 00 00 00 00 	movl	$0, %esi
  401dca:	bf 00 00 00 00 	movl	$0, %edi
  401dcf:	e8 f8 fb ff ff 	callq	-1032 <notify_server>
  401dd4:	bf 01 00 00 00 	movl	$1, %edi
  401dd9:	e8 f2 ef ff ff 	callq	-4110 <.plt+0x1c0>

sigalrmhandler:
  401dde:	48 83 ec 08 	subq	$8, %rsp
  401de2:	83 3d ff 26 20 00 00 	cmpl	$0, 2107135(%rip)
  401de9:	74 16 	je	22 <sigalrmhandler+0x23>
  401deb:	48 8d 3d d2 13 00 00 	leaq	5074(%rip), %rdi
  401df2:	e8 69 ee ff ff 	callq	-4503 <.plt+0x50>
  401df7:	b8 00 00 00 00 	movl	$0, %eax
  401dfc:	e8 41 fb ff ff 	callq	-1215 <check_fail>
  401e01:	ba 05 00 00 00 	movl	$5, %edx
  401e06:	48 8d 35 53 15 00 00 	leaq	5459(%rip), %rsi
  401e0d:	bf 01 00 00 00 	movl	$1, %edi
  401e12:	b8 00 00 00 00 	movl	$0, %eax
  401e17:	e8 74 ef ff ff 	callq	-4236 <.plt+0x180>
  401e1c:	be 00 00 00 00 	movl	$0, %esi
  401e21:	bf 00 00 00 00 	movl	$0, %edi
  401e26:	e8 a1 fb ff ff 	callq	-1119 <notify_server>
  401e2b:	bf 01 00 00 00 	movl	$1, %edi
  401e30:	e8 9b ef ff ff 	callq	-4197 <.plt+0x1c0>

launch:
  401e35:	55 	pushq	%rbp
  401e36:	48 89 e5 	movq	%rsp, %rbp
  401e39:	48 83 ec 10 	subq	$16, %rsp
  401e3d:	48 89 fa 	movq	%rdi, %rdx
  401e40:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  401e49:	48 89 45 f8 	movq	%rax, -8(%rbp)
  401e4d:	31 c0 	xorl	%eax, %eax
  401e4f:	48 8d 47 1e 	leaq	30(%rdi), %rax
  401e53:	48 83 e0 f0 	andq	$-16, %rax
  401e57:	48 29 c4 	subq	%rax, %rsp
  401e5a:	48 8d 7c 24 0f 	leaq	15(%rsp), %rdi
  401e5f:	48 83 e7 f0 	andq	$-16, %rdi
  401e63:	be f4 00 00 00 	movl	$244, %esi
  401e68:	e8 33 ee ff ff 	callq	-4557 <.plt+0x90>
  401e6d:	48 8b 05 ec 22 20 00 	movq	2106092(%rip), %rax
  401e74:	48 39 05 55 26 20 00 	cmpq	%rax, 2106965(%rip)
  401e7b:	74 3a 	je	58 <launch+0x82>
  401e7d:	c7 05 55 26 20 00 00 00 00 00 	movl	$0, 2106965(%rip)
  401e87:	b8 00 00 00 00 	movl	$0, %eax
  401e8c:	e8 16 fa ff ff 	callq	-1514 <test>
  401e91:	83 3d 50 26 20 00 00 	cmpl	$0, 2106960(%rip)
  401e98:	75 35 	jne	53 <launch+0x9a>
  401e9a:	48 8d 3d 43 13 00 00 	leaq	4931(%rip), %rdi
  401ea1:	e8 ba ed ff ff 	callq	-4678 <.plt+0x50>
  401ea6:	48 8b 45 f8 	movq	-8(%rbp), %rax
  401eaa:	64 48 33 04 25 28 00 00 00 	xorq	%fs:40, %rax
  401eb3:	75 30 	jne	48 <launch+0xb0>
  401eb5:	c9 	leave
  401eb6:	c3 	retq
  401eb7:	48 8d 35 0e 13 00 00 	leaq	4878(%rip), %rsi
  401ebe:	bf 01 00 00 00 	movl	$1, %edi
  401ec3:	b8 00 00 00 00 	movl	$0, %eax
  401ec8:	e8 c3 ee ff ff 	callq	-4413 <.plt+0x180>
  401ecd:	eb ae 	jmp	-82 <launch+0x48>
  401ecf:	48 8d 3d 03 13 00 00 	leaq	4867(%rip), %rdi
  401ed6:	e8 85 ed ff ff 	callq	-4731 <.plt+0x50>
  401edb:	b8 00 00 00 00 	movl	$0, %eax
  401ee0:	e8 5d fa ff ff 	callq	-1443 <check_fail>
  401ee5:	e8 96 ed ff ff 	callq	-4714 <.plt+0x70>

stable_launch:
  401eea:	53 	pushq	%rbx
  401eeb:	48 89 3d d6 25 20 00 	movq	%rdi, 2106838(%rip)
  401ef2:	41 b9 00 00 00 00 	movl	$0, %r9d
  401ef8:	41 b8 00 00 00 00 	movl	$0, %r8d
  401efe:	b9 32 01 00 00 	movl	$306, %ecx
  401f03:	ba 07 00 00 00 	movl	$7, %edx
  401f08:	be 00 00 10 00 	movl	$1048576, %esi
  401f0d:	bf 00 60 58 55 	movl	$1431855104, %edi
  401f12:	e8 79 ed ff ff 	callq	-4743 <.plt+0x80>
  401f17:	48 89 c3 	movq	%rax, %rbx
  401f1a:	48 3d 00 60 58 55 	cmpq	$1431855104, %rax
  401f20:	75 43 	jne	67 <stable_launch+0x7b>
  401f22:	48 8d 90 f8 ff 0f 00 	leaq	1048568(%rax), %rdx
  401f29:	48 89 15 e0 31 20 00 	movq	%rdx, 2109920(%rip)
  401f30:	48 89 e0 	movq	%rsp, %rax
  401f33:	48 89 d4 	movq	%rdx, %rsp
  401f36:	48 89 c2 	movq	%rax, %rdx
  401f39:	48 89 15 80 25 20 00 	movq	%rdx, 2106752(%rip)
  401f40:	48 8b 3d 81 25 20 00 	movq	2106753(%rip), %rdi
  401f47:	e8 e9 fe ff ff 	callq	-279 <launch>
  401f4c:	48 8b 05 6d 25 20 00 	movq	2106733(%rip), %rax
  401f53:	48 89 c4 	movq	%rax, %rsp
  401f56:	be 00 00 10 00 	movl	$1048576, %esi
  401f5b:	48 89 df 	movq	%rbx, %rdi
  401f5e:	e8 1d ee ff ff 	callq	-4579 <.plt+0x170>
  401f63:	5b 	popq	%rbx
  401f64:	c3 	retq
  401f65:	be 00 00 10 00 	movl	$1048576, %esi
  401f6a:	48 89 c7 	movq	%rax, %rdi
  401f6d:	e8 0e ee ff ff 	callq	-4594 <.plt+0x170>
  401f72:	b9 00 60 58 55 	movl	$1431855104, %ecx
  401f77:	48 8d 15 1a 14 00 00 	leaq	5146(%rip), %rdx
  401f7e:	be 01 00 00 00 	movl	$1, %esi
  401f83:	48 8b 3d f6 21 20 00 	movq	2105846(%rip), %rdi
  401f8a:	b8 00 00 00 00 	movl	$0, %eax
  401f8f:	e8 5c ee ff ff 	callq	-4516 <.plt+0x1e0>
  401f94:	bf 01 00 00 00 	movl	$1, %edi
  401f99:	e8 32 ee ff ff 	callq	-4558 <.plt+0x1c0>

rio_readinitb:
  401f9e:	89 37 	movl	%esi, (%rdi)
  401fa0:	c7 47 04 00 00 00 00 	movl	$0, 4(%rdi)
  401fa7:	48 8d 47 10 	leaq	16(%rdi), %rax
  401fab:	48 89 47 08 	movq	%rax, 8(%rdi)
  401faf:	c3 	retq

sigalrm_handler:
  401fb0:	48 83 ec 08 	subq	$8, %rsp
  401fb4:	b9 00 00 00 00 	movl	$0, %ecx
  401fb9:	48 8d 15 10 14 00 00 	leaq	5136(%rip), %rdx
  401fc0:	be 01 00 00 00 	movl	$1, %esi
  401fc5:	48 8b 3d b4 21 20 00 	movq	2105780(%rip), %rdi
  401fcc:	b8 00 00 00 00 	movl	$0, %eax
  401fd1:	e8 1a ee ff ff 	callq	-4582 <.plt+0x1e0>
  401fd6:	bf 01 00 00 00 	movl	$1, %edi
  401fdb:	e8 f0 ed ff ff 	callq	-4624 <.plt+0x1c0>

rio_writen:
  401fe0:	41 55 	pushq	%r13
  401fe2:	41 54 	pushq	%r12
  401fe4:	55 	pushq	%rbp
  401fe5:	53 	pushq	%rbx
  401fe6:	48 83 ec 08 	subq	$8, %rsp
  401fea:	41 89 fc 	movl	%edi, %r12d
  401fed:	48 89 f5 	movq	%rsi, %rbp
  401ff0:	49 89 d5 	movq	%rdx, %r13
  401ff3:	48 89 d3 	movq	%rdx, %rbx
  401ff6:	eb 06 	jmp	6 <rio_writen+0x1e>
  401ff8:	48 29 c3 	subq	%rax, %rbx
  401ffb:	48 01 c5 	addq	%rax, %rbp
  401ffe:	48 85 db 	testq	%rbx, %rbx
  402001:	74 24 	je	36 <rio_writen+0x47>
  402003:	48 89 da 	movq	%rbx, %rdx
  402006:	48 89 ee 	movq	%rbp, %rsi
  402009:	44 89 e7 	movl	%r12d, %edi
  40200c:	e8 5f ec ff ff 	callq	-5025 <.plt+0x60>
  402011:	48 85 c0 	testq	%rax, %rax
  402014:	7f e2 	jg	-30 <rio_writen+0x18>
  402016:	e8 05 ec ff ff 	callq	-5115 <.plt+0x10>
  40201b:	83 38 04 	cmpl	$4, (%rax)
  40201e:	75 15 	jne	21 <rio_writen+0x55>
  402020:	b8 00 00 00 00 	movl	$0, %eax
  402025:	eb d1 	jmp	-47 <rio_writen+0x18>
  402027:	4c 89 e8 	movq	%r13, %rax
  40202a:	48 83 c4 08 	addq	$8, %rsp
  40202e:	5b 	popq	%rbx
  40202f:	5d 	popq	%rbp
  402030:	41 5c 	popq	%r12
  402032:	41 5d 	popq	%r13
  402034:	c3 	retq
  402035:	48 c7 c0 ff ff ff ff 	movq	$-1, %rax
  40203c:	eb ec 	jmp	-20 <rio_writen+0x4a>

rio_read:
  40203e:	41 55 	pushq	%r13
  402040:	41 54 	pushq	%r12
  402042:	55 	pushq	%rbp
  402043:	53 	pushq	%rbx
  402044:	48 83 ec 08 	subq	$8, %rsp
  402048:	48 89 fb 	movq	%rdi, %rbx
  40204b:	49 89 f5 	movq	%rsi, %r13
  40204e:	49 89 d4 	movq	%rdx, %r12
  402051:	eb 0a 	jmp	10 <rio_read+0x1f>
  402053:	e8 c8 eb ff ff 	callq	-5176 <.plt+0x10>
  402058:	83 38 04 	cmpl	$4, (%rax)
  40205b:	75 5c 	jne	92 <rio_read+0x7b>
  40205d:	8b 6b 04 	movl	4(%rbx), %ebp
  402060:	85 ed 	testl	%ebp, %ebp
  402062:	7f 24 	jg	36 <rio_read+0x4a>
  402064:	48 8d 6b 10 	leaq	16(%rbx), %rbp
  402068:	8b 3b 	movl	(%rbx), %edi
  40206a:	ba 00 20 00 00 	movl	$8192, %edx
  40206f:	48 89 ee 	movq	%rbp, %rsi
  402072:	e8 59 ec ff ff 	callq	-5031 <.plt+0xc0>
  402077:	89 43 04 	movl	%eax, 4(%rbx)
  40207a:	85 c0 	testl	%eax, %eax
  40207c:	78 d5 	js	-43 <rio_read+0x15>
  40207e:	85 c0 	testl	%eax, %eax
  402080:	74 40 	je	64 <rio_read+0x84>
  402082:	48 89 6b 08 	movq	%rbp, 8(%rbx)
  402086:	eb d5 	jmp	-43 <rio_read+0x1f>
  402088:	89 e8 	movl	%ebp, %eax
  40208a:	4c 39 e0 	cmpq	%r12, %rax
  40208d:	72 03 	jb	3 <rio_read+0x54>
  40208f:	44 89 e5 	movl	%r12d, %ebp
  402092:	4c 63 e5 	movslq	%ebp, %r12
  402095:	48 8b 73 08 	movq	8(%rbx), %rsi
  402099:	4c 89 e2 	movq	%r12, %rdx
  40209c:	4c 89 ef 	movq	%r13, %rdi
  40209f:	e8 8c ec ff ff 	callq	-4980 <.plt+0x120>
  4020a4:	4c 01 63 08 	addq	%r12, 8(%rbx)
  4020a8:	29 6b 04 	subl	%ebp, 4(%rbx)
  4020ab:	4c 89 e0 	movq	%r12, %rax
  4020ae:	48 83 c4 08 	addq	$8, %rsp
  4020b2:	5b 	popq	%rbx
  4020b3:	5d 	popq	%rbp
  4020b4:	41 5c 	popq	%r12
  4020b6:	41 5d 	popq	%r13
  4020b8:	c3 	retq
  4020b9:	48 c7 c0 ff ff ff ff 	movq	$-1, %rax
  4020c0:	eb ec 	jmp	-20 <rio_read+0x70>
  4020c2:	b8 00 00 00 00 	movl	$0, %eax
  4020c7:	eb e5 	jmp	-27 <rio_read+0x70>

rio_readlineb:
  4020c9:	41 55 	pushq	%r13
  4020cb:	41 54 	pushq	%r12
  4020cd:	55 	pushq	%rbp
  4020ce:	53 	pushq	%rbx
  4020cf:	48 83 ec 18 	subq	$24, %rsp
  4020d3:	49 89 fd 	movq	%rdi, %r13
  4020d6:	48 89 f5 	movq	%rsi, %rbp
  4020d9:	49 89 d4 	movq	%rdx, %r12
  4020dc:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  4020e5:	48 89 44 24 08 	movq	%rax, 8(%rsp)
  4020ea:	31 c0 	xorl	%eax, %eax
  4020ec:	bb 01 00 00 00 	movl	$1, %ebx
  4020f1:	4c 39 e3 	cmpq	%r12, %rbx
  4020f4:	73 47 	jae	71 <rio_readlineb+0x74>
  4020f6:	48 8d 74 24 07 	leaq	7(%rsp), %rsi
  4020fb:	ba 01 00 00 00 	movl	$1, %edx
  402100:	4c 89 ef 	movq	%r13, %rdi
  402103:	e8 36 ff ff ff 	callq	-202 <rio_read>
  402108:	83 f8 01 	cmpl	$1, %eax
  40210b:	75 1c 	jne	28 <rio_readlineb+0x60>
  40210d:	48 8d 45 01 	leaq	1(%rbp), %rax
  402111:	0f b6 54 24 07 	movzbl	7(%rsp), %edx
  402116:	88 55 00 	movb	%dl, (%rbp)
  402119:	80 7c 24 07 0a 	cmpb	$10, 7(%rsp)
  40211e:	74 1a 	je	26 <rio_readlineb+0x71>
  402120:	48 83 c3 01 	addq	$1, %rbx
  402124:	48 89 c5 	movq	%rax, %rbp
  402127:	eb c8 	jmp	-56 <rio_readlineb+0x28>
  402129:	85 c0 	testl	%eax, %eax
  40212b:	75 32 	jne	50 <rio_readlineb+0x96>
  40212d:	48 83 fb 01 	cmpq	$1, %rbx
  402131:	75 0a 	jne	10 <rio_readlineb+0x74>
  402133:	b8 00 00 00 00 	movl	$0, %eax
  402138:	eb 0a 	jmp	10 <rio_readlineb+0x7b>
  40213a:	48 89 c5 	movq	%rax, %rbp
  40213d:	c6 45 00 00 	movb	$0, (%rbp)
  402141:	48 89 d8 	movq	%rbx, %rax
  402144:	48 8b 4c 24 08 	movq	8(%rsp), %rcx
  402149:	64 48 33 0c 25 28 00 00 00 	xorq	%fs:40, %rcx
  402152:	75 14 	jne	20 <rio_readlineb+0x9f>
  402154:	48 83 c4 18 	addq	$24, %rsp
  402158:	5b 	popq	%rbx
  402159:	5d 	popq	%rbp
  40215a:	41 5c 	popq	%r12
  40215c:	41 5d 	popq	%r13
  40215e:	c3 	retq
  40215f:	48 c7 c0 ff ff ff ff 	movq	$-1, %rax
  402166:	eb dc 	jmp	-36 <rio_readlineb+0x7b>
  402168:	e8 13 eb ff ff 	callq	-5357 <.plt+0x70>

urlencode:
  40216d:	41 54 	pushq	%r12
  40216f:	55 	pushq	%rbp
  402170:	53 	pushq	%rbx
  402171:	48 83 ec 10 	subq	$16, %rsp
  402175:	48 89 fb 	movq	%rdi, %rbx
  402178:	48 89 f5 	movq	%rsi, %rbp
  40217b:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  402184:	48 89 44 24 08 	movq	%rax, 8(%rsp)
  402189:	31 c0 	xorl	%eax, %eax
  40218b:	48 c7 c1 ff ff ff ff 	movq	$-1, %rcx
  402192:	f2 ae 	repne		scasb	%es:(%rdi), %al
  402194:	48 89 ce 	movq	%rcx, %rsi
  402197:	48 f7 d6 	notq	%rsi
  40219a:	8d 46 ff 	leal	-1(%rsi), %eax
  40219d:	eb 0f 	jmp	15 <urlencode+0x41>
  40219f:	44 88 45 00 	movb	%r8b, (%rbp)
  4021a3:	48 8d 6d 01 	leaq	1(%rbp), %rbp
  4021a7:	48 83 c3 01 	addq	$1, %rbx
  4021ab:	44 89 e0 	movl	%r12d, %eax
  4021ae:	44 8d 60 ff 	leal	-1(%rax), %r12d
  4021b2:	85 c0 	testl	%eax, %eax
  4021b4:	0f 84 a8 00 00 00 	je	168 <urlencode+0xf5>
  4021ba:	44 0f b6 03 	movzbl	(%rbx), %r8d
  4021be:	41 80 f8 2a 	cmpb	$42, %r8b
  4021c2:	0f 94 c2 	sete	%dl
  4021c5:	41 80 f8 2d 	cmpb	$45, %r8b
  4021c9:	0f 94 c0 	sete	%al
  4021cc:	08 c2 	orb	%al, %dl
  4021ce:	75 cf 	jne	-49 <urlencode+0x32>
  4021d0:	41 80 f8 2e 	cmpb	$46, %r8b
  4021d4:	74 c9 	je	-55 <urlencode+0x32>
  4021d6:	41 80 f8 5f 	cmpb	$95, %r8b
  4021da:	74 c3 	je	-61 <urlencode+0x32>
  4021dc:	41 8d 40 d0 	leal	-48(%r8), %eax
  4021e0:	3c 09 	cmpb	$9, %al
  4021e2:	76 bb 	jbe	-69 <urlencode+0x32>
  4021e4:	41 8d 40 bf 	leal	-65(%r8), %eax
  4021e8:	3c 19 	cmpb	$25, %al
  4021ea:	76 b3 	jbe	-77 <urlencode+0x32>
  4021ec:	41 8d 40 9f 	leal	-97(%r8), %eax
  4021f0:	3c 19 	cmpb	$25, %al
  4021f2:	76 ab 	jbe	-85 <urlencode+0x32>
  4021f4:	41 80 f8 20 	cmpb	$32, %r8b
  4021f8:	74 56 	je	86 <urlencode+0xe3>
  4021fa:	41 8d 40 e0 	leal	-32(%r8), %eax
  4021fe:	3c 5f 	cmpb	$95, %al
  402200:	0f 96 c2 	setbe	%dl
  402203:	41 80 f8 09 	cmpb	$9, %r8b
  402207:	0f 94 c0 	sete	%al
  40220a:	08 c2 	orb	%al, %dl
  40220c:	74 4f 	je	79 <urlencode+0xf0>
  40220e:	48 89 e7 	movq	%rsp, %rdi
  402211:	45 0f b6 c0 	movzbl	%r8b, %r8d
  402215:	48 8d 0d 4c 12 00 00 	leaq	4684(%rip), %rcx
  40221c:	ba 08 00 00 00 	movl	$8, %edx
  402221:	be 01 00 00 00 	movl	$1, %esi
  402226:	b8 00 00 00 00 	movl	$0, %eax
  40222b:	e8 d0 eb ff ff 	callq	-5168 <.plt+0x1f0>
  402230:	0f b6 04 24 	movzbl	(%rsp), %eax
  402234:	88 45 00 	movb	%al, (%rbp)
  402237:	0f b6 44 24 01 	movzbl	1(%rsp), %eax
  40223c:	88 45 01 	movb	%al, 1(%rbp)
  40223f:	0f b6 44 24 02 	movzbl	2(%rsp), %eax
  402244:	88 45 02 	movb	%al, 2(%rbp)
  402247:	48 8d 6d 03 	leaq	3(%rbp), %rbp
  40224b:	e9 57 ff ff ff 	jmp	-169 <urlencode+0x3a>
  402250:	c6 45 00 2b 	movb	$43, (%rbp)
  402254:	48 8d 6d 01 	leaq	1(%rbp), %rbp
  402258:	e9 4a ff ff ff 	jmp	-182 <urlencode+0x3a>
  40225d:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402262:	48 8b 74 24 08 	movq	8(%rsp), %rsi
  402267:	64 48 33 34 25 28 00 00 00 	xorq	%fs:40, %rsi
  402270:	75 09 	jne	9 <urlencode+0x10e>
  402272:	48 83 c4 10 	addq	$16, %rsp
  402276:	5b 	popq	%rbx
  402277:	5d 	popq	%rbp
  402278:	41 5c 	popq	%r12
  40227a:	c3 	retq
  40227b:	e8 00 ea ff ff 	callq	-5632 <.plt+0x70>

submitr:
  402280:	41 57 	pushq	%r15
  402282:	41 56 	pushq	%r14
  402284:	41 55 	pushq	%r13
  402286:	41 54 	pushq	%r12
  402288:	55 	pushq	%rbp
  402289:	53 	pushq	%rbx
  40228a:	48 81 ec 58 a0 00 00 	subq	$41048, %rsp
  402291:	48 89 7c 24 08 	movq	%rdi, 8(%rsp)
  402296:	41 89 f4 	movl	%esi, %r12d
  402299:	49 89 d7 	movq	%rdx, %r15
  40229c:	49 89 ce 	movq	%rcx, %r14
  40229f:	4c 89 04 24 	movq	%r8, (%rsp)
  4022a3:	4d 89 cd 	movq	%r9, %r13
  4022a6:	48 8b ac 24 90 a0 00 00 	movq	41104(%rsp), %rbp
  4022ae:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  4022b7:	48 89 84 24 48 a0 00 00 	movq	%rax, 41032(%rsp)
  4022bf:	31 c0 	xorl	%eax, %eax
  4022c1:	ba 00 00 00 00 	movl	$0, %edx
  4022c6:	be 01 00 00 00 	movl	$1, %esi
  4022cb:	bf 02 00 00 00 	movl	$2, %edi
  4022d0:	e8 3b eb ff ff 	callq	-5317 <.plt+0x200>
  4022d5:	85 c0 	testl	%eax, %eax
  4022d7:	0f 88 ff 02 00 00 	js	767 <submitr+0x35c>
  4022dd:	89 c3 	movl	%eax, %ebx
  4022df:	66 c7 44 24 10 02 00 	movw	$2, 16(%rsp)
  4022e6:	66 41 c1 cc 08 	rorw	$8, %r12w
  4022eb:	66 44 89 64 24 12 	movw	%r12w, 18(%rsp)
  4022f1:	4c 8d 64 24 10 	leaq	16(%rsp), %r12
  4022f6:	48 8d 74 24 14 	leaq	20(%rsp), %rsi
  4022fb:	48 8d 3d 6d 11 00 00 	leaq	4461(%rip), %rdi
  402302:	b8 00 00 00 00 	movl	$0, %eax
  402307:	e8 44 ea ff ff 	callq	-5564 <.plt+0x140>
  40230c:	ba 10 00 00 00 	movl	$16, %edx
  402311:	4c 89 e6 	movq	%r12, %rsi
  402314:	89 df 	movl	%ebx, %edi
  402316:	e8 c5 ea ff ff 	callq	-5435 <.plt+0x1d0>
  40231b:	85 c0 	testl	%eax, %eax
  40231d:	0f 88 05 03 00 00 	js	773 <submitr+0x3a8>
  402323:	48 c7 c6 ff ff ff ff 	movq	$-1, %rsi
  40232a:	b8 00 00 00 00 	movl	$0, %eax
  40232f:	48 89 f1 	movq	%rsi, %rcx
  402332:	4c 89 ef 	movq	%r13, %rdi
  402335:	f2 ae 	repne		scasb	%es:(%rdi), %al
  402337:	48 89 ca 	movq	%rcx, %rdx
  40233a:	48 f7 d2 	notq	%rdx
  40233d:	48 89 f1 	movq	%rsi, %rcx
  402340:	4c 89 ff 	movq	%r15, %rdi
  402343:	f2 ae 	repne		scasb	%es:(%rdi), %al
  402345:	48 f7 d1 	notq	%rcx
  402348:	49 89 c8 	movq	%rcx, %r8
  40234b:	48 89 f1 	movq	%rsi, %rcx
  40234e:	4c 89 f7 	movq	%r14, %rdi
  402351:	f2 ae 	repne		scasb	%es:(%rdi), %al
  402353:	48 f7 d1 	notq	%rcx
  402356:	4d 8d 44 08 fe 	leaq	-2(%r8,%rcx), %r8
  40235b:	48 89 f1 	movq	%rsi, %rcx
  40235e:	48 8b 3c 24 	movq	(%rsp), %rdi
  402362:	f2 ae 	repne		scasb	%es:(%rdi), %al
  402364:	48 89 c8 	movq	%rcx, %rax
  402367:	48 f7 d0 	notq	%rax
  40236a:	49 8d 4c 00 ff 	leaq	-1(%r8,%rax), %rcx
  40236f:	48 8d 44 52 fd 	leaq	-3(%rdx,%rdx,2), %rax
  402374:	48 8d 84 01 80 00 00 00 	leaq	128(%rcx,%rax), %rax
  40237c:	48 3d 00 20 00 00 	cmpq	$8192, %rax
  402382:	0f 87 fa 02 00 00 	ja	762 <submitr+0x402>
  402388:	48 8d b4 24 40 40 00 00 	leaq	16448(%rsp), %rsi
  402390:	b9 00 04 00 00 	movl	$1024, %ecx
  402395:	b8 00 00 00 00 	movl	$0, %eax
  40239a:	48 89 f7 	movq	%rsi, %rdi
  40239d:	f3 48 ab 	rep		stosq	%rax, %es:(%rdi)
  4023a0:	4c 89 ef 	movq	%r13, %rdi
  4023a3:	e8 c5 fd ff ff 	callq	-571 <urlencode>
  4023a8:	85 c0 	testl	%eax, %eax
  4023aa:	0f 88 45 03 00 00 	js	837 <submitr+0x475>
  4023b0:	4c 8d a4 24 40 20 00 00 	leaq	8256(%rsp), %r12
  4023b8:	ff 74 24 08 	pushq	8(%rsp)
  4023bc:	48 8d 84 24 48 40 00 00 	leaq	16456(%rsp), %rax
  4023c4:	50 	pushq	%rax
  4023c5:	4d 89 f9 	movq	%r15, %r9
  4023c8:	4d 89 f0 	movq	%r14, %r8
  4023cb:	48 8d 0d 26 10 00 00 	leaq	4134(%rip), %rcx
  4023d2:	ba 00 20 00 00 	movl	$8192, %edx
  4023d7:	be 01 00 00 00 	movl	$1, %esi
  4023dc:	4c 89 e7 	movq	%r12, %rdi
  4023df:	b8 00 00 00 00 	movl	$0, %eax
  4023e4:	e8 17 ea ff ff 	callq	-5609 <.plt+0x1f0>
  4023e9:	48 c7 c1 ff ff ff ff 	movq	$-1, %rcx
  4023f0:	b8 00 00 00 00 	movl	$0, %eax
  4023f5:	4c 89 e7 	movq	%r12, %rdi
  4023f8:	f2 ae 	repne		scasb	%es:(%rdi), %al
  4023fa:	48 89 ca 	movq	%rcx, %rdx
  4023fd:	48 f7 d2 	notq	%rdx
  402400:	48 8d 52 ff 	leaq	-1(%rdx), %rdx
  402404:	4c 89 e6 	movq	%r12, %rsi
  402407:	89 df 	movl	%ebx, %edi
  402409:	e8 d2 fb ff ff 	callq	-1070 <rio_writen>
  40240e:	48 83 c4 10 	addq	$16, %rsp
  402412:	48 85 c0 	testq	%rax, %rax
  402415:	0f 88 65 03 00 00 	js	869 <submitr+0x500>
  40241b:	4c 8d 64 24 20 	leaq	32(%rsp), %r12
  402420:	89 de 	movl	%ebx, %esi
  402422:	4c 89 e7 	movq	%r12, %rdi
  402425:	e8 74 fb ff ff 	callq	-1164 <rio_readinitb>
  40242a:	48 8d b4 24 40 20 00 00 	leaq	8256(%rsp), %rsi
  402432:	ba 00 20 00 00 	movl	$8192, %edx
  402437:	4c 89 e7 	movq	%r12, %rdi
  40243a:	e8 8a fc ff ff 	callq	-886 <rio_readlineb>
  40243f:	48 85 c0 	testq	%rax, %rax
  402442:	0f 8e a7 03 00 00 	jle	935 <submitr+0x56f>
  402448:	48 8d 94 24 40 60 00 00 	leaq	24640(%rsp), %rdx
  402450:	41 be 00 00 00 00 	movl	$0, %r14d
  402456:	b9 00 04 00 00 	movl	$1024, %ecx
  40245b:	48 89 d7 	movq	%rdx, %rdi
  40245e:	4c 89 f0 	movq	%r14, %rax
  402461:	f3 48 ab 	rep		stosq	%rax, %es:(%rdi)
  402464:	48 8b 84 24 40 20 00 00 	movq	8256(%rsp), %rax
  40246c:	48 89 84 24 40 60 00 00 	movq	%rax, 24640(%rsp)
  402474:	c6 84 24 3f 20 00 00 00 	movb	$0, 8255(%rsp)
  40247c:	48 8d bc 24 3c 20 00 00 	leaq	8252(%rsp), %rdi
  402484:	4c 8d ac 24 40 20 00 00 	leaq	8256(%rsp), %r13
  40248c:	0f b7 84 24 49 20 00 00 	movzwl	8265(%rsp), %eax
  402494:	66 89 84 24 3c 20 00 00 	movw	%ax, 8252(%rsp)
  40249c:	0f b6 84 24 4b 20 00 00 	movzbl	8267(%rsp), %eax
  4024a4:	88 84 24 3e 20 00 00 	movb	%al, 8254(%rsp)
  4024ab:	ba 0a 00 00 00 	movl	$10, %edx
  4024b0:	be 00 00 00 00 	movl	$0, %esi
  4024b5:	e8 66 e8 ff ff 	callq	-6042 <.plt+0x110>
  4024ba:	49 89 c4 	movq	%rax, %r12
  4024bd:	4c 8d 84 24 40 80 00 00 	leaq	32832(%rsp), %r8
  4024c5:	b9 00 04 00 00 	movl	$1024, %ecx
  4024ca:	4c 89 c7 	movq	%r8, %rdi
  4024cd:	4c 89 f0 	movq	%r14, %rax
  4024d0:	f3 48 ab 	rep		stosq	%rax, %es:(%rdi)
  4024d3:	48 8d bc 24 33 20 00 00 	leaq	8243(%rsp), %rdi
  4024db:	48 c7 c1 ff ff ff ff 	movq	$-1, %rcx
  4024e2:	f2 ae 	repne		scasb	%es:(%rdi), %al
  4024e4:	48 89 ca 	movq	%rcx, %rdx
  4024e7:	48 f7 d2 	notq	%rdx
  4024ea:	48 8d 52 ff 	leaq	-1(%rdx), %rdx
  4024ee:	49 8d 75 0d 	leaq	13(%r13), %rsi
  4024f2:	b9 00 20 00 00 	movl	$8192, %ecx
  4024f7:	4c 89 c7 	movq	%r8, %rdi
  4024fa:	e8 11 e8 ff ff 	callq	-6127 <.plt+0x100>
  4024ff:	48 8d b4 24 40 20 00 00 	leaq	8256(%rsp), %rsi
  402507:	b9 03 00 00 00 	movl	$3, %ecx
  40250c:	48 8d 3d 70 0f 00 00 	leaq	3952(%rip), %rdi
  402513:	f3 a6 	rep		cmpsb	%es:(%rdi), (%rsi)
  402515:	0f 97 c0 	seta	%al
  402518:	1c 00 	sbbb	$0, %al
  40251a:	84 c0 	testb	%al, %al
  40251c:	0f 84 4b 03 00 00 	je	843 <submitr+0x5ed>
  402522:	48 8d b4 24 40 20 00 00 	leaq	8256(%rsp), %rsi
  40252a:	48 8d 7c 24 20 	leaq	32(%rsp), %rdi
  40252f:	ba 00 20 00 00 	movl	$8192, %edx
  402534:	e8 90 fb ff ff 	callq	-1136 <rio_readlineb>
  402539:	48 85 c0 	testq	%rax, %rax
  40253c:	7f c1 	jg	-63 <submitr+0x27f>
  40253e:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  402548:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  402552:	48 89 45 00 	movq	%rax, (%rbp)
  402556:	48 89 55 08 	movq	%rdx, 8(%rbp)
  40255a:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402564:	48 ba 72 65 61 64 20 68 65 61 	movabsq	$7018130082659132786, %rdx
  40256e:	48 89 45 10 	movq	%rax, 16(%rbp)
  402572:	48 89 55 18 	movq	%rdx, 24(%rbp)
  402576:	48 b8 64 65 72 73 20 66 72 6f 	movabsq	$8030593375116879204, %rax
  402580:	48 ba 6d 20 74 68 65 20 72 65 	movabsq	$7309940765091962989, %rdx
  40258a:	48 89 45 20 	movq	%rax, 32(%rbp)
  40258e:	48 89 55 28 	movq	%rdx, 40(%rbp)
  402592:	48 b8 73 75 6c 74 20 73 65 72 	movabsq	$8243121276200973683, %rax
  40259c:	48 89 45 30 	movq	%rax, 48(%rbp)
  4025a0:	c7 45 38 76 65 72 00 	movl	$7497078, 56(%rbp)
  4025a7:	89 df 	movl	%ebx, %edi
  4025a9:	e8 12 e7 ff ff 	callq	-6382 <.plt+0xb0>
  4025ae:	b8 ff ff ff ff 	movl	$4294967295, %eax
  4025b3:	48 8b 9c 24 48 a0 00 00 	movq	41032(%rsp), %rbx
  4025bb:	64 48 33 1c 25 28 00 00 00 	xorq	%fs:40, %rbx
  4025c4:	0f 85 14 04 00 00 	jne	1044 <submitr+0x75e>
  4025ca:	48 81 c4 58 a0 00 00 	addq	$41048, %rsp
  4025d1:	5b 	popq	%rbx
  4025d2:	5d 	popq	%rbp
  4025d3:	41 5c 	popq	%r12
  4025d5:	41 5d 	popq	%r13
  4025d7:	41 5e 	popq	%r14
  4025d9:	41 5f 	popq	%r15
  4025db:	c3 	retq
  4025dc:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  4025e6:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  4025f0:	48 89 45 00 	movq	%rax, (%rbp)
  4025f4:	48 89 55 08 	movq	%rdx, 8(%rbp)
  4025f8:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402602:	48 ba 63 72 65 61 74 65 20 73 	movabsq	$8295742064141103715, %rdx
  40260c:	48 89 45 10 	movq	%rax, 16(%rbp)
  402610:	48 89 55 18 	movq	%rdx, 24(%rbp)
  402614:	c7 45 20 6f 63 6b 65 	movl	$1701536623, 32(%rbp)
  40261b:	66 c7 45 24 74 00 	movw	$116, 36(%rbp)
  402621:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402626:	eb 8b 	jmp	-117 <submitr+0x333>
  402628:	48 b8 45 72 72 6f 72 3a 20 55 	movabsq	$6133966955649069637, %rax
  402632:	48 ba 6e 61 62 6c 65 20 74 6f 	movabsq	$8031079655490609518, %rdx
  40263c:	48 89 45 00 	movq	%rax, (%rbp)
  402640:	48 89 55 08 	movq	%rdx, 8(%rbp)
  402644:	48 b8 20 63 6f 6e 6e 65 63 74 	movabsq	$8386658456067597088, %rax
  40264e:	48 ba 20 74 6f 20 74 68 65 20 	movabsq	$2334386829831140384, %rdx
  402658:	48 89 45 10 	movq	%rax, 16(%rbp)
  40265c:	48 89 55 18 	movq	%rdx, 24(%rbp)
  402660:	c7 45 20 73 65 72 76 	movl	$1987208563, 32(%rbp)
  402667:	66 c7 45 24 65 72 	movw	$29285, 36(%rbp)
  40266d:	c6 45 26 00 	movb	$0, 38(%rbp)
  402671:	89 df 	movl	%ebx, %edi
  402673:	e8 48 e6 ff ff 	callq	-6584 <.plt+0xb0>
  402678:	b8 ff ff ff ff 	movl	$4294967295, %eax
  40267d:	e9 31 ff ff ff 	jmp	-207 <submitr+0x333>
  402682:	48 b8 45 72 72 6f 72 3a 20 52 	movabsq	$5917794173535285829, %rax
  40268c:	48 ba 65 73 75 6c 74 20 73 74 	movabsq	$8391086215129297765, %rdx
  402696:	48 89 45 00 	movq	%rax, (%rbp)
  40269a:	48 89 55 08 	movq	%rdx, 8(%rbp)
  40269e:	48 b8 72 69 6e 67 20 74 6f 6f 	movabsq	$8029764343147948402, %rax
  4026a8:	48 ba 20 6c 61 72 67 65 2e 20 	movabsq	$2318902353117408288, %rdx
  4026b2:	48 89 45 10 	movq	%rax, 16(%rbp)
  4026b6:	48 89 55 18 	movq	%rdx, 24(%rbp)
  4026ba:	48 b8 49 6e 63 72 65 61 73 65 	movabsq	$7310293708491157065, %rax
  4026c4:	48 ba 20 53 55 42 4d 49 54 52 	movabsq	$5932447205327983392, %rdx
  4026ce:	48 89 45 20 	movq	%rax, 32(%rbp)
  4026d2:	48 89 55 28 	movq	%rdx, 40(%rbp)
  4026d6:	48 b8 5f 4d 41 58 42 55 46 00 	movabsq	$19796991806623071, %rax
  4026e0:	48 89 45 30 	movq	%rax, 48(%rbp)
  4026e4:	89 df 	movl	%ebx, %edi
  4026e6:	e8 d5 e5 ff ff 	callq	-6699 <.plt+0xb0>
  4026eb:	b8 ff ff ff ff 	movl	$4294967295, %eax
  4026f0:	e9 be fe ff ff 	jmp	-322 <submitr+0x333>
  4026f5:	48 b8 45 72 72 6f 72 3a 20 52 	movabsq	$5917794173535285829, %rax
  4026ff:	48 ba 65 73 75 6c 74 20 73 74 	movabsq	$8391086215129297765, %rdx
  402709:	48 89 45 00 	movq	%rax, (%rbp)
  40270d:	48 89 55 08 	movq	%rdx, 8(%rbp)
  402711:	48 b8 72 69 6e 67 20 63 6f 6e 	movabsq	$7957688057412348274, %rax
  40271b:	48 ba 74 61 69 6e 73 20 61 6e 	movabsq	$7953674097058734452, %rdx
  402725:	48 89 45 10 	movq	%rax, 16(%rbp)
  402729:	48 89 55 18 	movq	%rdx, 24(%rbp)
  40272d:	48 b8 20 69 6c 6c 65 67 61 6c 	movabsq	$7809636914145552672, %rax
  402737:	48 ba 20 6f 72 20 75 6e 70 72 	movabsq	$8246212367049977632, %rdx
  402741:	48 89 45 20 	movq	%rax, 32(%rbp)
  402745:	48 89 55 28 	movq	%rdx, 40(%rbp)
  402749:	48 b8 69 6e 74 61 62 6c 65 20 	movabsq	$2334391151659085417, %rax
  402753:	48 ba 63 68 61 72 61 63 74 65 	movabsq	$7310577365311121507, %rdx
  40275d:	48 89 45 30 	movq	%rax, 48(%rbp)
  402761:	48 89 55 38 	movq	%rdx, 56(%rbp)
  402765:	66 c7 45 40 72 2e 	movw	$11890, 64(%rbp)
  40276b:	c6 45 42 00 	movb	$0, 66(%rbp)
  40276f:	89 df 	movl	%ebx, %edi
  402771:	e8 4a e5 ff ff 	callq	-6838 <.plt+0xb0>
  402776:	b8 ff ff ff ff 	movl	$4294967295, %eax
  40277b:	e9 33 fe ff ff 	jmp	-461 <submitr+0x333>
  402780:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  40278a:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  402794:	48 89 45 00 	movq	%rax, (%rbp)
  402798:	48 89 55 08 	movq	%rdx, 8(%rbp)
  40279c:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  4027a6:	48 ba 77 72 69 74 65 20 74 6f 	movabsq	$8031079655625290359, %rdx
  4027b0:	48 89 45 10 	movq	%rax, 16(%rbp)
  4027b4:	48 89 55 18 	movq	%rdx, 24(%rbp)
  4027b8:	48 b8 20 74 68 65 20 72 65 73 	movabsq	$8315177770475353120, %rax
  4027c2:	48 ba 75 6c 74 20 73 65 72 76 	movabsq	$8534995788960656501, %rdx
  4027cc:	48 89 45 20 	movq	%rax, 32(%rbp)
  4027d0:	48 89 55 28 	movq	%rdx, 40(%rbp)
  4027d4:	66 c7 45 30 65 72 	movw	$29285, 48(%rbp)
  4027da:	c6 45 32 00 	movb	$0, 50(%rbp)
  4027de:	89 df 	movl	%ebx, %edi
  4027e0:	e8 db e4 ff ff 	callq	-6949 <.plt+0xb0>
  4027e5:	b8 ff ff ff ff 	movl	$4294967295, %eax
  4027ea:	e9 c4 fd ff ff 	jmp	-572 <submitr+0x333>
  4027ef:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  4027f9:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  402803:	48 89 45 00 	movq	%rax, (%rbp)
  402807:	48 89 55 08 	movq	%rdx, 8(%rbp)
  40280b:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402815:	48 ba 72 65 61 64 20 66 69 72 	movabsq	$8244232882187494770, %rdx
  40281f:	48 89 45 10 	movq	%rax, 16(%rbp)
  402823:	48 89 55 18 	movq	%rdx, 24(%rbp)
  402827:	48 b8 73 74 20 68 65 61 64 65 	movabsq	$7306071583668335731, %rax
  402831:	48 ba 72 20 66 72 6f 6d 20 72 	movabsq	$8223693245006618738, %rdx
  40283b:	48 89 45 20 	movq	%rax, 32(%rbp)
  40283f:	48 89 55 28 	movq	%rdx, 40(%rbp)
  402843:	48 b8 65 73 75 6c 74 20 73 65 	movabsq	$7310222304560378725, %rax
  40284d:	48 89 45 30 	movq	%rax, 48(%rbp)
  402851:	c7 45 38 72 76 65 72 	movl	$1919252082, 56(%rbp)
  402858:	c6 45 3c 00 	movb	$0, 60(%rbp)
  40285c:	89 df 	movl	%ebx, %edi
  40285e:	e8 5d e4 ff ff 	callq	-7075 <.plt+0xb0>
  402863:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402868:	e9 46 fd ff ff 	jmp	-698 <submitr+0x333>
  40286d:	48 8d b4 24 40 20 00 00 	leaq	8256(%rsp), %rsi
  402875:	48 8d 7c 24 20 	leaq	32(%rsp), %rdi
  40287a:	ba 00 20 00 00 	movl	$8192, %edx
  40287f:	e8 45 f8 ff ff 	callq	-1979 <rio_readlineb>
  402884:	48 85 c0 	testq	%rax, %rax
  402887:	0f 8e 91 00 00 00 	jle	145 <submitr+0x69e>
  40288d:	41 81 fc c8 00 00 00 	cmpl	$200, %r12d
  402894:	0f 85 08 01 00 00 	jne	264 <submitr+0x722>
  40289a:	48 8d b4 24 40 20 00 00 	leaq	8256(%rsp), %rsi
  4028a2:	48 89 ef 	movq	%rbp, %rdi
  4028a5:	e8 a6 e3 ff ff 	callq	-7258 <.plt+0x40>
  4028aa:	89 df 	movl	%ebx, %edi
  4028ac:	e8 0f e4 ff ff 	callq	-7153 <.plt+0xb0>
  4028b1:	b9 04 00 00 00 	movl	$4, %ecx
  4028b6:	48 8d 3d c0 0b 00 00 	leaq	3008(%rip), %rdi
  4028bd:	48 89 ee 	movq	%rbp, %rsi
  4028c0:	f3 a6 	rep		cmpsb	%es:(%rdi), (%rsi)
  4028c2:	0f 97 c0 	seta	%al
  4028c5:	1c 00 	sbbb	$0, %al
  4028c7:	0f be c0 	movsbl	%al, %eax
  4028ca:	85 c0 	testl	%eax, %eax
  4028cc:	0f 84 e1 fc ff ff 	je	-799 <submitr+0x333>
  4028d2:	b9 05 00 00 00 	movl	$5, %ecx
  4028d7:	48 8d 3d a3 0b 00 00 	leaq	2979(%rip), %rdi
  4028de:	48 89 ee 	movq	%rbp, %rsi
  4028e1:	f3 a6 	rep		cmpsb	%es:(%rdi), (%rsi)
  4028e3:	0f 97 c0 	seta	%al
  4028e6:	1c 00 	sbbb	$0, %al
  4028e8:	0f be c0 	movsbl	%al, %eax
  4028eb:	85 c0 	testl	%eax, %eax
  4028ed:	0f 84 c0 fc ff ff 	je	-832 <submitr+0x333>
  4028f3:	b9 03 00 00 00 	movl	$3, %ecx
  4028f8:	48 8d 3d 87 0b 00 00 	leaq	2951(%rip), %rdi
  4028ff:	48 89 ee 	movq	%rbp, %rsi
  402902:	f3 a6 	rep		cmpsb	%es:(%rdi), (%rsi)
  402904:	0f 97 c0 	seta	%al
  402907:	1c 00 	sbbb	$0, %al
  402909:	0f be c0 	movsbl	%al, %eax
  40290c:	85 c0 	testl	%eax, %eax
  40290e:	0f 84 9f fc ff ff 	je	-865 <submitr+0x333>
  402914:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402919:	e9 95 fc ff ff 	jmp	-875 <submitr+0x333>
  40291e:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  402928:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  402932:	48 89 45 00 	movq	%rax, (%rbp)
  402936:	48 89 55 08 	movq	%rdx, 8(%rbp)
  40293a:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402944:	48 ba 72 65 61 64 20 73 74 61 	movabsq	$7022364301937698162, %rdx
  40294e:	48 89 45 10 	movq	%rax, 16(%rbp)
  402952:	48 89 55 18 	movq	%rdx, 24(%rbp)
  402956:	48 b8 74 75 73 20 6d 65 73 73 	movabsq	$8319104456053716340, %rax
  402960:	48 ba 61 67 65 20 66 72 6f 6d 	movabsq	$7885647255504775009, %rdx
  40296a:	48 89 45 20 	movq	%rax, 32(%rbp)
  40296e:	48 89 55 28 	movq	%rdx, 40(%rbp)
  402972:	48 b8 20 72 65 73 75 6c 74 20 	movabsq	$2338613358215131680, %rax
  40297c:	48 89 45 30 	movq	%rax, 48(%rbp)
  402980:	c7 45 38 73 65 72 76 	movl	$1987208563, 56(%rbp)
  402987:	66 c7 45 3c 65 72 	movw	$29285, 60(%rbp)
  40298d:	c6 45 3e 00 	movb	$0, 62(%rbp)
  402991:	89 df 	movl	%ebx, %edi
  402993:	e8 28 e3 ff ff 	callq	-7384 <.plt+0xb0>
  402998:	b8 ff ff ff ff 	movl	$4294967295, %eax
  40299d:	e9 11 fc ff ff 	jmp	-1007 <submitr+0x333>
  4029a2:	4c 8d 8c 24 40 80 00 00 	leaq	32832(%rsp), %r9
  4029aa:	45 89 e0 	movl	%r12d, %r8d
  4029ad:	48 8d 0d 84 0a 00 00 	leaq	2692(%rip), %rcx
  4029b4:	48 c7 c2 ff ff ff ff 	movq	$-1, %rdx
  4029bb:	be 01 00 00 00 	movl	$1, %esi
  4029c0:	48 89 ef 	movq	%rbp, %rdi
  4029c3:	b8 00 00 00 00 	movl	$0, %eax
  4029c8:	e8 33 e4 ff ff 	callq	-7117 <.plt+0x1f0>
  4029cd:	89 df 	movl	%ebx, %edi
  4029cf:	e8 ec e2 ff ff 	callq	-7444 <.plt+0xb0>
  4029d4:	b8 ff ff ff ff 	movl	$4294967295, %eax
  4029d9:	e9 d5 fb ff ff 	jmp	-1067 <submitr+0x333>
  4029de:	e8 9d e2 ff ff 	callq	-7523 <.plt+0x70>

init_timeout:
  4029e3:	85 ff 	testl	%edi, %edi
  4029e5:	74 28 	je	40 <init_timeout+0x2c>
  4029e7:	53 	pushq	%rbx
  4029e8:	89 fb 	movl	%edi, %ebx
  4029ea:	85 ff 	testl	%edi, %edi
  4029ec:	78 1a 	js	26 <init_timeout+0x25>
  4029ee:	48 8d 35 bb f5 ff ff 	leaq	-2629(%rip), %rsi
  4029f5:	bf 0e 00 00 00 	movl	$14, %edi
  4029fa:	e8 e1 e2 ff ff 	callq	-7455 <.plt+0xd0>
  4029ff:	89 df 	movl	%ebx, %edi
  402a01:	e8 aa e2 ff ff 	callq	-7510 <.plt+0xa0>
  402a06:	5b 	popq	%rbx
  402a07:	c3 	retq
  402a08:	bb 00 00 00 00 	movl	$0, %ebx
  402a0d:	eb df 	jmp	-33 <init_timeout+0xb>
  402a0f:	f3 c3 	rep		retq

init_driver:
  402a11:	41 54 	pushq	%r12
  402a13:	55 	pushq	%rbp
  402a14:	53 	pushq	%rbx
  402a15:	48 83 ec 20 	subq	$32, %rsp
  402a19:	49 89 fc 	movq	%rdi, %r12
  402a1c:	64 48 8b 04 25 28 00 00 00 	movq	%fs:40, %rax
  402a25:	48 89 44 24 18 	movq	%rax, 24(%rsp)
  402a2a:	31 c0 	xorl	%eax, %eax
  402a2c:	be 01 00 00 00 	movl	$1, %esi
  402a31:	bf 0d 00 00 00 	movl	$13, %edi
  402a36:	e8 a5 e2 ff ff 	callq	-7515 <.plt+0xd0>
  402a3b:	be 01 00 00 00 	movl	$1, %esi
  402a40:	bf 1d 00 00 00 	movl	$29, %edi
  402a45:	e8 96 e2 ff ff 	callq	-7530 <.plt+0xd0>
  402a4a:	be 01 00 00 00 	movl	$1, %esi
  402a4f:	bf 1d 00 00 00 	movl	$29, %edi
  402a54:	e8 87 e2 ff ff 	callq	-7545 <.plt+0xd0>
  402a59:	ba 00 00 00 00 	movl	$0, %edx
  402a5e:	be 01 00 00 00 	movl	$1, %esi
  402a63:	bf 02 00 00 00 	movl	$2, %edi
  402a68:	e8 a3 e3 ff ff 	callq	-7261 <.plt+0x200>
  402a6d:	85 c0 	testl	%eax, %eax
  402a6f:	0f 88 a3 00 00 00 	js	163 <init_driver+0x107>
  402a75:	89 c3 	movl	%eax, %ebx
  402a77:	48 8d 3d 0b 0a 00 00 	leaq	2571(%rip), %rdi
  402a7e:	e8 6d e2 ff ff 	callq	-7571 <.plt+0xe0>
  402a83:	48 85 c0 	testq	%rax, %rax
  402a86:	0f 84 df 00 00 00 	je	223 <init_driver+0x15a>
  402a8c:	48 89 e5 	movq	%rsp, %rbp
  402a8f:	48 c7 44 24 02 00 00 00 00 	movq	$0, 2(%rsp)
  402a98:	c7 45 0a 00 00 00 00 	movl	$0, 10(%rbp)
  402a9f:	66 c7 45 0e 00 00 	movw	$0, 14(%rbp)
  402aa5:	66 c7 04 24 02 00 	movw	$2, (%rsp)
  402aab:	48 63 50 14 	movslq	20(%rax), %rdx
  402aaf:	48 8b 40 18 	movq	24(%rax), %rax
  402ab3:	48 8b 30 	movq	(%rax), %rsi
  402ab6:	48 8d 7d 04 	leaq	4(%rbp), %rdi
  402aba:	b9 0c 00 00 00 	movl	$12, %ecx
  402abf:	e8 3c e2 ff ff 	callq	-7620 <.plt+0xf0>
  402ac4:	66 c7 44 24 02 c7 3d 	movw	$15815, 2(%rsp)
  402acb:	ba 10 00 00 00 	movl	$16, %edx
  402ad0:	48 89 ee 	movq	%rbp, %rsi
  402ad3:	89 df 	movl	%ebx, %edi
  402ad5:	e8 06 e3 ff ff 	callq	-7418 <.plt+0x1d0>
  402ada:	85 c0 	testl	%eax, %eax
  402adc:	0f 88 fb 00 00 00 	js	251 <init_driver+0x1cc>
  402ae2:	89 df 	movl	%ebx, %edi
  402ae4:	e8 d7 e1 ff ff 	callq	-7721 <.plt+0xb0>
  402ae9:	66 41 c7 04 24 4f 4b 	movw	$19279, (%r12)
  402af0:	41 c6 44 24 02 00 	movb	$0, 2(%r12)
  402af6:	b8 00 00 00 00 	movl	$0, %eax
  402afb:	48 8b 4c 24 18 	movq	24(%rsp), %rcx
  402b00:	64 48 33 0c 25 28 00 00 00 	xorq	%fs:40, %rcx
  402b09:	0f 85 28 01 00 00 	jne	296 <init_driver+0x226>
  402b0f:	48 83 c4 20 	addq	$32, %rsp
  402b13:	5b 	popq	%rbx
  402b14:	5d 	popq	%rbp
  402b15:	41 5c 	popq	%r12
  402b17:	c3 	retq
  402b18:	48 b8 45 72 72 6f 72 3a 20 43 	movabsq	$4836930262966366789, %rax
  402b22:	48 ba 6c 69 65 6e 74 20 75 6e 	movabsq	$7959303600887654764, %rdx
  402b2c:	49 89 04 24 	movq	%rax, (%r12)
  402b30:	49 89 54 24 08 	movq	%rdx, 8(%r12)
  402b35:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402b3f:	48 ba 63 72 65 61 74 65 20 73 	movabsq	$8295742064141103715, %rdx
  402b49:	49 89 44 24 10 	movq	%rax, 16(%r12)
  402b4e:	49 89 54 24 18 	movq	%rdx, 24(%r12)
  402b53:	41 c7 44 24 20 6f 63 6b 65 	movl	$1701536623, 32(%r12)
  402b5c:	66 41 c7 44 24 24 74 00 	movw	$116, 36(%r12)
  402b64:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402b69:	eb 90 	jmp	-112 <init_driver+0xea>
  402b6b:	48 b8 45 72 72 6f 72 3a 20 44 	movabsq	$4908987857004294725, %rax
  402b75:	48 ba 4e 53 20 69 73 20 75 6e 	movabsq	$7959303596504273742, %rdx
  402b7f:	49 89 04 24 	movq	%rax, (%r12)
  402b83:	49 89 54 24 08 	movq	%rdx, 8(%r12)
  402b88:	48 b8 61 62 6c 65 20 74 6f 20 	movabsq	$2337214414117954145, %rax
  402b92:	48 ba 72 65 73 6f 6c 76 65 20 	movabsq	$2334402189959849330, %rdx
  402b9c:	49 89 44 24 10 	movq	%rax, 16(%r12)
  402ba1:	49 89 54 24 18 	movq	%rdx, 24(%r12)
  402ba6:	48 b8 73 65 72 76 65 72 20 61 	movabsq	$6998719601038222707, %rax
  402bb0:	49 89 44 24 20 	movq	%rax, 32(%r12)
  402bb5:	41 c7 44 24 28 64 64 72 65 	movl	$1701995620, 40(%r12)
  402bbe:	66 41 c7 44 24 2c 73 73 	movw	$29555, 44(%r12)
  402bc6:	41 c6 44 24 2e 00 	movb	$0, 46(%r12)
  402bcc:	89 df 	movl	%ebx, %edi
  402bce:	e8 ed e0 ff ff 	callq	-7955 <.plt+0xb0>
  402bd3:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402bd8:	e9 1e ff ff ff 	jmp	-226 <init_driver+0xea>
  402bdd:	48 b8 45 72 72 6f 72 3a 20 55 	movabsq	$6133966955649069637, %rax
  402be7:	48 ba 6e 61 62 6c 65 20 74 6f 	movabsq	$8031079655490609518, %rdx
  402bf1:	49 89 04 24 	movq	%rax, (%r12)
  402bf5:	49 89 54 24 08 	movq	%rdx, 8(%r12)
  402bfa:	48 b8 20 63 6f 6e 6e 65 63 74 	movabsq	$8386658456067597088, %rax
  402c04:	48 ba 20 74 6f 20 73 65 72 76 	movabsq	$8534995788960330784, %rdx
  402c0e:	49 89 44 24 10 	movq	%rax, 16(%r12)
  402c13:	49 89 54 24 18 	movq	%rdx, 24(%r12)
  402c18:	66 41 c7 44 24 20 65 72 	movw	$29285, 32(%r12)
  402c20:	41 c6 44 24 22 00 	movb	$0, 34(%r12)
  402c26:	89 df 	movl	%ebx, %edi
  402c28:	e8 93 e0 ff ff 	callq	-8045 <.plt+0xb0>
  402c2d:	b8 ff ff ff ff 	movl	$4294967295, %eax
  402c32:	e9 c4 fe ff ff 	jmp	-316 <init_driver+0xea>
  402c37:	e8 44 e0 ff ff 	callq	-8124 <.plt+0x70>

driver_post:
  402c3c:	53 	pushq	%rbx
  402c3d:	4c 89 cb 	movq	%r9, %rbx
  402c40:	45 85 c0 	testl	%r8d, %r8d
  402c43:	75 18 	jne	24 <driver_post+0x21>
  402c45:	48 85 ff 	testq	%rdi, %rdi
  402c48:	74 05 	je	5 <driver_post+0x13>
  402c4a:	80 3f 00 	cmpb	$0, (%rdi)
  402c4d:	75 37 	jne	55 <driver_post+0x4a>
  402c4f:	66 c7 03 4f 4b 	movw	$19279, (%rbx)
  402c54:	c6 43 02 00 	movb	$0, 2(%rbx)
  402c58:	44 89 c0 	movl	%r8d, %eax
  402c5b:	5b 	popq	%rbx
  402c5c:	c3 	retq
  402c5d:	48 89 ca 	movq	%rcx, %rdx
  402c60:	48 8d 35 39 08 00 00 	leaq	2105(%rip), %rsi
  402c67:	bf 01 00 00 00 	movl	$1, %edi
  402c6c:	b8 00 00 00 00 	movl	$0, %eax
  402c71:	e8 1a e1 ff ff 	callq	-7910 <.plt+0x180>
  402c76:	66 c7 03 4f 4b 	movw	$19279, (%rbx)
  402c7b:	c6 43 02 00 	movb	$0, 2(%rbx)
  402c7f:	b8 00 00 00 00 	movl	$0, %eax
  402c84:	eb d5 	jmp	-43 <driver_post+0x1f>
  402c86:	48 83 ec 08 	subq	$8, %rsp
  402c8a:	41 51 	pushq	%r9
  402c8c:	49 89 c9 	movq	%rcx, %r9
  402c8f:	49 89 d0 	movq	%rdx, %r8
  402c92:	48 89 f9 	movq	%rdi, %rcx
  402c95:	48 89 f2 	movq	%rsi, %rdx
  402c98:	be 3d c7 00 00 	movl	$51005, %esi
  402c9d:	48 8d 3d e5 07 00 00 	leaq	2021(%rip), %rdi
  402ca4:	e8 d7 f5 ff ff 	callq	-2601 <submitr>
  402ca9:	48 83 c4 10 	addq	$16, %rsp
  402cad:	eb ac 	jmp	-84 <driver_post+0x1f>

check:
  402caf:	89 f8 	movl	%edi, %eax
  402cb1:	c1 e8 1c 	shrl	$28, %eax
  402cb4:	85 c0 	testl	%eax, %eax
  402cb6:	74 1d 	je	29 <check+0x26>
  402cb8:	b9 00 00 00 00 	movl	$0, %ecx
  402cbd:	83 f9 1f 	cmpl	$31, %ecx
  402cc0:	7f 0d 	jg	13 <check+0x20>
  402cc2:	89 f8 	movl	%edi, %eax
  402cc4:	d3 e8 	shrl	%cl, %eax
  402cc6:	3c 0a 	cmpb	$10, %al
  402cc8:	74 11 	je	17 <check+0x2c>
  402cca:	83 c1 08 	addl	$8, %ecx
  402ccd:	eb ee 	jmp	-18 <check+0xe>
  402ccf:	b8 01 00 00 00 	movl	$1, %eax
  402cd4:	c3 	retq
  402cd5:	b8 00 00 00 00 	movl	$0, %eax
  402cda:	c3 	retq
  402cdb:	b8 00 00 00 00 	movl	$0, %eax
  402ce0:	c3 	retq

gencookie:
  402ce1:	53 	pushq	%rbx
  402ce2:	83 c7 01 	addl	$1, %edi
  402ce5:	e8 46 df ff ff 	callq	-8378 <.plt+0x20>
  402cea:	e8 71 e0 ff ff 	callq	-8079 <.plt+0x150>
  402cef:	89 c3 	movl	%eax, %ebx
  402cf1:	89 c7 	movl	%eax, %edi
  402cf3:	e8 b7 ff ff ff 	callq	-73 <check>
  402cf8:	85 c0 	testl	%eax, %eax
  402cfa:	74 ee 	je	-18 <gencookie+0x9>
  402cfc:	89 d8 	movl	%ebx, %eax
  402cfe:	5b 	popq	%rbx
  402cff:	c3 	retq

__libc_csu_init:
  402d00:	41 57 	pushq	%r15
  402d02:	41 56 	pushq	%r14
  402d04:	49 89 d7 	movq	%rdx, %r15
  402d07:	41 55 	pushq	%r13
  402d09:	41 54 	pushq	%r12
  402d0b:	4c 8d 25 fe 10 20 00 	leaq	2101502(%rip), %r12
  402d12:	55 	pushq	%rbp
  402d13:	48 8d 2d fe 10 20 00 	leaq	2101502(%rip), %rbp
  402d1a:	53 	pushq	%rbx
  402d1b:	41 89 fd 	movl	%edi, %r13d
  402d1e:	49 89 f6 	movq	%rsi, %r14
  402d21:	4c 29 e5 	subq	%r12, %rbp
  402d24:	48 83 ec 08 	subq	$8, %rsp
  402d28:	48 c1 fd 03 	sarq	$3, %rbp
  402d2c:	e8 bf de ff ff 	callq	-8513 <_init>
  402d31:	48 85 ed 	testq	%rbp, %rbp
  402d34:	74 20 	je	32 <__libc_csu_init+0x56>
  402d36:	31 db 	xorl	%ebx, %ebx
  402d38:	0f 1f 84 00 00 00 00 00 	nopl	(%rax,%rax)
  402d40:	4c 89 fa 	movq	%r15, %rdx
  402d43:	4c 89 f6 	movq	%r14, %rsi
  402d46:	44 89 ef 	movl	%r13d, %edi
  402d49:	41 ff 14 dc 	callq	*(%r12,%rbx,8)
  402d4d:	48 83 c3 01 	addq	$1, %rbx
  402d51:	48 39 dd 	cmpq	%rbx, %rbp
  402d54:	75 ea 	jne	-22 <__libc_csu_init+0x40>
  402d56:	48 83 c4 08 	addq	$8, %rsp
  402d5a:	5b 	popq	%rbx
  402d5b:	5d 	popq	%rbp
  402d5c:	41 5c 	popq	%r12
  402d5e:	41 5d 	popq	%r13
  402d60:	41 5e 	popq	%r14
  402d62:	41 5f 	popq	%r15
  402d64:	c3 	retq
  402d65:	90 	nop
  402d66:	66 2e 0f 1f 84 00 00 00 00 00 	nopw	%cs:(%rax,%rax)

__libc_csu_fini:
  402d70:	f3 c3 	rep		retq
Disassembly of section .fini:
_fini:
  402d74:	48 83 ec 08 	subq	$8, %rsp
  402d78:	48 83 c4 08 	addq	$8, %rsp
  402d7c:	c3 	retq
