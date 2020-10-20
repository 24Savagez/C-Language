#include <stdio.h>
#include <ctype.h>

void main()
{
    char answer = 'N';
    float value,total;
    int count = 0;
    value = total = 0.00;

    printf("This Program calculates the average of\n");

    for(;;)  //indefinite for loop
    {
        printf("\nEnter a value => ");
        scanf("%f",&value);
        total += value;
        ++count;

        /*check for more input */
        printf("\nDo you want to enter another value? (Y/N) : ");

        scanf(" %c",&answer);

        if(tolower(answer) == 'n')
        {
                break;
        }
    }
    printf("\nThe average is %.2f",total/count);
}
