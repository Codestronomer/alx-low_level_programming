SECTION .DATA
	msg:	db "Hello, Holberton", 0 ; Zero is Null terminator
	fmt:	db "%s", 10, 0 ; printf format string follow by a newline(10)

SECTION .TEXT
	extern printf
	global main

main:
	push rbp ; Push stack

	; Set up parameters and call the C function
	mov rdi, fmt
	mov rsi, msg
	mov rax, 0
	call printf

	pop rbp			; Pop stack

	mov rax, 0	; Exit code 0
	ret			; Return
