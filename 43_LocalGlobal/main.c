#include <stdio.h>

//function prototype
void proc1(void);
void proc2(void);

//global variable
int number;

void main()
{
    number = 100;
    printf(" %3d\n",number);
    proc1();
    printf(" %3d\n",number);
    proc2();
    printf(" %3d\n",number);
}
void proc1()
{
    number += 50;
    printf(" %3d\n",number);
}

void proc2()
{
    //local variable
    int number = 8;
    printf(" %3d\n",number);
}
