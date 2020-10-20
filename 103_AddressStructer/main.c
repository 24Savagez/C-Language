#include <stdio.h>

void main()
{
    struct book{
        char name[30];
        char author[20];
        int callno;
    };

    struct book rec = {"Database Systems","Ophas",103};
    struct book *pt;

    pt = &rec;
    printf("Details of this book\n");
    printf("--------------------\n");
    printf("Name     : %-30s Addr: %d\n",pt->name,&pt->name);
    printf("Author   : %-30s Addr: %d\n",pt->author,&pt->author);
    printf("Call-no. : %-30d Addr: %d\n\n",pt->callno,&pt->callno);
}
