#include <video_manager.h>
#include <define.h>


void manager_video_print_string(char * str) {
	while(*str != NULL) {
		video_print_char(*str);
		str++;
	}
}

void manager_video_print_char(char c) {
	video_print_char(c);
}