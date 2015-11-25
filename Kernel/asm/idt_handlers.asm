global _idt_handler_timer_tick
global _idt_handler_keyboard
global _idt_handler_sys_call

extern _pic_irq_acknowledge
extern handler_timer_tick
extern handler_keyboard
extern _in

extern video_print_char

section .text

align 16
_idt_handler_timer_tick:

	/* +++xdebug */
	mov rdi, 'b'
	call video_print_char

	call manager_handler_timer_tick

	call _pic_irq_acknowledge

	iretq

align 16
_idt_handler_keyboard:
	xor rax, rax; Clean the rax registry

	mov rsi, port_read_keyboard
	call _in

	mov rdi, rax
	call manager_handler_keyboard

	iretq

align 16
_idt_handler_sys_call:
	iretq

section .data
	port_read_keyboard equ 0x60