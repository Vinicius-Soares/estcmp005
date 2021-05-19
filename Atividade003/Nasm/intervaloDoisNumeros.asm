;nasm -felf64 code.asm && gcc code.o && ./a.out

SECTION .data
    message1: db "Digite o primeiro numero: ",0
    message1Len: equ $-message1
    message2: db "Digite o segundo numero: ",0
    message2Len: equ $-message1
    message3: db "The numbers are:", 0
    formatin: db "%d",0
    formatout: db "%d",10,0
    integer_1: times 4 db 0
    integer_2: times 4 db 0

SECTION .text
    global _start
    global main
    extern scanf
    extern printf

main:
    push rbx
    
    # Print msg1
    mov eax, 4
    mov ebx, 1
    mov ecx, message1
    mov edx, message1Len
    int 80h

    # Scanf num1
    mov rdi, formatin
    mov rsi, integer_1
    mov al, 0
    call scanf

    # Print msg2
    mov eax, 4
    mov ebx, 1
    mov ecx, message1
    mov edx, message1Len
    int 80h

    # Scanf num2
    mov rdi, formatin
    mov rsi, integer_2
    mov al, 0
    call scanf

    # Loop de num1 ate num2
    mov ebx, [integer_1]
    loop:
        mov rdi, formatout
        mov esi, ebx
        xor eax, eax
        call printf
        inc ebx
        cmp ebx, [integer_2]
    jle loop

    pop rbx
    mov rax,0

ret