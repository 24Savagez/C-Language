#include <stdio.h>

void main()
{
    for(int i=1 ; i<=12 ; i++)
    {
        for(int j=12 ; j>=i ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
