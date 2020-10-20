#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<= 5 ;i++)
    {
        for(int j=1 ; j<2*i ;j++)
        {
            printf(" ");
        }
        for(int k=11-(2*i) ; k>=1 ;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
