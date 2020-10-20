#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void histogram(int,int);

void main()
{
    int freq11,freq12,freq13,freg14,freg15,face;
    freq11 = freq12 = freq13 = freg14 = freg15 = 0;

    srand(time(NULL));  //use clock value as starting seed

    for(int i=1 ; i<=80 ; i++)
    {
        face = 11 + rand()%5;   //random 11 to 15

        switch(face)
        {
            case 11 : ++freq11;     break;
            case 12 : ++freq12;     break;
            case 13 : ++freq13;     break;
            case 14 : ++freg14;     break;
            case 15 : ++freg15;     break;
        }
    }
    printf("\n Face\n");
    printf("    |\n");
    histogram(15,freg15);
    histogram(14,freg14);
    histogram(13,freq13);
    histogram(12,freq12);
    histogram(11,freq11);
    printf("    +----+----+----+----+----+----+----+----+----+----+ Frequency\n");
    printf("    0    5   10    15   20   25   30   35   40   45   50\n\n");
}
void histogram(int face,int frequency)
{
    printf(" %2d |",face);
    for(int i=1 ; i<=frequency ; i++)
        printf("#");
    printf(" (%d)\n",frequency);
    printf("    |\n");
}
