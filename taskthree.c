#include<stdio.h>

void main()
{
    double x;

    printf("Insert the celsius value:");

    scanf("%lf", &x);

    double undone_fahrenheit_value;

    undone_fahrenheit_value= x*9/5;

    double fahrenheit_value;

    fahrenheit_value= undone_fahrenheit_value + 32;

    printf("The Fahrenheit value is: %.1lf", fahrenheit_value);






}
