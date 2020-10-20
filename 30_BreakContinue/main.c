#include <stdio.h>

void main()
{
    int day;

    printf("break statement [break out when day == 3]\n");
    for(day = 1 ; day <= 7 ; day++)
    {
        if(day == 3)
            break;
        printf("%d  ",day);
    }

    printf("\n\ncontinue statement [skip when day == 3]\n");
    for(day = 1 ; day <= 7 ; day++)
    {
        if(day == 3)
            continue;
        printf("%d  ",day);
    }
    printf("\n\n");
}
