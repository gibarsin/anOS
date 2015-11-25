#ifndef _INTERRUPT_H_
#define _INTERRUPT_H_

#include <stdint.h>

/**
 * +++xdocument
 * @param pic_mask [description]
 */
void _pic_set_mask(uint8_t pic_mask);

/**
 * +++xdocument
 */
void _cli();

/**
 * +++document
 */
void _sti();

#endif