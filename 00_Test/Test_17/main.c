#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=4 ; i++)
    {
        for(int j=i ; j<=i ;j++)
        {
            printf("%d%d%d",i,i+1,i+2);
        }
        for(int k=1 ; k<=2+i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
