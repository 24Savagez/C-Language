#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "0123456789ABCDEF";

    printf("%s <reverse to> ",str);
    printf("%s\n\n",strrev(str));
}
