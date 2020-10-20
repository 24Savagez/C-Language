#include <stdio.h>
#include <conio.h>

void main()
{
    char fk1,fk2;   //function key variable
    char flag = 'N';

    for(;;)
    {
        system("cls");
        printf("[F1] Add Data \n");
        printf("[F2] Delete Data \n");
        printf("[F3] Change Data \n");
        printf("[F4] Inquiry Data \n");
        printf("[F5] Exit \n\n");
        printf("Press F1-F5 to select : ");

        fk1 = getch();
        if(fk1 == 0)        //check for function key only
        {
            fk2 = getch();

            switch(fk2)
            {
            case 59:
                printf("\nYou press F1:Add Data\n");
                break;
            case 60:
                printf("\nYou press F2:Delete Data\n");
                break;
            case 61:
                printf("\nYou press F3:Change Data\n");
                break;
            case 62:
                printf("\nYou press F4:Inquiry\n");
                break;
            case 63:
                printf("\nYou press F5:Exit\n");
                flag = 'Y';
                break;
            }
            getch();
        }
        if(flag == 'Y')
        {
            break;
        }
    }
}
