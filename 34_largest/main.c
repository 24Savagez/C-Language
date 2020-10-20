#include <stdio.h>

void main()
{
    int a,b,c,largest;
    do
    {
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    largest = a>b ? (a>c ? a:c) :(b>c ? b:c);
    printf("%d is the largest number.",largest);
    printf("\n\n");

    }while(a!=99 || b!=99 || c!=99);
}
