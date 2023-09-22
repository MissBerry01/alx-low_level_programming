section .data
	msg db "Hello, Holberton", 10, 0
	fmt db "%s", 0

section .text
    global main

	extern printf

main:
	push rbp
	mov rdi, msg
	mov rax, 0
	call printf
	pop rbp

	; Exit the program
	mov rax, 60
	xor rdi, rdi
	syscall
