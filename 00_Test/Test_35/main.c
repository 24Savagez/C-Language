#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            printf("%d",i);
        }
        for(int k=1 ; k<=i ;k++)
        {
            printf("*");
        }
        for(int l=1 ; l<=i ;l++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
