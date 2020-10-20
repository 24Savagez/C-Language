#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=4 ; i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            printf("*");
        }
        for(int k=i ; k>=1 ; k--)
        {
            printf("%d",k);
        }
        for(int k=2 ; k<=i ; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
