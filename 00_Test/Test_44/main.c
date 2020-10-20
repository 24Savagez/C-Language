#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int pCount,fCount;
    char name[10],remark[6];
    int workshop,mid,fin,total;
    pCount = fCount = 0;

    /*print heading*/
    printf("\t=======================================================\n");
    printf("\t            Workshop  MID     FIN     Total\n");
    printf("\tName          (20)    (30)    (50)    (100)   Remark\n");
    printf("\t=======================================================\n");

    for(int i=1 ; i<=5 ; i++)
    {
        gotoxy(5,i+4);  printf("%2d. ",i);
        gotoxy(9,i+4);  gets(name);

        do{gotoxy(22,i+4); scanf("%d",&workshop);
        }while(workshop<0 || workshop>20);

        do{gotoxy(30,i+4); scanf("%d",&mid);
        }while(mid<0 || mid>30);

        do{gotoxy(37,i+4);  scanf("%d",&fin);
        }while(fin<0 || fin>50);

        total = workshop+mid+fin;
        if(total >= 50)
        {
            strcpy(remark,"Passed");
            pCount++;
        }else
        {
            strcpy(remark,"Failed");
            fCount++;
        }
        gotoxy(44,i+4); printf("%d",total);
        gotoxy(52,i+4); printf("%s",remark);
        fflush(stdin);
    }
    printf("\n\t=======================================================\n\n");

    //print histogram
    printf("Passed |");
    for(int i=1 ; i<=pCount ; i++)
        printf("*");
    printf("\n       |\n");

     printf("failed |");
    for(int i=1 ; i<=fCount ; i++)
        printf("*");
    printf("\n       |\n");

    printf("       +----+----+----+\n");
    printf("       0    5    10   15\n");
}
