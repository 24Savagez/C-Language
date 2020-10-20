#include <stdio.h>

void main()
{
    struct s{
        int id;
        float price;
        int year;
        float cpu_speed;
        char cpu_type[16];
    } st;

    union u {
        int id;
        float price;
        int year;
        float cpu_speed;
        char cpu_type[16];
    } un;

    printf("** FIELD SIZE **\n");
    printf("id        : %2d-byte\n",sizeof(st.id));
    printf("price     : %2d-byte\n",sizeof(st.price));
    printf("year      : %2d-byte\n",sizeof(st.year));
    printf("cpu_speed : %2d-byte\n",sizeof(st.cpu_speed));
    printf("cpu_type  : %2d-byte\n\n",sizeof(st.cpu_type));

    printf("The size of struct st : %d-byte\n",sizeof(st));
    printf("The size of struct u  : %d-byte\n",sizeof(un));
}
