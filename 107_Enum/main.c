#include <stdio.h>

enum MONTHS{
    JAN = 1 , FEB , MAR , APR , MAY , JUN ,
    JUL , AUG , SEP , OCT , NOV , DEC };

void main()
{
    enum MONTHS month;

    //initialize array of pointers
    const char *monthName[] = {
        " ", "January" , "February" , "March" , "April" ,
        "May" , "June" , "July" , "August" , "September" ,
        "October" , "November" , "December"};

    //loop through months
    for(month=JAN ; month<=DEC ; month++)
    {
        printf("[%2d] %-10s\n",month,monthName[month]);
    }
    printf("\n");
}
