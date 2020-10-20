#include <stdio.h>
#define Exchange 31     //use define for fix rate

void main()
{
    float Dollar,Thai;

    printf("US. Dollar money : "); scanf("%f",&Dollar);

    Thai = Dollar * Exchange;   //Algorithm

    putchar(10);        //new line
    printf("%.0f US. Dollar = %8.2f Baht \n",Dollar,Thai);
}
