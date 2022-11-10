#include<stdio.h>

void main()

{
    float const pi = 3.14159265359;

    float d, h;

    printf("Insert the value of diameter:");
    scanf("%f", &d);

    float r;

    r=d/2;

    printf("Insert the value of height:");
    scanf("%f", &h);
    float result;
    result = pi*pow(r,2)*h;

    printf("Cylinder's volume is: %f", result);





}
