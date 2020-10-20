#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=4 ;i++)
    {
        for(int j=4 ; j>=i ; j--)
        {
            printf(" ");
        }
        printf("%d",i);

        for(int k=2 ; k<=i ;k++)
        {
            printf("**");
        }
        printf("%d",i);
        printf("\n");
    }
    for(int i=3 ; i>=1 ; i--)
    {
        for(int j=3 ; j>=i-1 ; j--)
        {
            printf(" ");
        }
        printf("%d",i);
        for(int k=2 ; k<=i ;k++)
        {
            printf("**");
        }
        printf("%d",i);
        printf("\n");

    }
}
