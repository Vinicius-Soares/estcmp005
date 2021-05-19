; nasm -f elf64 main.asm && gcc -no-pie main.o && ./a.out   
    global main
    extern printf
    extern scanf
    extern puts

section .text
main: 
        ; exibe msg fahrenheit
        mov rdi, msgFahrenheit
        call puts

        ; scanf
        mov rdi, formatin
        mov rax, 1
        sub rsp,8
        call scanf
        add rsp,8
        movsd [fahrenheit], xmm0

        ; soma fahrenheit + ap2 e / por 2
        movsd xmm0, [fahrenheit]
        subsd xmm0, [_32]
        movsd xmm1, [_9]
        divsd xmm0, xmm1
        movsd xmm1, [_5]
        mulsd xmm0, xmm1
        movsd [celsius], xmm0
fim:    
        mov rdi, msgCelsius
        movsd xmm0, [celsius]
        mov rax, 1
        sub rsp, 8
        call printf
        add rsp, 8
        ret



section .data
    msgFahrenheit: db "Temperatura em Fahrenheit", 0
    msgCelsius: db "Celsius: %.2f",10, 0
    formatin: db "%lf", 0
    fahrenheit: dq 0.0
    pf: dq 0.0
    celsius: dq 0.0
    _9: dq 9.0
    _32: dq 32.0
    _5: dq 5.0