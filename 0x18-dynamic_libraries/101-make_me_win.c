#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void (*original_srand)(unsigned int seed) = NULL;
int (*original_rand)(void) = NULL;

void srand(unsigned int seed) {
    if (!original_srand) {
        original_srand = dlsym(RTLD_NOW, "srand");
    }
}

int rand(void) {
    if (!original_rand) {
        original_rand = dlsym(RTLD_NOW, "rand");
    }
    return 9;
}
