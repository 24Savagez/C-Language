#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tmp0,tmp1,result;
    int fib;

    for(int count=1 ; count<=10 ;count++)
    {
        printf("input number : ");
        scanf("%d",&fib);

        if(fib<0 || fib>30)
        {
            printf("Please input number between 0 - 30\n");
        }
        continue; }

        if(fib==0 || fib==1)
            result = fib;   //0 and 1 is default value
        else
        {
            tmp0 = 0;
            tmp1 = 1;
            for(int i=2 ; i<=fib ;i++)
            {
                result = tmp0 + tmp1;
                tmp0 = tmp1;
                tmp1 = result;
                printf("%6ld\t",tmp0);
            }
            printf("\nFibonacci(%d) = %ld\n\n",fib,result);
        }
}

