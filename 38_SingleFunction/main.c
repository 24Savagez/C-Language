#include <stdio.h>
#include <stdlib.h>

//function Prototype
void bar(int);

void main()
{
    int fmale,male;
    printf("Enter amount of female : ");   scanf("%d",&fmale);
    printf("Enter amount of male : ");     scanf("%d",&male);
    putchar(10);

    bar(fmale);     //call function
    bar(male);      //call function
}
//function
void bar(int amount)
{
    for(int i=1 ; i<=amount ; i++)
        printf("*");

    printf(" (%d)\n\n",amount);
}
