

INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:DWORD, p2:DWORD
    mov esi,p1
    mov edi,p2
    mov ecx,10
    iteration:
    mov eax,0
    mov eax,[esi]
    cmp eax,0
    jnz incerement
    back:
    add esi,4
    loop iteration

    ret
    incerement:
    mov ebx,[edi]
    add ebx,1
    mov [edi],ebx
    jmp back
    
    ret
asmfunc ENDP
end