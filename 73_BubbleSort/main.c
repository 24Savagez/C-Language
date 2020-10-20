#include <stdio.h>
#define SIZE 12

void main()
{
    //initialize array a
    int a[SIZE] = {2,6,4,8,10,12,89,12,45,37,50,77};

    int pass;       //passes counter
    int i;          //comparisons counter
    int temp;       //temporary location used to swap array elements

    printf("Data items in original order\n");

    //output original array
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%4d",a[i]);
    }

    //bubble sort
    //loop to control number of passes
    //for(pass=1 ; pass<SIZE ; pass++)
    //{
        for(i=0 ; i<SIZE-1 ; i++)
        {
            //compare adjacent element and swap them if first element is greater than second element
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    //}
    printf("\n\nData items in ascending order\n");

    //output sorted array
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n\n");
}
