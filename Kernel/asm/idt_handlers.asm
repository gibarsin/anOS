global _idt_handler_timer_tick
global _idt_handler_keyboard
global _idt_handler_sys_call

extern _pic_irq_acknowledge

section .text

align 16
_idt_handler_timer_tick:

	; C timer tick handler

	call _pic_irq_acknowledge

	iretq

align 16
_idt_handler_keyboard:
	xor rax, rax; Clean the rax registry

	in al, port_read_keyboard

	;in al, 0x60

	; C keyboard handler

	iretq

align 16
_idt_handler_sys_call:
	iretq

section .data
	port_read_keyboard equ 0x60