#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
{
    char Name[80];
    char Grade;
    int Workshop,Mid,Fin,Score;

    printf("\t############################################\n");
    printf("\t##                                        ##\n");
    printf("\t##  Student Name :                        ##\n");
    printf("\t##      workshop :                        ##\n");
    printf("\t##           mid :                        ##\n");
    printf("\t##           fin :                        ##\n");
    printf("\t##                                        ##\n");
    printf("\t##         score :                        ##\n");
    printf("\t##                                        ##\n");
    printf("\t##         grade :                        ##\n");
    printf("\t##                                        ##\n");
    printf("\t############################################\n");

    gotoxy(30,2);   gets(Name);
    gotoxy(30,3);   scanf("%d",&Workshop);
    gotoxy(30,4);   scanf("%d",&Mid);
    gotoxy(30,5);   scanf("%d",&Fin);

    Score = Workshop + Mid + Fin;
    gotoxy(30,7);   printf("%d\n",Score);

    if(Score > 80) Grade = 'A';
    else if(Score >= 70) Grade = 'B';
    else if(Score >= 60) Grade = 'C';
    else if(Score >= 50) Grade = 'D';
    else Grade = 'F';
    gotoxy(30,9); printf("%c\n",Grade);
    gotoxy(1,13);       //for new line

}
