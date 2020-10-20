#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=4 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf(" ");
        }

        printf("%d%d",i,i);

        for(int k=6 ; k>=2*i-1 ; k--)
        {
            printf("*");
        }

        printf("%d%d",i,i);

        printf("\n");
    }
}
