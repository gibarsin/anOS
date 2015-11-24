#ifndef _VIDEO_H_
#define _VIDEO_H_

/**
 * Initialize video driver.
 * It must be called before using the API.
 */
void video_initialize();

/**
 * Prints a character in the screen at the current position.
 * @param c character to print
 */
void video_print_char(char c);

/**
 * +++xdocument
 */
void video_print_delete();

#endif