#include<stdio.h>

void main()

{
    int x;
    int y;

    printf("Insert first number:");
    scanf("%d", &x);

    printf("Insert second number:");
    scanf("%d", &y);

    int sum;
    sum = x+y;

    int product;
    product = x*y;

    int difference;
    difference = x-y;

    int quotient;
    quotient = x/y;

    int remainder;
    remainder = x%y;

    printf("Sum: %d \nProduct: %d \nDifference: %d \nQuotient: %d \nRemainder: %d ", sum, product, difference, quotient, remainder);





}
