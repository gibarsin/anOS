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

	mov rdx, port_write_pic
	call _out

	mov rsp, rbp
	pop rbp
	ret

align 16
_pic_irq_acknowledge:
	push rdx

	mov rdx, 20h
	call _out

	pop rdx

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