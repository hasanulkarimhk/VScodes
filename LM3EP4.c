#include<stdio.h>
 void main()
 {
     float x, x1, x2, y, y1, y2;

     printf("Enter x1: ");
     scanf("%f", &x1);

     printf("Enter y1: ");
     scanf("%f", &y1);

     printf("Enter x2: ");
     scanf("%f", &x2);

     printf("Enter y2: ");
     scanf("%f", &y2);

     x =(x1+x2)/2;
     y =(y1+y2)/2;

     printf("The coordinates of midpoint: x= %.2f and y= %.2f", x,y);








 }
