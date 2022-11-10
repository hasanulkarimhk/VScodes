#include <stdio.h>

void main()
{
    int year;


    printf("Enter year : ");
    scanf("%d", &year);

    switch(((year%4 == 0) && (year%100 !=0)) || (year%400==0))
    {



    case 0: printf("Not Leap Year");
            break;

    case 1: printf("LEAP YEAR");
            break;


    }
}




