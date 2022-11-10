#include<stdio.h>

void main()
{
   double x, y, z;

   printf("Insert the first angle: ");
   scanf("%lf", &x);

   printf("Insert the second angle: ");
   scanf("%lf", &y);

   printf("Insert the third angle: ");
   scanf("%lf", &z);

   if (x+y+z==180)
   {
       printf("The triangle is valid");
   }
   else
   {
       printf("The triangle is invalid");
   }


}
