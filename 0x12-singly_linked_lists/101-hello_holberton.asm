section .data
    format db "Hello, Holberton", 0x0A, 0

section .text
    global main
    extern printf

main:
    mov edi, format     ; Load the address of the format string
    xor eax, eax        ; Clear RAX to indicate no XMM registers used for varargs
    call printf

    mov eax, 0          ; Set the return value to 0
    ret

