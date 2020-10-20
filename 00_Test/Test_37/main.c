#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        printf("*");
        for(int j=1 ; j<i ;j++)
        {
            printf(" ");
        }
        for(int k=10 ; k>2*i-1 ;k--)
        {
            printf("%d",i);
        }
        for(int l=1 ; l<i ; l++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}
