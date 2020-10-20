#include <stdio.h>
#include <conio.h>

void main()
{
    char choice;

    printf("Input number (1-5) ");
    choice = getche();
    printf("\n");

    switch (choice)
    {
        case '1' :
            printf("I am in case 1\n");
            break;
        case '2' :
            printf("I am in case 2\n");
            break;
        case '3' :
            printf("I am in case 3\n");
            break;
        case '4' :
            printf("I am in case 4\n");
            break;
        case '5' :
            printf("I am in case 5\n");
            break;
        default :
            printf("I am in case default\n");
    }

}
