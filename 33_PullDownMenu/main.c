#include <windows.h>
#include <stdio.h>
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

void main()
{
    int row = 3;
    char fk1,fk2;       //function key variable

    char *menu[5] = {" 1. Add Data    ",
                     " 2. Delete Date ",
                     " 3. Change Date ",
                     " 4. Inquiry     ",
                     " 5. Exit        "};

    printf("--==<< Main Menu >>==--");
    gotoxy(5,3);    puts(menu[0]);
    gotoxy(5,4);    puts(menu[1]);
    gotoxy(5,5);    puts(menu[2]);
    gotoxy(5,6);    puts(menu[3]);
    gotoxy(5,7);    puts(menu[4]);
    gotoxy(5,9);    puts("USe arrow UP/DOWN to move cursor");
    gotoxy(5,10);   puts("and press ENTER to select");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);       //black
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);       //white
    gotoxy(5,row);
    puts(menu[row-3]);

    while((fk1 = getch()) != '\r')
    {
        if(fk1 == 0)    //check for function key
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);   //white
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);    //black
            gotoxy(5,row);
            puts(menu[row-3]);

            fk2 = getch();
            switch(fk2)
            {
            case 72 :   //up arrow
                row = (row == 3)? 3 : --row;
                break;
            case 80 :   //down arrow
                row = (row == 7)? 7 : ++row;
                break;
            }
        }
        //reverse video text
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);    //black
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);   //white
        gotoxy(5,row);
        puts(menu[row-3]);
    }
    gotoxy(5,12);
    printf("You select item => %d\n\n",row-3+1);

}
