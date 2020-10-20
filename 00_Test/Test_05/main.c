#include <stdio.h>
#include <conio.h>

void main()
{
    int num1 = 1;
    int num2 = 12;
    int num3 = 123;
    int num4 = 1234;
    int num5 = 12345;

    printf("%5d  %-5d\n",num1,num1);
    printf("%5d  %-5d\n",num2,num2);
    printf("%5d  %-5d\n",num3,num3);
    printf("%5d  %-5d\n",num4,num4);
    printf("%5d  %-5d\n",num5,num5);

    putchar(10);
    printf("%5d  %5d\n",num1,num1);
    printf("%5d  %5d\n",num2,num2);
    printf("%5d  %5d\n",num3,num3);
    printf("%5d  %5d\n",num4,num4);
    printf("%5d  %5d\n",num5,num5);

    putchar(10);
    printf("%-5d  %5d\n",num1,num1);
    printf("%-5d  %5d\n",num2,num2);
    printf("%-5d  %5d\n",num3,num3);
    printf("%-5d  %5d\n",num4,num4);
    printf("%-5d  %5d\n",num5,num5);

    putchar(10);
    printf("%-5d  %-5d\n",num1,num1);
    printf("%-5d  %-5d\n",num2,num2);
    printf("%-5d  %-5d\n",num3,num3);
    printf("%-5d  %-5d\n",num4,num4);
    printf("%-5d  %-5d\n",num5,num5);
}
