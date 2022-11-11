#include <stdio.h>

void main()
{
    int i=1, num, sum=0;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    while(i<num){
            if(num%i==0){
                    sum=sum+i;

            }
            i++;


    }
    if(sum==num){



        printf("%d is a perfect number\n", i);
    }
    else{


        printf("%d is not a perfect\n", i);


    }



}
