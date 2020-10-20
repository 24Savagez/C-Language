#include <stdio.h>

//function prototype
void swap(int *a,int *b);

int main()
{
    int a = 10 , b = 20;
    printf("\nBefore : a = %d , b = %d\n",a,b);

    swap(&a,&b);
    printf("\nAfter : a = %d , b = %d\n",a,b);

}
//function
void swap(int *a,int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;      //indirectly return 2 values
    printf("\nSwap() : a = %d , b = %d\n",*a,*b);
}
