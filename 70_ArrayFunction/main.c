#include <stdio.h>

void main()
{
    char text[5] = "TEST";

    printf("text        = %p\n",text);
    printf("&text[0]    = %p\n",&text[0]);
    printf("&text       = %p\n\n",&text);

    for(int i=0 ; i<5 ; i++)
    {
        printf("text[%d] = %p => %c\n",i,&text[i],text[i]);
        printf("\n");
    }
}
