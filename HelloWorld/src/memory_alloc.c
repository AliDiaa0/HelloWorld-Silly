#include "include.h"

int* ptr;
int mem_alloc() {
    int memory = MEM_SIZE / sizeof(int);
    ptr = (int*)malloc(memory * sizeof(int));

    if (ptr == NULL)
    return 1;

    int i = 0; // Index
    while (i < memory) {
        ptr[i] = 0;
        i++;
    }
    return 0;
}