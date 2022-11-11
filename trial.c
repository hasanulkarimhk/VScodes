#include<stdio.h>

void main()
{
    int num, i, i2, num_rev=0;

    printf("Enter a number:");
    scanf("%d", &num);
    i=num%10;
    printf("last digit is %d\n", i);

    while(num!=0)
    {
        num_rev = (num_rev*10)+ (num%10);

        num/=10;



    }
    i2=num_rev%10;
    printf("first digit is %d", i2);




    }
