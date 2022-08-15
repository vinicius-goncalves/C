#include <stdio.h>

void main() {

    int totalPrice = 0;
    int peopleAmount = 0;
    int offPrice = 0;

    printf("Insert the total value\n");
    scanf("%d", &totalPrice);

    printf("Insert the people amount\n");
    scanf("%d", &peopleAmount);

    printf("Insert the off price\n");
    scanf("%d", &offPrice);

    printf("\n");

    printf("Total price: $%d\n", totalPrice);
    printf("People amount: %d\n", peopleAmount);
    printf("Off price: %d\n", offPrice);

    printf("\n");

    int withOffPrice = totalPrice - (totalPrice * offPrice / 100);
    printf("Total with off price: $%d\n",  withOffPrice);

    int priceForEachPerson = (withOffPrice / peopleAmount);
    printf("Each person must paid: $%d\n", priceForEachPerson);

    printf("\n");

}
