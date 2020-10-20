#include <stdio.h>

void main()
{
    char txt[] = "Hello C";
    int i = 0;

    while(txt[i] != '\0')
    {
        printf("txt[%d] = %c\n",i,txt[i]);
        i++;
    }
    printf("\nThe size of this string is %d\n\n",sizeof txt);
}
