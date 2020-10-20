#include <stdio.h>

void main()
{
    int a = 3;
    int *b;     //b is a pointer to an integer
    b = &a;     //b set to address of a

    printf("Address of a = %u\n",&a);
    printf("Address of a = %u\n",b);
    printf("Address of b = %u\n",&b);
    printf("Value of b = %u\n",b);
    printf("Value of a = %d\n",a);
    printf("Value of a = %d\n",*(&a));
    printf("Value of a = %d\n\n",*b);

}
