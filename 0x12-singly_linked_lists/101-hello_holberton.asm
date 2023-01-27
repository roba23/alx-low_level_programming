extern printf
SECTION .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

SECTION .text
        global main
main:
	push rbp
        mov rdi, fmt    ; 64-bit ABI passing order starts w/ edi, esi, ...
        mov rsi, msg    ;
        mov rax, 0      ; printf is varargs, so EAX counts # of non-integer arguments being passed
        call printf


        pop rbp      ; normal-exit code
        mov rax, 0      ; process-termination service
	ret
