#include <stdio.h>
#include <string.h>

void main()
{
    char source[50] = "all the best and happy programming!";
    char target[100] = "Programming with C, ";

    strcat(target,source);
    printf("Source string = %s\n",source);
    printf("Target string = %s\n\n",target);
}
