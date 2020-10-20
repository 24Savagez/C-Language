#include <stdio.h>

void main()
{
    for(int i = 2 , j = 1 ; i <= 12 , j <= 12 ; i++ , j++)
    {
        printf("%2d * %2d = %3d\n",i,j,i*j);
    }
    putchar(10);
}
