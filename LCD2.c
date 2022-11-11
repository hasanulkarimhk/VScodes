#include<stdio.h>


void main()
{

    int x,y,lcd=1, max, i;

    printf("Input the fucking number: ");
    scanf("%d", &x);

    printf("Input the fucking second number: ");
    scanf("%d", &y);
   
    i = max = (x>y) ? x:y;

    while(1){

        if(i%x==0 && i%y==0 )
        {
            lcd= i;
            break;
        

        }
        i+=max;
        


    }

    printf("%d", lcd);

}

