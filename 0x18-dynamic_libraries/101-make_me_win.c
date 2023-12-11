// 101-make_me_win.c
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void srand(unsigned int seed) {
    // Intercept srand to do nothing
}

int rand(void) {
    return 9; // Always return 9
}

