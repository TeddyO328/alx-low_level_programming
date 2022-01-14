<<<<<<< HEAD
global main
	extern printf

	section .text
main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
message:	 db "Hello, Holberton", 0
format:		db "%s", 10, 0
=======
extern printf
	section .data
msg:	 db "Hello, Holberton", 0
fmt:	 db "%s", 10, 0

	section .text
	global main
main:
	push rbp
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
