#include <stdio.h>

void main()
{
    printf("   Odd number   \tEven number\n");
    printf("====================================\n");
    for(int count=1 ; count <=100 ; count++)
    {
        if(count%2==1)
        {
            printf("\t%3d",count);
        }else
        {
            printf("\t\t%3d\n",count);
        }
    }
}
