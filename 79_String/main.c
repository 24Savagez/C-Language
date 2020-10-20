#include <stdio.h>
#include <string.h>

void main()
{
    //initializing string
    char txt1[] = {'H','e','l','l','o',' ','C','\0'};
    char txt2[] = {'H','e','l','l','o',' ','C'};
    char txt3[8] = {'H','e','l','l','o',' ','C','\0'};
    char txt4[] = "Hello C";

    int size = 6;

    printf("txt1 = %s\n",txt1);
    printf("txt2 = %s\n",txt2);
    printf("txt3 = %s\n",txt3);
    printf("txt4 = %s\n\n",txt4);

    printf("%c = ",txt1[size]);
    printf("%c = ",txt2[size]);
    printf("%c = ",txt3[size]);
    printf("%c\n\n",txt4[size]);
}
