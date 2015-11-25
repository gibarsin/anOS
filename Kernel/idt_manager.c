#include <idt_manager.h>
#include <idt.h>
#include <idt_handlers.h>
#include <interrupt.h>

#define IDT_ENTRY_TIMER_TICK	0x20
#define IDT_ENTRY_KEYBOARD		0x21
#define IDT_ENTRY_SYS_CALL		0x80

#define IDT_FLAGS_TIMER_TICK	GATE_INTERRUPT
#define IDT_FLAGS_KEYBOARD		GATE_INTERRUPT
#define IDT_FLAGS_SYS_CALL		GATE_TRAP

void manager_idt_initialize() {
	idt_initialize();
	
	idt_setup_descriptor(IDT_ENTRY_TIMER_TICK, (uint64_t) _idt_handler_timer_tick,GDT_SEGMENT_CODE, IDT_FLAGS_TIMER_TICK);
	idt_setup_descriptor(IDT_ENTRY_KEYBOARD, (uint64_t) _idt_handler_keyboard,GDT_SEGMENT_CODE, IDT_FLAGS_KEYBOARD);
	idt_setup_descriptor(IDT_ENTRY_SYS_CALL, (uint64_t) _idt_handler_sys_call,GDT_SEGMENT_CODE, IDT_FLAGS_SYS_CALL);
}

void manager_idt_pic_mask(uint8_t pic_mask) {
	_pic_set_mask(pic_mask);
}