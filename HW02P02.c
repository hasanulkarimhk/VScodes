#include<stdio.h>
#include<math.h>

void main()

{

    float a;

    printf("Insert the value of cube's edge: ");
    scanf("%f", &a);


    float result;
    result = pow(a,3);

    printf("The volume of the cube is %f", result);


}
