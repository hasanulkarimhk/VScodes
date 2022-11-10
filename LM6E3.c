#include<stdio.h>


void main()
{

    int sum,i,n;

    printf("Enter N: ");
    scanf("%d", &n);

    i=4;
    sum=0;

    while(i<=n){

        printf("%d\n",i);
        sum=sum+i;
        i=i+7;



    }
    printf("\nSum of the above numbers: %d\n", sum);




}
















