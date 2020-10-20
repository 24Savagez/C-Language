#include <stdio.h>
#include <conio.h>

void main()
{
    int num1 = 100;
    int num2 = 50;
    char fk1,fk2;

    do
    {
        printf("<< MENU >>\n\n");
        printf("F1. Add\n");
        printf("F2. Subtract\n");
        printf("F3. Multiply\n");
        printf("F4. Devide\n");
        printf("F5. Modulus\n");
        printf("F9. Exit\n\n");
        printf("Selection : ");

        fk1 = getch();
        if(fk1 == 0)
        {
            fk2 = getch();
            switch(fk2)
            {
            case 59:    //add
                printf("F1. \n\n %3d + %2d = %4d",num1,num2,num1+num2);
                break;
            case 60:    //subtract
                printf("F2. \n\n %3d - %2d = %4d",num1,num2,num1-num2);
                break;
            case 61:    //multiply
                printf("F3. \n\n %3d * %2d = %4d",num1,num2,num1*num2);
                break;
            case 62:    //Devide
                printf("F4. \n\n %3d / %2d = %4d",num1,num2,num1/num2);
                break;
            case 63:    //Modulus
                printf("F5. \n\n %3d mod %2d = %4d",num1,num2,num1%num2);
                break;
            case 67:    //exit
                printf("F9. \n\n Thank you...");
                break;
            default:
                printf("Wrong input menu!");
            }
            printf("\n\n");
        }

    }while(fk2!=67);

}
