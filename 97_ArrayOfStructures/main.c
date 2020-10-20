#include <stdio.h>
#define SIZE 3

void main()
{
    struct members{
        int id;
        char name[20];
        int age;
    };

    struct members info[SIZE];  //Array of structures
    int i;

    printf("Enter id name and age\n");
    printf("=====================\n");

    for(i=0 ; i<SIZE ; i++)
    {
        printf(" %2d) ",i+1);
        scanf("%d %s %d",&info[i].id,info[i].name,&info[i].age);
    }

    printf("\n\n        * Members Report *\n");
    printf("ID    Name                  Age \n");
    printf("================================\n");

    for(i=0 ; i<SIZE ; i++)
    {
        printf("%04d  %-20s  %2d\n",info[i].id,info[i].name,info[i].age);
        printf("\n");
    }
}
