#ifndef __AIL_PAGESIZE_H__
#define __AIL_PAGESIZE_H__ 1

#include <ctype.h>

// Page size seems to be portable on linux and macos.
size_t page_size(void);

#endif // __AIL_PAGESIZE_H__
