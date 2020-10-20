#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int limit = 9 ;     //max limit
    srand(time(NULL));  //use clock value as starting seed

    for(int j=1 ; j<=30 ; j++)
    {
        printf(" %d\t",1+(rand()%limit));
    }
}
