#include <stdio.h>

void main() {

    int ageOne = 0;
    int ageTwo = 0;
    int result = 0;

    int* pointerToResult = &result;

    printf("Please, input the first age.\n");
    scanf("%d", &ageOne);

    printf("Now the second age.\n");
    scanf("%d", &ageTwo);

    result = ageOne + ageTwo;

    printf("The result is: %d\n", result);
    printf("Address in the memory %p", pointerToResult);
}
