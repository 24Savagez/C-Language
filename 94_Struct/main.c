#include <stdio.h>

void main()
{
    //variable struct
    struct spec{
        char manu[10];
        char model[20];
        char speed[10];
        float price;
    }computer;

    //wait for value of struct
    printf("The manufacturer of the CPU ?: ");
    gets(computer.manu);

    printf("The model of the CPU? : ");
    gets(computer.model);

    printf("The speed of the CPU? :");
    gets(computer.speed);

    printf("How much you paid for the computer? : ");
    scanf("%f",&computer.price);

    //print value of struct
    printf("\n** Here are what your entered **\n");
    printf("CPU                :%s\n",computer.manu);
    printf("Model              :%s\n",computer.model);
    printf("Speed              :%s\n",computer.speed);
    printf("Computer set price :%5.2f\n\n",computer.price);
}
