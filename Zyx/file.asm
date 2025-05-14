section .data
    message db 'GET THE FREAK AWAY FROM ME! WRONG PLACE', 0Ah, 0

section .text
    global _start

%ifdef _WIN32
    extern GetStdHandle, WriteConsoleA, ExitProcess
    section .data
    stdout_handle dq -11         ; STD_OUTPUT_HANDLE = -11

_start:
    push stdout_handle
    call GetStdHandle
    push 0
    push 0
    push message
    push eax
    call WriteConsoleA
    push 0
    call ExitProcess
%else
_start:
    mov eax, 4
    mov ebx, 1
    lea ecx, [message]
    mov edx, 39
    int 0x80
    mov eax, 1
    xor ebx, ebx
    int 0x80
%endif