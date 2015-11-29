global _halt

section .text

align 16
_halt:
	hlt
	jmp _halt