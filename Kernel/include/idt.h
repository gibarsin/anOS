#ifndef _IDT_H_
#define _IDT_H_

#include <stdint.h>

#define GDT_SEGMENT_CODE	0x08

/* Mark segment as present in memory */
#define ACS_PRESENT		0x80

/* Interrupt Gate */
#define ACS_INT_IA_32E 	0x0E
#define GATE_INTERRUPT 	(ACS_PRESENT | ACS_INT_IA_32E)

/* Trap Gate */
#define ACS_TRAP_IA_32E	0x0F
#define GATE_TRAP		(ACS_PRESENT | ACS_TRAP_IA_32E)

/**
 * +++xdocument
 */
void idt_initialize();

/**
 * +++xdocument
 * @param entry_index [description]
 * @param offset      [description]
 * @param selector    [description]
 * @param flags       [description]
 */
void idt_setup_descriptor(uint8_t entry_index, uint64_t offset, uint16_t selector, uint8_t flags);

#endif