#include <stdio.h>
#define SIZE 5

//function prototype
void modifyArray(int b[],int size);
void modifyElement(int e);

void main()
{
    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Effects of passing entire array by reference:\n\n");
    printf("The values of the original array are:\n");
    //output original array
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
//////////////////////////////////////////////////////////////////////
    //pass array a to modifyArray of reference
    modifyArray(a,SIZE);

    printf("The values of the modified array are:\n");
    //output modified array
    for(i=0 ; i<SIZE ;i++)
    {
        printf("%3d",a[i]);
    }
///////////////////////////////////////////////////////////////////////

    printf("\n\nEffects of passing array element "
           "by value:\n\nThe value of a[3] is %d\n",a[3]);

    modifyElement(a[3]);    //pass array element a[3] by value
    //output value of a[3]
    printf("The value of a[3] is %d\n\n",a[3]);

}//end main

//* b[] points to the original array "a" in memory
void modifyArray(int b[],int size)
{
    for(int j=0 ; j<size ; j++)
    {
        b[j] *= 2;
    }
}

//* "e" is a local copy of array element a[3] passed from main
void modifyElement(int e)
{
    printf("Value in modifyElement is %d\n",e *= 2);
}


