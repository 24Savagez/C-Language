#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    char ch1,ch2;

    //input alphabetic value
    do{
        printf("\nPlease input one character : ");
        ch1 = getche();
        if(!isalpha(ch1))
            printf("\nError...retry again");
    }while(!isalpha(ch1));
    printf("\n\n");

    //input numeric value
    do{
        printf("\nPlease input one numeric : ");
        ch2 = getche();
        if(!isdigit(ch2))
            printf("\nError...retry again");
    }while(!isdigit(ch2));
    printf("\n\n");

    //printf("%c and %c",ch1,ch2);
}
