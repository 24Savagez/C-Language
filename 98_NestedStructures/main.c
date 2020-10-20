#include <stdio.h>

void main()
{
    struct date{
        int day;
        int month;
        int year;
    };

    struct account{
        int acct_no;
        char acc_type;      //S=saving account, F=fix account
        char name[15];
        float balance;
        struct date contactdate;
    };

    struct account cust[] =
    {
        {10001 , 'S' , "Somponng" , 4750.15 , {10,1,2015}},
        {10002 , 'S' , "Somsri" , 1200.00 , {19,3,2015}},
        {10010 , 'F' , "Somjai" , 18500.25 , {8,12,2016}},
        {10018 , 'S' , "Somying" , 9820.38 , {28,10,2016}},
        {10019 , 'F' , "Somjit" , 5255.12 , {16,4,2017}}
    };

    int i;
    printf("Acc-no. Type   Name       Balance   Contact date\n");
    printf("-------------------------------------------------\n");
    for(i=0 ; i<5 ;i++)
    {
        printf("%6d   %c   %-10s  %8.2f    %02d/%02d/%4d\n",
               cust[i].acct_no, cust[i].acc_type,
               cust[i].name, cust[i].balance,
               cust[i].contactdate.day,
               cust[i].contactdate.month,
               cust[i].contactdate.year
               );

        printf("-------------------------------------------------\n\n");
    }
}
