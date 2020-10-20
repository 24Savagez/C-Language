#include <stdio.h>

void main()
{
    int a,b,answer;
    a = 4;
    b = 2;

    //answer = a > b ? a : b;

    answer += (a > 0 && a <= 5) ? ++a : a/b;

    printf("Maximum Value : %d\n",answer);

}
