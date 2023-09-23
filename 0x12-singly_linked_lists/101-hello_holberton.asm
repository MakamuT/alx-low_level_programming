section .data
	hello_msg db "Hello, Holberton",0x0A,0 ;

section .text
	global main
	extern printf
main:
sub rsp, 8 ;
mov rdi, hello_msg ;
call printf ;
add rsi, 8 ;
mov rax, 60 ;
xor rdi, rdi ;
syscall

section .bss
