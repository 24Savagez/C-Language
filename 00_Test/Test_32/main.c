#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=4 ; j++)
        {
            printf("%d%d",i,10-i);
        }
        printf("\n");
    }
}
