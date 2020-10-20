#include <stdio.h>
#define ROW 4
#define COL 5

void dispAddr(int n[ROW][COL]);

void main()
{
    int a[ROW][COL] = { {1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20} };

    //pass array a to function dispAddr()
    dispAddr(a);
    printf("\n");
}
//display address , elements and value of array a
void dispAddr(int n[ROW][COL])
{
    printf("Address  elements       Value\n");
    printf("=============================\n");

    for(int i=0 ; i<ROW ; i++)
    {
        for(int j=0 ; j<COL ; j++)
        {
            printf("%d\t a[%d][%d]\t %2d\n",&n[i][j],i,j,n[i][j]);
        }
    }
}
