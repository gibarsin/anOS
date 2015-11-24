#include <keyboard.h>

#define KEYBOARD_SIZE_BUFFER 256

static char keyboard_buffer[KEYBOARD_SIZE_BUFFER];

void keyboard_initialize() {
	for(int i = 0; i < KEYBOARD_SIZE_BUFFER; i++) {
		keyboard_buffer[i] = 0;
	}
}