;nasm -felf64 code.asm && gcc code.o && ./a.out

SECTION .data
    message1: db "Primeiro numero: ",0
    message1Len: equ $-message1
    message2: db "Segundo numero: ",0
    message2Len: equ $-message2
    message3: db "The numbers are:", 0
    formatin: db "%d",0
    formatout: db "Maior número: %d",10,0
    integer_1: times 4 db 0
    integer_2: times 4 db 0

SECTION .text
    global _start
    global main
    extern scanf
    extern printf

main:
    push rbx

    mov eax, 4
    mov ebx, 1
    mov ecx, message1
    mov edx, message1Len
    int 80h

    mov rdi, formatin
    mov rsi, integer_1
    mov al, 0
    call scanf

    mov eax, 4
    mov ebx, 1
    mov ecx, message2
    mov edx, message2Len
    int 80h

    mov rdi, formatin
    mov rsi, integer_2
    mov al, 0
    call scanf

    mov ebx, [integer_1]
    cmp ebx, [integer_2]
    jge resultado
    
    maior2:
        mov ebx, [integer_2]
    
    resultado:
        mov rdi, formatout
        mov esi, ebx
        xor eax, eax
        call printf
        inc ebx
    
    fim:
        pop rbx
        mov rax,0

ret