#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=5 ;i++)
    {
        printf("%d",i);
        for(int j=1 ; j>=0 ;j--)
        {
            printf("*");
            printf("%d",2*i-j);
        }
        printf("\n");
    }

}

//printf("%d*%d*%d",i,(2*i-1),(2*i));
