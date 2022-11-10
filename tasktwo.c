#include<stdio.h>

void main()
{

   double x;
   double y;
   double z;

   printf("Insert first number:");
   scanf("%lf", &x);

   printf("Insert second number:");
   scanf("%lf", &y);

   printf("Insert third number:");
   scanf("%lf", &z);

   double sum;

   sum= x+y+z;


   double average;

   average= sum/3;

   printf("%.2lf", average);


}
