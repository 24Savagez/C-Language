#include <stdio.h>

//function prototype
void display(struct book r);

struct book{
    char name[30];
    char author[20];
    int callno;
};

void main()
{
    struct book record = {"Systems Analysis and design","Ophas",102};
    display(record);
}
void display(struct book r)
{
    printf("Details of this  book\n");
    printf("---------------------\n");
    printf("Name     : %s\n",r.name);
    printf("Author   : %s\n",r.author);
    printf("Call-no  : %d\n\n",r.callno);
}
