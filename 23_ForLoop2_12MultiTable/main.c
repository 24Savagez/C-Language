#include <stdio.h>
#include <conio.h>

void main()
{
    for(int i = 2 ; i <= 12 ; i++)
    {
        for(int j=1 ;j <= 12 ; j++)
        {
            printf("%d * %2d = %2d\n",i,j,i*j);
        }
        printf("\nPress any key...");
        getch();
        system("cls");  //clear screen
    }
}
