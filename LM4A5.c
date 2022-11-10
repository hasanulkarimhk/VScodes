#include<stdio.h>

void main()
{
   float r,a;

   printf("Input the radius: ");
   scanf("%f", &r);

   printf("Input a side of the square: ");
   scanf("%f", &a);


   if((sqrt(2)*a)<=(2*r))
   {
       printf("The square can be placed inside the circle");
   }
   else
   {

       printf("The square cannot be placed inside the circle");



   }




}
