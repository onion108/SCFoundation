#ifndef SCFOUNDATION_H
#define SCFOUNDATION_H

#include "SCMain.h"

#define LIB_VERSION "0.0"
#define LIB_AUTHOR "27"
#define CREATE_DATE "Apr 4,2020"
#define IS_ALPHA 1

#if sizeof(void *) == 4
#define COMP_BIT_32
#endif

#if sizeof(void *) == 2
#define COMP_BIT_16
#endif

#if sizeof(void *) == 8
#define COMP_BIT_64
#endif

#define strToPoint(str) ((SCPoint)(str))
#define pointToStr(ptr) ((char *)ptr)

#define inpToPoint(i) ((SCPoint)(i))
#define pointToInp(ptr) ((int *)(ptr))

#define isAlpha() IS_ALPHA

#define getAddr(any) (&any)

#endif
