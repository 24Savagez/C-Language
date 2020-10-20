#include <stdio.h>
#include <stdlib.h>

void main()
{
    //use get and puts
    char text[80];
    printf("Input text : ");
    gets(text);
    putchar(10);
    puts(text);

    //use scanf
    char text2[80];
    printf("Input text : ");
    scanf("%s",text2);
    printf("\n%s\n",text2);

    //use scanf 2
    char text3[80];
    printf("Input text : ");
    scanf("%[^\n]",text3);
    printf("\n%s\n",text3);



}
