#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        for(int j=i ; j<=5 ; j++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(int k=1 ; k<i ;k++)
        {
            printf(" ");
        }
        printf("%d",i);
        printf("\n");
    }
}
