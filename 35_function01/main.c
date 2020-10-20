#include <stdio.h>
#include <stdlib.h>

//user-defined function
int calsum(int x,int y,int z)
{
    int d;
    d = x+y+z;
    return(d);
}

//main function
int main()
{
    int a,b,c,sum;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    sum = calsum(a,b,c);    //function call
    printf("Sum = %d\n",sum);
}
