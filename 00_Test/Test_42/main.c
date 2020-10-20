#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int temp;
    long int result=1;

    do
    {
        temp = (n==0)? 1: n;
        result *= temp;
        printf("%2d! = %ld\n",n,result);
        n++;
    }while(n<=10);
}
