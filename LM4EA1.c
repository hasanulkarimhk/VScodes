#include<stdio.h>

void main()
{
   double x, y, z;

   printf("Input the first length: ");
   scanf("%lf", &x);

   printf("Input the second length: ");
   scanf("%lf", &y);

   printf("Input the third length: ");
   scanf("%lf", &z);

   if (x+y>z && x+z>y && z+y>x)
   {
       printf("Triangle is valid");
   }
   else{
    printf("Triangle is invalid");
   }


}
