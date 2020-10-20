#include <stdio.h>      //header file for standard input output
#include <conio.h>



void main()
{
    char ch;

    printf("\nPress any key1 : "); getch();
    printf("\nPress any key2 : "); getche();
    printf("\nPress any key to clear screen...");

    ch = getch();
    system("cls");  //clear screen
    printf("\nAscii value of ch is %d\n",ch);
}
