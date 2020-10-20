#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define ROW 10
#define COL 10
#define line1 " 1   2   3   4   5   6   7   8   9   10 "
#define line2 "+---+---+---+---+---+---+---+---+---+---+"

void depSeat(void);     //function prototype
char seat[ROW][COL];    //global variable

void main()
{
    int row,col;

    //clear all seats
    for(row=0 ; row<ROW ; row++)
    {
        for(col=0 ; col<COL ; col++)
        {
            seat[row][col] = ' ';
        }
    }
    for(; ;)    //infinite loop
    {
        dspSeat();
        printf("\nEnter seat row and column : ");
        scanf("%d %d",&row,&col);

        if(row == 99 && col == 99)      //exit loop
        {
            break;
        }
        else if(seat[row-1][col-1] == '*')
        {
            printf("\nRESERVED...please book another seat.");
            getch();
        }
        else
        {
            seat[row-1][col-1] = '*';   //mark "*" for reserve
        }
    }
    printf("Thank you....\n\n");
}
void dspSeat(void)
{
    system("cls");
    int i,j;

    printf("\n\tH o l i d a y  T h e r t e r \n\n");
    printf("   %s\n",line1);

    for(i=1 ; i<=ROW ; i++)
    {
        printf("  %s\n",line2);
        printf("%2d",i);

        for(j=1 ; j<=COL ; j++)
        {
            printf("| %c ",seat[i-1][j-1]);
        }
        printf("|\n");
    }
    printf("  %s\n",line2);
}
