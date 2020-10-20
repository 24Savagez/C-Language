#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        for(int j=i ; j>=1 ; j--)
        {
            printf("%d",j);
        }
        for(int k=9 ; k>=2*i ; k--)
        {
            printf(" ");
        }
        for(int l=1 ; l<=i ; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
