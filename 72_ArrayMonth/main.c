#include <stdio.h>

void main()
{
    char *month[12] = {"January","February","March","April",
                        "May","June","July","August","September",
                        "October","November","December"};
    int m;
    printf("Input number of month (1-12) : ");
    scanf("%d",&m);

    printf("This month is %s.\n\n",month[m-1]);

}
