#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=7 ; i++)
    {
        for(int j=6 ; j>=i ; j--)
        {
            printf(" ");
        }
        for(int k=1 ;k<=i ;k++)
        {
            printf("%d",k);
        }
        printf("%d%d",i,i);
        for(int l=i-1 ; l>=1 ; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
