#include <stdio.h>

void main()
{
    int *arr[4];        //array of integer pointers
    int a = 31 , b = 5 , c = 19 , d =71;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;

    //display address and value of a,b,c,and d
    printf("Address of a = %d, Value = %2d\n",&a,a);
    printf("Address of b = %d, Value = %2d\n",&b,b);
    printf("Address of c = %d, Value = %2d\n",&c,c);
    printf("Address of d = %d, Value = %2d\n",&d,d);
    printf("\n");

    //display address  and value of array arr
    for(int i=0 ; i<4 ; i++)
    {
        printf("Address of arr[%d] = %d, Value = %2d\n",i,&arr[i],arr[i]);
    }
    printf("\n");
}
