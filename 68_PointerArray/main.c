#include <stdio.h>

void main()
{
    //array of integer pointer
    int *arr[4];
    int a=31 , b=5 , c=19 , d=71;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;

    for(int i=0 ; i<4 ; i++)
    {
        printf("%3d\n",*(arr[i]));
    }
}
