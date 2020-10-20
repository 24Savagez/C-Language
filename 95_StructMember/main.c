#include <stdio.h>

void main()
{
    struct members{
        int id;
        char name[20];
        int age;
    };

    //define first value for struct
    struct members info = {1,"MarkSoy",19};

    printf("* Here is a sample *\n\n");
    printf("Member ID : %04d\n",info.id);
    printf("     Name : %s\n",info.name);
    printf("      Age : %2d\n",info.age);

}
