#include <stdlib.h>

int weird_rand() {
    for (int n = (int)malloc(0) % 0x64 + 0b0001, i = 1; i; ~i) return n < 0 ? ~n : n;
}

