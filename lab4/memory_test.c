#include <stdio.h>
#include <stdlib.h>

void cause_overflow(int depth, char *heap_ptr) {
	char local_stack_var;
	if (depth % 10000 == 0) {
		printf("Frame %d | Heap Address: %p | Stack Address: %p | Distance: %ld bytes\n", 
               depth, (void*)heap_ptr, (void*)&local_stack_var, (long)(&local_stack_var - heap_ptr));
	}
	// recursive calls to overflow
	cause_overflow(depth+1, heap_ptr);
}
int main() {
	char *heap_ptr = malloc(1024);
	printf("Starting recursion...\n");
	cause_overflow(0, heap_ptr);
	free(heap_ptr);
	return 0;
} 
