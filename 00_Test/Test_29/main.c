#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            printf(" ");
        }
        for(int k=i ; k<=i+1 ;k++)
        {
            printf("%d",k);
        }
        for(int l=1 ;l<=10-(2*i) ;l++)
        {
            printf(" ");
        }
        for(int m=i+1 ; m>=i ;m--)
        {
            printf("%d",m);
        }

        printf("\n");
    }
}
