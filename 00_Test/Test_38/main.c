#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        printf("%d",i);
        for(int j=6 ; j>=i ;j--)
        {
            printf("*");
        }
        for(int k=1 ;k<i ;k++)
        {
            printf(" ");
        }
        printf("%d",i);
        printf("\n");
    }
}
