#include <stdio.h>
#include <math.h>

#define ROUND(X)  floor(X + 0.5)

void main()
{
    float num,result;

    for(;;)
    {
        printf("Input number : ");
        scanf("%f",&num);

        if(num == 99 || num < 0)
            break;

        result = ROUND(num);
        printf("Result = %.2f\n\n",result);
    }
}
