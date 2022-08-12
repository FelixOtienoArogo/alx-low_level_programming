section .data
	text1 db "Hello, Holberton",0xA, 0
	fmt db "%s",10,0

section .text
	global main
	extern printf		;printf(rdi, rsi)
main:
_start:
	mov rdx, text1
	mov rsi, 0
	mov rdi, text1
	mov rax,0
	call printf wrt ..plt

	mov rbx,0
	xor rax, 1
	int 0x80
