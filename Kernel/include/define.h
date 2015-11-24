#ifndef _DEFINE_H_
#define _DEFINE_H_

#define NULL 0

#define LOW_16(x)	((x) & 0xFFFF)
#define MID_16(x)	(((x) >> 16) & 0xFFFF)
#define HIGH_32(x)	(((x) >> 32) & 0xFFFFFFFF)

#endif