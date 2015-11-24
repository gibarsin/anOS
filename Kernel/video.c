#include <video.h>
#include <define.h>

#define VIDEO_START		0xB8000

#define VIDEO_WIDTH		80
#define VIDEO_HEIGHT	25

#define VIDEO_SIZE_CELL	2

#define VIDEO_DELETE_CHARACTER	0

static char * video_curr_pos = NULL;

void video_initialize() {
	video_curr_pos = VIDEO_START;
}

void video_print_char(char c) {
	*video_curr_pos = c;
	video_curr_pos += VIDEO_SIZE_CELL;
}

void video_print_delete() {
	video_curr_pos -= VIDEO_SIZE_CELL;
	*video_curr_pos = VIDEO_DELETE_CHARACTER;
}