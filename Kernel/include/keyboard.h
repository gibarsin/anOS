#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include <stdint.h>

/**
 * +++xdocument
 */
void keyboard_initialize();

/**
 * +++xdocument
 * @param code [description]
 */
void handler_keyboard(uint8_t code);

#endif