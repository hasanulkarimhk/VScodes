#include<stdio.h>
#include<math.h>

void main()

{
    int x,y;

    printf("Insert the value of x: ");
    scanf("%d", &x );


    printf("Insert the value of y: ");
    scanf("%d", &y);


    int xremainder;
    int xquotient;
    int yremainder;
    int yquotient;

    xremainder = x%y;
    xquotient = x/y;
    yremainder = y%x;
    yquotient = y/x;


    printf("Remainder when x by y: %d \nQuotient when x by y: %d \nRemainder when y by x: %d \nQuotient when y by x: %d", xremainder, xquotient, yremainder, yquotient);



}
