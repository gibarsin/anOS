global _out
global _in

section .text

align 16
_out:
	push rax

	xor rax, rax
	mov rax, rdi
	
	out dx, al

	pop rax
	
	ret

_in:
	;+++xtodo
	ret