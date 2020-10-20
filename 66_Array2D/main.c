#include <stdio.h>


void main()
{
    int i,total;
    int sc[2][3];

    printf("Input score of Math , Science and Physics\n\n");

    for(i=0 ; i<2 ; i++)
    {
        printf("Person #%2d => ",i+1);
        scanf("%d %d %d",&sc[i][0],&sc[i][1],&sc[i][2]);
    }
    //display report
    printf("\n\nSeq.    MATH    SCI     PHY     Total\n");
    printf("=========================================\n");
    for(i=0 ; i<2 ; i++)
    {
        total = sc[i][0] + sc[i][1] + sc[i][2];
        printf("%2d\t %2d\t %2d\t %2d\t %2d\n",i+1,sc[i][0],sc[i][1],sc[i][2],total);
    }
}
