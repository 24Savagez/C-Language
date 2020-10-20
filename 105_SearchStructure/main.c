#include <stdio.h>

#define N 5
#define NULL 0

typedef struct{
    int id;
    float price;
    int year;
    float cpu_speed;
    char cpu_type[16];
} record;

//function prototype
record *search(record rec[],int id);

void main()
{
    //array of sturctures
    record model[N] = {
        {101 , 37500.00 , 2008 , 2.8 ,  "Core2-Duo"},
        {102 , 25000.00 , 2006 , 2.4 ,  "Dual-Core"},
        {103 , 21000.00 , 2005 , 2.15 , "Pentium-4"},
        {104 , 18500.00 , 2005 , 1.95 , "celeron"},
        {105 , 42000.00 , 2006 , 2.1 ,  "Xeon"}
    };

    int id_no;
    record *pt;

    printf("Computer Model Locator\n");
    printf("To END enter 0 for the ID-number\n");
    printf("\nID-number : ");
    scanf("%d",&id_no);

    while(id_no != 0)
    {
        pt = search(model,id_no);
        if(pt != NULL)  //found data
        {
            printf("CPU type  : %s\n",pt->cpu_type);
            //printf("ID number : %d\n",pt->id);
            printf("CPU speed : %2.2f GHz\n",pt->cpu_speed);
            printf("Year      : %d\n",pt->year);
            printf("Price     : %6.2f Baht\n",pt->price);
        }
        else
            printf("\nNot found - Please try again\n");

        printf("\nID-number : ");
        scanf("%d",&id_no);
    }// end of loop while
}
record *search(record rec[N],int id_no)
{
    int count;

    for(count=0 ; count<N ; ++count)
    {
        if(rec[count].id == id_no)  //found a match
            return(&rec[count]);    //return pointer to array element
    }
    return(NULL);
}
