#include <stdio.h>
#define SIZE 10

void main()
{
    //initialize array a
    int a[SIZE] = {0,66,4,89,10,12,8,-1,75,88};
    int max = a[0];
    int min = a[0];

    for(int i=0 ; i<SIZE ; i++)
    {
        if(a[i] > max)
        {
            max = a[i];     //compare maximum value
        }
        else if(a[i] < min)
        {
            min = a[i];    //compare minimum value
        }
    }
    printf("Max Value is %d\n",max);
    printf("Min value is %d\n\n",min);
}
