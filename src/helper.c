#include "mycfg.h"

int do_ops(int a, int b) {
    if (a == 31) {
        return a + b + 13;
    }
    return a + b;
}

#if CPPTEST_INIT_QT
void cc_example1(int a, int b) // 11
{
     switch (a) {
     case 1: // 1
         break;
     case 2: // 2
         break;
     case 3: // 3
         break;
     default:
         break;
     }
     if (a || b) // 4, 5
     {
     }
     if ((a || b) && (a && b)) // 6, 7, 8, 9
     {
     }
     do // 10
     {
     } while (0);
}
#endif
