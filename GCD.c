#include<stdio.h>


void main()
{

    int x,y,gcd=1, min, i=1;

    printf("Input the fucking number: ");
    scanf("%d", &x);

    printf("Input the fucking second number: ");
    scanf("%d", &y);
   
    min = (x<y) ? x:y;

    while(1 && (i<=min)){

        if(x%i==0 && y%i==0 )
        {
            gcd= i;
            


        }
        i++;
        


    }

    printf("%d", gcd);

}




