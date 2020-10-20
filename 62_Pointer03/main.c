#include <stdio.h>

void main()
{
    int a = 3 ;
    int *b;     //b is a pointer to an integer
    int **c;    //c is a pointer to an integer pointer

    b = &a;     //b set to address of a
    c = &b;     //c set to address of b

    printf("Address of a = %u\n",&a);
    printf("Address of a = %u\n",b);
    printf("Address of a = %u\n",*c);
    printf("Address of b = %u\n",&b);
    printf("Address of b = %u\n",c);
    printf("Address of c = %u\n\n",&c);

    printf("Value of b = %u\n",b);
    printf("Value of c = %u\n",c);
    printf("Value of a = %u\n",a);
    printf("Value of a = %u\n",*(&a));
    printf("Value of a = %u\n",*b);
    printf("Value of a = %u\n\n",**c);
}
