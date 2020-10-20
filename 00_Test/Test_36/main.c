#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=7 ;j>=i ;j--)
        {
            printf("*");
        }
        printf("%d",i);
        for(int k=1 ;k<=i ;k++)
        {
            printf("*");
        }
        printf("%d",8-i);
        printf("\n");
    }
}
