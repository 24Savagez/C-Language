#include <stdio.h>

void main()
{
    float num1,num2;
    printf("Enter dividend => ");   scanf("%f",&num1);

    printf("Enter divisor => ");    scanf("%f",&num2);

    if(num2 == 0)
        goto CRASH;

    printf("Answer = %.2f\n",num1/num2);
        goto EXIT;

CRASH:      //label crash
        printf("\nDivisor cannot be zero...\n");

EXIT:       //label exit
        putchar(10);
}
