#include <stdio.h>

//function prototype
void readinput(int i);
void writeoutput(int i);

struct date{
    int day;
    int month;
    int year;
};
struct account{
    int acct_no;
    char acc_type;      //S=saving account , F=fix account
    char name[10];
    float balance;
    struct date contactdate;
}cust[100];

void main()
{
    int i , n;
    float total = 0.0;

    printf("How many customers are there? ");
    scanf("%d",&n);

    //input data
    for(i=0 ; i<n ; i++)
    {
        readinput(i);
    }

    //print report
    printf("\n\n** NEW CUSTOMER ACCOUNT **\n");
    printf("-----------------------------------------------\n");
    printf("Acc-no. Type   Name     contact date    Balance\n");
    printf("-----------------------------------------------\n");
    for(i=0 ; i<n ; i++)
    {
        writeoutput(i);
        total += cust[i].balance;
    }

    //print total
    printf("\n\t\t          * Total * %10.2f\n",total);
    printf("-----------------------------------------------\n\n");

}
void readinput(int i)
{
    printf("\nCustomer No.  %d\n",i+1);
    printf("    Acc-no.        : ");
    scanf("%d",&cust[i].acct_no);
    printf("    Acc-type (S/F) : ");
    scanf(" %c",&cust[i].acc_type);
    printf("    Name           : ");
    scanf(" %[^\n]",cust[i].name);
    printf("    Amount         : ");
    scanf("%f",&cust[i].balance);
    printf("    Contact Date   : ");        // dd//mm//yyyy
    scanf("%d/%d/%d",&cust[i].contactdate.day,
                     &cust[i].contactdate.month,
                     &cust[i].contactdate.year);
}
void writeoutput(int i)
{
    printf("%05d    %c    %-10s %02d/%02d/%4d   %8.2f\n",
            cust[i].acct_no,
            cust[i].acc_type,
            cust[i].name,
            cust[i].contactdate.day,
            cust[i].contactdate.month,
            cust[i].contactdate.year,
            cust[i].balance);
}
