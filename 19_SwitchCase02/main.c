#include <stdio.h>

void main()
{
    int choice;
    int num1 = 100;
    int num2 = 50;

    printf("<< MENU >>\n\n");
    printf(" 1. Add\n");
    printf(" 2. Subtract\n");
    printf(" 3. Multiply\n");
    printf(" 4. Divide\n");
    printf(" 5. Modulus\n");
    printf(" 6. Exit\n");
    printf("\n Selection => ");
    scanf("%d",&choice);
    printf("\n");

    switch(choice)
    {
    case 1 : //add
        printf("%3d + %2d = %4d",num1,num2,num1+num2);
        break;
    case 2 : //subtract
        printf("%3d - %2d = %4d",num1,num2,num1-num2);
        break;
    case 3 : //multiply
        printf("%3d * %2d = %4d",num1,num2,num1*num2);
        break;
    case 4 : //divide
        printf("%3d / %2d = %4d",num1,num2,num1/num2);
        break;
    case 5 : //modulus
        printf("%3d mod %2d = %4d",num1,num2,num1%num2);
        break;
    case 6 : //exit
        printf("Thank you...");
        break;
    default :
        printf("Wrong input menu!");
    }
    printf("\n");
}
