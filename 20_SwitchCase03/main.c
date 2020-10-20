#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main ()
{
    char choice;

    printf("<< MENU >>\n\n");
    printf(" A. Apple\n");
    printf(" B. Banana\n");
    printf(" C. Cantaloup\n");
    printf(" D. Durian\n");
    printf("\n Selection => ");
    choice = getche();

    switch(toupper(choice))
    {
    case 'A' :
        printf(" => Apple\n");
        break;
    case 'B' :
        printf(" => Banana\n");
        break;
    case 'C' :
        printf(" => Cantaloup\n");
        break;
    case 'D' :
        printf(" => Durian\n");
        break;
    default :
        printf(" => No Selection!");
    }
    printf("\n");
}
