#include <stdio.h>

void main()
{
    int count;

    /*Post increment*/
    count = 5;
    printf(" %d\n",count);
    printf(" %d\n",count++);
    printf(" %d\n\n",count);

    /*Pre increment*/
    count = 5;
    printf(" %d\n",count);
    printf(" %d\n",++count);
    printf(" %d\n\n",count);
}
