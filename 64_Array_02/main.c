#include <stdio.h>

void main()
{
    //array of pointer
    char *name[10]  = {"Somsak","Somyod","Somchai","Somrak",
                       "Somsri","Somsuk","Somjai","Somjit",
                       "Sompong","Somchok"};

    int salary[10] = {12000,15000,21000,13000,25000,
                      10000,28000,18000,19500,32000};

    int bonus[10] = {5000,5000,5000,8000,10000,
                     10000,8000,7500,6500,9000};

    float income[10];

    printf("\t## Payroll Report ##\n\n");
    printf(" Seq. Name    salary  Bonus   Income\n");
    printf("======================================\n");

    for(int i=1 ; i<=10 ; i++)
    {
        income[i-1] = salary[i-1] + bonus[i-1];
        printf(" %2d %-10s %5d %5d  %8.2f\n",i,name[i-1],
               salary[i-1],bonus[i-1],income[i-1]);
    }
    printf("======================================\n\n");
}
