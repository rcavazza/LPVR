#ifndef _LINUX_STDDEF_H
#define _LINUX_STDDEF_H



#undef NULL
#if defined(__cplusplus)
#define NULL 0
#else
#define NULL ((void *)0)
#endif


#include <stddef.h> /* newer gcc includes this */
#ifndef offsetof
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#endif

#endif
