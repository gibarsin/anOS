global _idt_handler_timer_tick
global _idt_handler_keyboard
global _idt_handler_sys_call

section .text

align 16
_idt_handler_timer_tick:

	; C timer tick handler

	iretq

align 16
_idt_handler_keyboard:
	xor rax, rax; Clean the rax registry

	in al, port_read_keyboard

	; C keyboard handler

	iretq

align 16
_idt_handler_sys_call:
	iretq

section .data
	port_read_keyboard equ 0x60