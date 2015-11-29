global loader

extern initializeKernelBinary
extern main
extern _halt

section .text

loader:
	call initializeKernelBinary	; Set up the kernel binary, and get thet stack address
	mov rsp, rax				; Set up the stack with the returned address
	call main
	call _halt