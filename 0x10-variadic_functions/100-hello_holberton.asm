	SECTION .data
msg:	 db "Hello, Holberton", 15

	SECTION .text
	global main
main:
	mov edx, 12
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov ebx, 0
	mov eax, 1
	int 0x80
