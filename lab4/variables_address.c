#include <stdio.h>
#include <stdlib.h>

int global_var = 150;		// initialized variables are in .data segment
int bss_var;               // uninitialized variables are in .bss segment

int main() {
	int local_var = 30;
	static int local_static = 20;

	int *heap_var = (int*)malloc(sizeof(int)); //  Heap
	*heap_var = 500;

	printf(".......Variable Addresses.......\n\n");
	printf("global_var:\t\t\t%p(.data segment)\n", (void*)&global_var);
	printf("bss_var:\t\t\t%p(.bss segment)\n", (void*)&bss_var);
	printf("local_var:\t\t\t%p(stack segment)\n", (void*)&local_var);
	printf("local_static:\t\t\t%p(.data or .bss segment)\n", (void*)&local_static);
	printf("&heap_var_ptr(ptr lives:)\t%p(stack segment)\n", (void*)&heap_var);
	printf("heap_var (points to:)\t\t%p(Heap-data)\n", (void*)heap_var);
	free(heap_var);
	return 0;
}
