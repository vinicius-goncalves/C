#include <stdio.h>
#include <string.h>

void main() {
	
	char name[255] = "";
	int age = 0;

	printf("What's your name?\n");
	fgets(name, 255, stdin);
	
	printf("How old are you?\n");
	scanf("%d", &age);
	
	printf("Your name %s", &name);
	printf("Your age: %d", age);
	
	fflush(stdin);
	
}