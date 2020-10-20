#include <stdio.h>

//function prototype
void display(char *s,char *t,int n);

void main()
{
    struct book{
        char name[30];
        char author[20];
        int callno;
    };

    struct book rec = {"Programming with C","Ophas",101};

    display(rec.name,rec.author,rec.callno);
}
void display(char *s,char *t,int n)
{
    printf("Details of this book\n");
    printf("--------------------\n");
    printf("Name     : %s\n",s);
    printf("Author   : %s\n",t);
    printf("Call-no. : %d\n\n",n);
}
