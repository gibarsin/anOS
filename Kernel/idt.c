#include <idt.h>
#include <stdint.h>

#define IDT_START	0

#define IDT_SIZE_TABLE	256

typedef struct idt_descriptor_t idt_descriptor_t;

struct idt_descriptor_t {
	uint16_t offset_low;
	uint16_t selector;
	uint8_t zero;
	uint8_t flags;
	uint16_t offset_middle;
	uint32_t offset_high;
};

static idt_descriptor_t * idt_table;

void idt_initialize() {
	idt_table = IDT_START;
}

void idt_setup_descriptor(uint8_t entry_index, uint64_t offset, uint16_t selector, uint8_t flags) {
	/* Setting the offset */
	idt_table[entry_index].offset_low = offset & 0xFFFF;
	idt_table[entry_index].offset_middle = (offset >> 16) & 0xFFFF;
	idt_table[entry_index].offset_high = (offset >> 32) & 0xFFFFFFFF;

	idt_table[entry_index].selector = selector;

	idt_table[entry_index].flags = flags;
	
	idt_table[entry_index].zero = 0;

}