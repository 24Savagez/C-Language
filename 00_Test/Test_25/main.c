#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        for(int j=5 ; j>=i ; j--)
        {
            printf(" ");
        }
        for(int k=1 ;k<=i ;k++)
        {
            printf("%d",k);
        }
        printf("%d",5-i+1);
        for(int l=i ; l>=1 ; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
