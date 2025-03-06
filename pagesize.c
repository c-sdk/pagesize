#ifndef __AIL_PAGESIZE_H__
#define __AIL_PAGESIZE_H__ 1

#include <unistd.h>

size_t page_size(void) {
  // NOTE: sysconf(_SC_PAGESIZE) seems to be portable.
  // Need to understand which OSs still use getpagesize().
  return sysconf(_SC_PAGESIZE);
}

#endif // __AIL_PAGESIZE_H__
