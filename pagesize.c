#ifndef __AIL_PAGESIZE_H__
#define __AIL_PAGESIZE_H__ 1

#include <unistd.h>

size_t page_size(void) {
  return sysconf(_SC_PAGESIZE);
}

#endif // __AIL_PAGESIZE_H__
