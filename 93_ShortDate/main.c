#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[25];           //string of current date
    char today[12];         //final date variable
    int yearT;              //buddhist year(+543)

    //day , month and year variables
    char day[2];
    char month[3];
    char year[4];

    time_t now;
    time(&now);
    strcpy(str,ctime(&now));
    printf("Current date and time is : %s\n",str);

    sprintf(day,"%c%c",str[8],str[9]);
    sprintf(month,"%c%c%c",str[4],str[5],str[6]);
    sprintf(year,"%c%c%c%c",str[20],str[21],str[22],str[23]);
    yearT = atoi(year)+543;

    sprintf(today,"%s %s %d",day,month,yearT);
    printf("New format of short date : %s\n\n",today);
}
