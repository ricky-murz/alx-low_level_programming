section .data
    hello db 'Hello, Holberton', 0x0A ; Null-terminated string with newline
    format db "%s", 0               ; Format string for printf

section .text
    global main
    extern printf

main:
    ; Prepare the arguments and call printf
    mov rdi, format    ; Format string
    mov rsi, hello     ; Pointer to the string to print
    call printf

    ; Exit the program
    mov eax, 0         ; Return code 0
    ret

