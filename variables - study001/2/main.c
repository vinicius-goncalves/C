#include <stdio.h>
#include <math.h>

void main() {
	
	#define name "VINICIUS"
	
	int number = 10;
	char genre = 'M';
	char string[] = "Hello World";
	float numberTwo = 19.5;
	
	printf("%d\n", sizeof(number));
	printf("%d\n", sizeof(genre));
	printf("%d\n", sizeof(string));
	printf("%d\n", sizeof(numberTwo));
	printf("%d\n", sizeof(name));
	
	printf("%d", number);
}