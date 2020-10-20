#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            printf(" ");
        }
        for(int k=i ;k<=10-i ; k++)
        {
            printf("%d",k);
        }
        printf("\n");

    }
}
