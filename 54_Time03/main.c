#include <stdio.h>
#include <time.h>

void main()
{
    static struct tm timeHolder;
    static struct tm *date = &timeHolder;

    time_t tloc;
    time(&tloc);
    date = localtime(&tloc);

    int Day = date -> tm_mday;
    int Month = date -> tm_mon + 1;
    int Year = date -> tm_year + 1900;

    //format date is dd mm yyyy
    printf("Current date is : %d %d %d\n\n",Day,Month,Year);
}
