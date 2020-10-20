#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[15];
    long k;

    printf("Enter value of long integer : ");
    gets(str);
    printf("\n");

    k = atol(str);

    printf("The string \"%s\" converted to long int is %ld\n",str,k);
    printf("The converted value divided by 2 is %ld\n\n",k/2);
}
