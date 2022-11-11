#include <stdio.h>

void main()
{
    int i=1, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    while(i<num){
            if(num%i==0){
                printf("%d\n", i);
            }
            i++;


    }


}
