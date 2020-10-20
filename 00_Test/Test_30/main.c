#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ;i<=5 ;i++)
    {
        for(int j=i ; j<= 5 ;j++)
        {
            printf("%d",i);
        }
        for(int k=1 ; k<2*i ; k++)
        {
            printf(" ");
        }
        for(int l=i ; l<=5 ;l++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
