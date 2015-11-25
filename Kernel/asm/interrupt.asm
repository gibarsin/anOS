global _pic_set_mask
global _pic_irq_acknowledge

global _cli
global _sti

extern _out

section .text

align 16
_pic_set_mask:
	push rbp
	mov rbp, rsp

	mov rsi, port_write_pic
	call _out

	mov rsp, rbp
	pop rbp
	ret

align 16
_pic_irq_acknowledge:
	push rdi
	push rdx

	mov rdi, port_write_irq_acknowledge
	mov rsi, 20h
	call _out

	pop rdx
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