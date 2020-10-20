#include <stdio.h>
#include <stdlib.h>

//function Prototype
long  int factorial(int);

void main()
{
    int number;
     long int result;

    printf("Enter integer number : ");
    scanf("%d",&number);

    result = factorial(number);     //call function
    printf("Factorial of %d (%d!) = %ld\n",number,number,result);
}
//function
long int factorial(int num)
{
    long int ans =1;
    int count =1;
    do
    {
        ans *= count;
        count++;
    }while(count <= num);

    return(ans);    //return ans to function
}
