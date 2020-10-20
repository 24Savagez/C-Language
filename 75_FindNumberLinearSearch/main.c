#include <stdio.h>
#define SIZE 100

//function prototype
int linearSearch(int array[],int key,int size);

void main()
{
    int a[SIZE];    //create array a
    int x;
    int searchKey;
    int element;

    //create data and store to array a
    for(x=0 ; x<SIZE ; x++)
    {
        a[x] = 2 * x ;
    }

    /*for(int i=0 ; i<SIZE ; i++)
    {
        printf("a[%2d] = %3d\n",i,a[i]);
    }*/

    printf("Enter integer search key : ");
    scanf("%d",&searchKey);

    //attempt to locale searchKey in array a
    element = linearSearch(a,searchKey,SIZE);

    //display result
    if(element != -1)
    {
        printf("Found value in element %d\n\n",element);
    }
    else
    {
        printf("Value not found\n\n");
    }
}
//compare key to every element of array until the location is found or not found
int linearSearch(int array[],int key,int size)
{
    for(int n=0 ; n<size ; ++n)
    {
        if(array[n] == key)
        {
            return n;       //return location of key
        }
    }
    return -1;
}
