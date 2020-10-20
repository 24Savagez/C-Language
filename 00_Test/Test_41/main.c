#include <stdio.h>
#include <stdlib.h>

void main()
{
    int total=1;

    printf(" 0! = 1\n");
    for(int i=1 ; i<=10 ; i++)
    {
        total = i*total;
        printf("%2d! = %d\n",i,total);
    }

}
