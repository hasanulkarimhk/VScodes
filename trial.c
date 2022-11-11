//#include <stdio.h>
//void main()
//{
//    int num, i;
//    printf("Enter any number to print in words: ");
//    scanf("%d", &num);
//    // Finds last digit of the number and print it in words
//    while(num!=0)
//    {
//        switch(num%10)  {
//            case 0: printf("Zero "); break;
//            case 1: printf("One "); break;
//            case 2: printf("Two "); break;
//            case 3: printf("Three "); break;
//            case 4: printf("Four "); break;
//            case 5: printf("Five "); break;
//            case 6: printf("Six "); break;
//            case 7: printf("Seven "); break;
//            case 8: printf("Eight "); break;
//            case 9: printf("Nine ");
//        }//end of switch
//        num = num/10;
//    }//end of while loop
//}


//#include<stdio.h>
//
//
//void main()
//{
//
//    int x,y,gcd=1, min, i=1;
//
//    printf("Input the fucking number: ");
//    scanf("%d", &x);
//
//    printf("Input the fucking second number: ");
//    scanf("%d", &y);
//
//    min = (x<y) ? x:y;
//
//    while(1 && (i>min) ){
//
//        if(x%i==0 && y%i==0 )
//        {
//            gcd= gcd*i;
//
//
//
//
//        }
//        i=i+1;
//
//
//
//    }
//
//    printf("%d", gcd);
//
//}
//






#include <stdio.h>

int main()
{
    // declare the variables
    int n1, n2, i, GCD_Num;
    printf ( " Enter any two numbers: \n ");
    scanf ( "%d %d", &n1, &n2);

    // use for loop
    for( i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i ==0 && n2 % i == 0)
            GCD_Num = i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */
    }
    // print the GCD of two numbers
    printf (" GCD of two numbers %d and %d is %d.", n1, n2, GCD_Num);

}
