#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++ )
    {
        printf("%d",i);
        for(int j=1 ; j<=2*i-1 ; j++)
        {
            printf("*");
        }
        for(int k=10 ; k>=2*i-1 ; k--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
