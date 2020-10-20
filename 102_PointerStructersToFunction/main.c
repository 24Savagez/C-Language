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
    printf("Name     : %s\n",pt->name);
    printf("Author   : %s\n",pt->author);
    printf("Call-no  : %d\n\n",pt->callno);
    printf("\n\n");

    printf("Details of this book\n");
    printf("--------------------\n");
    printf("Name     : %s\n",(*pt).name);
    printf("Author   : %s\n",(*pt).author);
    printf("Call-no  : %d\n\n",(*pt).callno);
}
