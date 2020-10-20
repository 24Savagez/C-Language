#include <stdio.h>

void main()
{
    int a = 3;

    printf("Address of a = %u\n",&a);
    printf("Value of a = %d\n",a);
    printf("Value of a = %d\n\n",*(&a));    //value at address
}
