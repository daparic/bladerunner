#ifndef MYCFG_H
#define MYCFG_H

#ifdef __cplusplus
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

// #define CFG_GLOBAL

void tst_memleak2() {
    char *pmem = (char *)malloc(1);
}

#endif
