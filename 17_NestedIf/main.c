#include <stdio.h>
#include <conio.h>

void main()
{
    char weather,cool;

    printf("Weather is good? : ");
    weather = getche();

    if(weather == 'Y' || weather == 'y')  //ใช้ตัวเชื่อม OR เข้าร่วมตรวจสอบ
    {
        printf("\nCool enough? : ");
        cool = getche();
    }

    /*Nested IF */
    if(weather == 'Y' || weather == 'y')
    {
        printf("\nGo out in the yard. ");

            if(cool == 'Y' || cool == 'y')
                printf("Sit in the sun ");
            else
                printf("Sit in the shade ");
    }
    else
        printf("\nSit indoors ");

        printf("\nand to drink a cup of coffee\n\n");




}
