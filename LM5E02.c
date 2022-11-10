#include<stdio.h>

void main()
{
    int x, y;

    printf("Input a number X: ");
    scanf("%d", &x);

    printf("Input a number y: ");
    scanf("%d", &y);

    switch(x>y){

        case 0: printf("%d is greater than %d", y, x); break;

        case 1: printf("%d is greater than %d", x, y); break;


        default: printf("Invalid");

    }


}
