        global    nasm_hello_world
        section   .text
nasm_hello_world:
        mov rax, 1              ;; sys_write - see http://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/
        mov rdi, 1              ;; stdout file handle is 1, by convention
        mov rsi, message        ;; the message we want to print
        mov rdx, 13             ;; print 13 characters of data
        syscall
        ret
message:
        db        "NASM Rocks!", 0xA, 0xD