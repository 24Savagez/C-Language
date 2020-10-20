#include <stdio.h>

int main()
{
    for(int i=1 ; i<=10 ; i++)
    {
        for(int j=1 ; j <= (10-i) ; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=(2*i-1) ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
