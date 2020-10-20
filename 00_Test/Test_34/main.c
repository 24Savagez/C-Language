#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        for(int j=i ; j<=i ;j++)
        {
            printf("%d",i);
        }
        for(int k=10 ; k>i ;k--)
        {
            printf("*");
        }
        for(int l=1 ; l<i ;l++)
        {
            printf(" ");
        }
        for(int m=i ; m<=i ;m++)
        {
            printf("%d",6-i);
        }
        printf("\n");
    }
}
