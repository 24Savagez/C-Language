#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<i ; j++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(int k=8 ;k>=2*i-1 ; k--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
