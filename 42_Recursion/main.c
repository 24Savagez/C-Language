#include <stdio.h>

//function prototype
long int factorial(int number);

void main()
{
    int i;
    printf("Enter number : "); scanf("%d",&i);
    printf("%2d! = %ld\n",i,factorial(i));
}
long int factorial(int number)
{
    if(number <= 1)
        return 1;
    else
        return (number * factorial(number-1));  //recursion
}
