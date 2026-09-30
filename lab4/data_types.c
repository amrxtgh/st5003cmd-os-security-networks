#include <stdio.h>

int main() {
	printf("=== Data Type Sizes on This System ===\n");

	printf("char:\t\t%zu bytes\n", sizeof(char));
	printf("int:\t\t%zu bytes\n", sizeof(int));
	printf("float:\t\t%zu bytes\n", sizeof(float));
	printf("double:\t\t%zu bytes\n", sizeof(double));
	printf("long:\t\t%zu bytes\n", sizeof(long));
	printf("pointer:\t%zu bytes\n", sizeof(int*));
	return 0;
}
