#include <cstdio>
#include <cstdlib>
#include "mycfg.h"

extern "C" unsigned char shape_predictor_5_face_landmarks_dat[];
extern "C" unsigned int shape_predictor_5_face_landmarks_dat_len;

extern "C" int do_ops(int, int);

#ifdef CFG_GLOBAL
int padding[8];
int buf[3] = {0};
#endif

void tst_oob(int n) {
#ifndef CFG_GLOBAL
    int padding[8];
    int buf[3] = {0};
#endif
    printf("*** f(%d) ***\n", n);

    for (int i = 0; i < n; i++) {
        buf[i]++;
    }
}

void tst_memleak() {
    char *pmem = (char *)malloc(1);
}

int addnum(int a, int b) {
    if (a == b) {
        return 2*a;
    } else if (a % b == 0) {
        return 0;
    }
    return a + b;
}

int main(int argc, char *argv[]) {
	printf("*** bladerunner ***\n");
	// tst_oob(4);
	tst_memleak();
	tst_memleak2();
    addnum(3, 4);
    return 0;
}
