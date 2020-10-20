#include <stdio.h>

long fibonacci(long int);   //function prototype

void main()
{
    long int result;
    int number;

    printf("How many Fibonacci numbers? : ");
    scanf("%d",&number);

    result = fibonacci(number);
    printf("Fibonacci (%d) = %ld\n\n",number,result);
}
//recursive definition of function fibonacci
long fibonacci(long int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);

}
