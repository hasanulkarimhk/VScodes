#include<stdio.h>

void main()

{
   float x;
   int y;

   printf("Input your number:");
   scanf("%f", &x);

   y = floor(x);

   if(x-y>0)
   {
       printf("This number is float");
   }
   else
   {

       printf("This number is integer");

   }



}


