#include <stdio.h>

void main()
{
    char ch;

    printf("Insert a character: ");
    scanf("%c", &ch);

    if ( (ch>= 'A' && ch<= 'F') || (ch>= '0' && ch<= '9') || (ch>= 'a' && ch<= 'f'))
    {
        printf("%c is a Hexadecimal character",ch);
    }
    else
    {
        printf("%c is not a Hexadecimal character",ch);
    }


}
