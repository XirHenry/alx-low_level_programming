global main
extern printf

section .data
    format db 'Hello, Holberton',0

section .text
main:
    ; Prepare the arguments for printf
    mov edi, format
    xor eax, eax

    ; Call the printf function
    call printf

    ; Return 0 from the main function
    mov eax, 0
    ret

