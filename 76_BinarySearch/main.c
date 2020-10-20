#include <stdio.h>
#define SIZE 15

//function Prototype
int binarySearch(int b[],int searchKey,int low,int high);
void printHeader(void);
void printRow(int b[],int low,int mid,int high);

void main()
{
    int a[SIZE];
    int i,key,result;

    //create data to array a
    for(i=0 ; i<SIZE ;i++)
    {
        a[i] = 2*i ;
    }

    printf("Enter a number 0 - 28 : ");
    scanf("%d",&key);
    printHeader();

    //search for key in array a
    result = binarySearch(a,key,0,SIZE-1);

    if(result != -1)
    {
        printf("\n%d found in array element %d\n\n",key,result);
    }
    else
    {
        printf("\n%d not found\n\n",key);
    }
}
//function used
int binarySearch(int b[],int searchKey,int low,int high)
{
    int middle;     //variable to hold middle element of array

    while(low <= high)
    {
        middle = (low + high)/2;        //middle element of subarray
        printRow(b,low,middle,high);    //display subarray

        if(searchKey == b[middle])      //searchkey = middle element
        {
            return middle;
        }
        else if(searchKey < b[middle])  //searchkey < middle element
        {
            high = middle-1;            //set new high
        }
        else                            //searchkey > middle element
        {
            low = middle+1;             //set new low
        }
    }
    return -1;      //searchkey not found
}

void printHeader(void)
{
    int i;
    printf("\nSubscripts :\n\n");

    for(i=0 ; i<SIZE ;i++)
    {
        printf("%3d ",i);
    }
    printf("\n");

    for(i=0 ; i<=4*SIZE ; i++)
    {
        printf("-");
    }
    printf("\n");
}

void printRow(int b[],int low,int mid,int high)
{
    int i;
    for(i=0 ; i<SIZE ; i++)
    {
        if(i<low || i>high)
        {
            printf("    ");
        }
        else if(i==mid)
        {
            printf("%3d*",b[i]);     //mark middle value
        }
        else
        {
            printf("%3d ",b[i]);
        }
    }
    printf("\n");
}
