#include <stdio.h>

void main()
{
    struct members{
        int id;
        char name[20];
        int age;
    };

    //fill value in struct
    struct members info = {1,"FirstSoy",20};

    //print address of struct
    printf("\nAddress of id     = %d",&info.id);
    printf("\nAddress of name   = %d",&info.name);
    printf("\nAddress of age    = %d",&info.age);
    printf("\n\n");

}
