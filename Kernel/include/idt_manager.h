#ifndef _IDT_MANAGER_H_
#define _IDT_MANAGER_H_

#include <stdint.h>

/**
 * +++xdocument
 */
void manager_idt_initialize();

/**
 * +++xdocument
 * @param pic_mask [description]
 */
void manager_idt_pic_mask(uint8_t pic_mask);

#endif