#include <windows.h>    //header file for gotoxy
#include <stdio.h>      //header file for standard input output
#include <conio.h>

//this is global variable
//center of axis is set to the top left corner of the screen
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    printf("         1         2          3         4\n");
    printf("12345678901234567890132345678901234567890\n");
    gotoxy(10,3);   printf("<< Main Menu >>");
    gotoxy(10,4);   printf("1. Add Data");
    gotoxy(10,5);   printf("2. Delete Data");
    gotoxy(10,6);   printf("3. Edit Data");
    gotoxy(10,7);   printf("4. Search Data");
    gotoxy(10,8);   printf("5. Exit");
    gotoxy(10,10);  printf("Selection : ");
    getch();
    putchar('\n');

    return 0;
}
