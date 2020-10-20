#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=i ;j<=i ; j++)
        {
            printf("%d",i);
        }
        for(int k=1 ; k<=i ; k++)
        {
            printf("*");
        }
        for(int l=i ; l<=i; l++)
        {
            printf("%d",i);
        }
        for(int m=5 ; m>=i ; m--)
        {
            printf("*");
        }
        for(int n=i ; n<=i ; n++)
        {
            printf("%d",10-i);
        }
        printf("\n");
    }
}
