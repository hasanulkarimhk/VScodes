#include<stdio.h>

void main()
{
    char x, M, m, A, a, B, b, C, c;

    printf("Enter M/m for Mango's price \nEnter A/a for Apple's price \nEnter C/c for Cherry's price \nEnter B/b for Banana's price:");
    scanf("%c", &x);

    switch(x){

    case 'A':
    printf("Apple: Tk.250/kg");
    break;

    case 'a':
    printf("Apple: Tk.250/kg");
    break;

    case 'B':
    printf("Banana: Tk. 130/kg");
    break;

    case 'b':
    printf("Banana: Tk. 130/kg");
    break;

    case 'C':
    printf("Cherry: Tk. 270/kg");
    break;

    case 'c':
    printf("Cherry: Tk. 270/kg");
    break;

    case 'M':
    printf("Mango: Tk.500/kg");
    break;

    case 'm':
    printf("Mango: Tk.500/kg");
    break;

    default: printf("Not available");

    }




}




























