section .data
    hello_msg db 'Hello, Holberton', 0xA ; Add a newline character

section .text
    global _start

_start:
    ; Use the write system call (syscall number 1) to print the message and newline
    mov rax, 1            ; syscall number 1 (write)
    mov rdi, 1            ; file descriptor 1 (stdout)
    mov rsi, hello_msg    ; pointer to the message
    mov rdx, 19           ; message length (number of bytes to write)
    syscall

    ; Use the exit system call (syscall number 60) to terminate the program
    mov rax, 60           ; syscall number 60 (exit)
    xor rdi, rdi          ; exit status 0
    syscall

