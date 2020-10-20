#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    printf("\nValue of A = "); scanf("%d",&a);
    printf("\nValue of B = "); scanf("%d",&b);
    printf("\n A + B = %8d",a+b);
    printf("\n A - B = %8d",a-b);
    printf("\n A * B = %8d",a*b);
    printf("\n a / B = %8d",a/b);
    putchar('\n');
}
