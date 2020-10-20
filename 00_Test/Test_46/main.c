#include <stdio.h>

long int factorial(int n);   //function prototype

void main()
{
    int n;
    printf(" n = ");     scanf("%d",&n);
    printf(" %d! = %ld\n\n",n,factorial(n));
}
long int factorial(int n)
{
    int i;
    long int result = 1;

    if(n > 1)
        for(i=2 ; i<=n ; i++)
        result *= i;
    return(result);
}
