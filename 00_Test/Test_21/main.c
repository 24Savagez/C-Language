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
        printf("%d",1);
        for(int j=1 ;j<=7-i ; j++)
        {
            printf("%d",0);
            printf("%d",1);
        }
        printf("\n");
    }
}
