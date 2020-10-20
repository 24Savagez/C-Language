#include <stdio.h>

void main()
{
    for(int i = 0 , j = 8 ; i < 8 ; i++ , j--) //multiple expressions
    {
        printf("%d + %d = %d\n",i,j,i+j);
    }
    putchar(10);
}
