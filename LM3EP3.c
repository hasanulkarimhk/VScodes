#include<stdio.h>
#define PI 3.141592654

void main()
{
    float r;

    printf("Enter the radius: ");
    scanf("%f", &r);


    float result;

    result= ((4.0/3)*PI*pow(r,3));

    printf("Volume of the sphere is: %.3f", result);



}
