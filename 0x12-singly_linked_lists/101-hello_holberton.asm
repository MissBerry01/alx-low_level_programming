; My comments: I can write assembly code in any language
; File: 101-hello_holberton.asm
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.
; Auth: Julien

section .data
	msg db "Hello, Holberton", 10, 0
	fmt db "%n", 0

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
