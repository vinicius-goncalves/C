#include <stdio.h>

void main() {
	
	char string[13] = "Hello World!";
	char *pointerToString = string;
	
	int number = 19;
	int *pointerToNumber = &number;
	
	printf("The string says %s\n", pointerToString);
	printf("The value in memory is: %p", pointerToString);
	printf("\n");
	
	printf("xxxxxxxxxxxx\n");
	
	printf("The int is %d\n", *pointerToNumber);
	printf("The value in memory is: %p", pointerToNumber);
	printf("\n");
	
}