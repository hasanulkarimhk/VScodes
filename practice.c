#include<stdio.h>
#include<math.h>

void main()

{
    float const pi = 3.14159265359;

    float r, h;

    printf("Insert the value of radius:");
    scanf("%f", &r);

    printf("Insert the value of height:");
    scanf("%f", &h);
    float result;
    result = pi*r*r*h;

    printf("Cylinder's volume is: %f", result);





}
