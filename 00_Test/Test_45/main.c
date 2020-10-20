#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

void dspHeading(void);      //function prototype
void histogram(int,int);    //function prototype

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
    int pCount , fCount;
    char name[10],remark[6];
    int workshop,mid,fin,total;
    pCount = fCount = 0;
    dspHeading();

    for(int i=1 ; i<=2 ; i++)
    {
        gotoxy(5,i+4);      printf("%2d. ",i);
        gotoxy(9,i+4);      gets(name);

        do{gotoxy(22,i+4); scanf("%d",&workshop);
        }while(workshop < 0 || workshop > 20);

        do{gotoxy(30,i+4);  scanf("%d",&mid);
        }while(mid < 0 || mid > 30);

        do{gotoxy(37,i+4);  scanf("%d",&fin);
        }while(fin < 0 || fin > 50);

        total = workshop + mid + fin;
        if(total >= 50)
        {
            strcpy(remark,"Passed");
            pCount++;
        }
        else
        {
            strcpy(remark,"Failed");
            fCount++;
        }

        gotoxy(44,i+4);     printf("%d",total);
        gotoxy(52,i+4);     printf("%s",remark);
        fflush(stdin);
    }
    printf("\n\t======================================================\n\n");
    histogram(pCount,fCount);
}
void dspHeading(void)       //print heading
{
    printf("\t========================================================\n");
    printf("\t            workshop  MID    FIN    Total\n");
    printf("\tName          (20)    (30)   (50)   (100)   Remark\n");
    printf("\t========================================================\n");
}
void histogram(int passed,int failed)   //print histogram
{
    printf("Passed |");
    for(int i=1 ; i<= passed ; i++)
        printf("*");
    printf("\n       |\n\n");

    printf("Failed |");
    for(int i =1 ; i<= failed ; i++)
        printf("*");
    printf("\n       |\n\n");

    printf("       +----+----+----+\n");
    printf("       0    5    10   15\n");
}
