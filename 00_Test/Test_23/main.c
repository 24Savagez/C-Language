#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=7 ; i++)
    {
        for(int j=1 ; j<i ; j++)
        {
            printf(" ");
        }
        printf("%d%d%d",i,i+1,i+2);
        for(int k=1 ; k<=i+1 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
