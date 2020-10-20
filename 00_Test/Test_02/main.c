#include <stdio.h>

void main()
{
    float Salary,Overtime,Tex,Income,Net;

    printf("Input Salary : "); scanf("%f",&Salary);
    printf("    Overtime : "); scanf("%f",&Overtime);

    Income = Salary + Overtime;
    Tex = Income * 0.1;
    Net = Income - Tex;

    putchar(10);
    printf("Income  = %8.2f Baht\n",Income);
    printf("Tax     = %8.2f Baht\n",Tex);
    printf("Net     = %8.2f Baht\n",Net);
}
