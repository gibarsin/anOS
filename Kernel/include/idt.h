#ifndef _IDT_H_
#define _IDT_H_

#include <stdint.h>

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