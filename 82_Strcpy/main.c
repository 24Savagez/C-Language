#include <stdio.h>
#include <string.h>

void main()
{
    char source[] = "Programming with C";
    char target[20];

    strcpy(target,source);
    printf("Source string = %s\n",source);
    printf("Target string = %s\n\n",target);
}
