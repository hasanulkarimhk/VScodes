#include<stdio.h>

void main()
{
    int n, m;
    printf("Insert the number n: ");
    scanf("%d",&n);

    printf("Insert the number m: ");
    scanf("%d",&m);

    int x;
    x = (m/(pow(2,n)));

    printf("The Output: %d and %d", x, m>>n);


}
