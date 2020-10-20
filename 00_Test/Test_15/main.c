#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=10; i++)
    {
        for(int j=1 ; j<=10-i ;j++)
        {
            printf("_");
        }
        for(int k=1 ; k<=2*i-1 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1 ;i<=10; i++)
    {
        for(int j=1 ;j<=i-1 ; j++)
        {
            printf("_");
        }
        for(int k=20 ; k>=2*i ; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
