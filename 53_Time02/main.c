#include <stdio.h>
#include <time.h>

void main()
{
    time_t now;
    time(&now);

    printf("Current data and time is : %s\n",ctime(&now));
}
