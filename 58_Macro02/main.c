#include <windows.h>
#include <stdio.h>
#include <conio.h>

//multiple lines of macro
#define LINE  for(i=1 ; i<40 ; i++) \
                {printf("_");\
                }printf(" end of line\n\n");

//this is global variable
//center of axis is set to the top left corner of the screen
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
{
    int i;
    system("cls");
    gotoxy(1,5);
    LINE
}
