#include<stdio.h>

void main()
{


    double x,y;
    char op;

    printf("Enter Operator: ");
    scanf("%c", &op);

    printf("Enter first number: ");
    scanf("%lf", &x);

    printf("Enter second number: ");
    scanf("%lf", &y);



    switch(op)
    {
        case '+':
        printf("The result is %.2lf", x+y);
        break;

        case '/':
        printf("The result is %.2lf", x/y);
        break;

        case '*': printf("The result is %lf.2", x*y);
        break;

        case '-':printf("The result is %.2lf", x-y);
        break;

        default: printf("Invalid");



    }


}
