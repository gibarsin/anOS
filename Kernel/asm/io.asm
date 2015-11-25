global _out
global _in

section .text

align 16
_out:
	push rax
	push rdx

	xor rax, rax; clear rax
	
	mov rax, rdi; copy value (1st parameter)
	mov rdx, rsi; copy port (2nd parameter)
	out dx, al
	
	pop rdx
	pop rax

	ret

align 16
_in:
	push rdx
	
	xor rax, rax; clear rax
	
	mov rdx, rdi
	in al, dx; save value

	pop rdx

	ret