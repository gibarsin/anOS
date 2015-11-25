global _pic_set_mask
global _pic_irq_acknowledge

global _cli
global _sti

extern _out

section .text

align 16
_pic_set_mask:
	push rsi

	mov rsi, port_write_pic
	call _out

	pop rsi

	ret

align 16
_pic_irq_acknowledge:
	push rdi
	push rsi

	mov rdi, port_write_irq_acknowledge
	mov rsi, 20h
	call _out

	pop rsi
	pop rdi

	ret

align 16
_cli:
	cli
	ret

align 16
_sti:
	sti
	ret

section .data
	port_write_pic equ 0x21
	port_write_irq_acknowledge equ 0x20