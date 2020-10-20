#include <stdio.h>

#define AREA(x) (3.14 * x * x)  //define macro with arguments

void main()
{
    float r1 = 6.25 , r2 = 2.5 , result;

    result = AREA(r1);
    printf("Area of circle = %f\n",result);

    result = AREA(r2);
    printf("Area of circle = %f\n",result);
}
