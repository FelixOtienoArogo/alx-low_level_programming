section .data
	text1 db "Hello, Holberton",0xA
	fmt db "Hello, Holberton",0xA,0

section .text
	global main
	extern printf		;printf(rdi, rsi)
main:
_start:
	mov rdx, text1
	mov rsi, 0
	mov rdi, fmt
	mov rax,0
	call printf

	mov rbx,0
	xor rax, 1
	int 0x80
