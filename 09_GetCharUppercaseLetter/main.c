#include <stdio.h>
#include <ctype.h>

void main()
{
    char letter[80];
    int count,tag;

    /*enter the text*/
    for(count = 0 ; (letter[count] = getchar()) != '\n' ; count++)
        ;       //must type

    /*tag the character count*/
    tag = count;

    /*display the line in uppercase*/
    for(count = 0 ; count < tag ; count++)
    putchar(toupper (letter[count]));
    putchar(10);    //new line
}
