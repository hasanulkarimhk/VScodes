#include<stdio.h>
#include<math.h>

void main()
{
    int n;

    printf("Input the length of the series: ");
    scanf("%d", &n);

    int result;

    result = n*(n+1)*(2*n+1)/6;

    printf("The sum of the series is %d", result);


}
