#include <stdio.h>

void fibonacci(int);    //function

void main()
{
    int n;
    printf("How many fibonacci numbers? : ");
    scanf("%d",&n);     printf("\n");
    fibonacci(n);
    printf("=========================");
}
void fibonacci(int n)
{
    long int f1=1 , f2=1, result;
    int i;

    for(int count=0 ; count <= n ; ++count)
    {
        if(count == 0)
            f1 = 0;
        else
            result = (count < 3) ? 1 : f1 + f2;
        f2 = f1;
        f1 = result;
        printf("Fibonacci(%2d) = %ld\n",count,result);
    }
}
