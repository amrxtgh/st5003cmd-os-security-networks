#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap; // declare pointer (lives on stack)
    forheap = (int*)malloc(sizeof(int)); // allocate memory on heap
    *forheap = 30;

    // Print addresses
    printf("Address of pointer (STACK):\t%p\n", (void*)&forheap);
    printf("Address of data (HEAP):\t\t%p\n", (void*)forheap);
    printf("Value stored (HEAP):\t\t%d\n", *forheap);

    free(forheap);   // don't forget to free! :)
    return 0;
}
