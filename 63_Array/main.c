#include <stdio.h>

void main()
{
    int n[5];       //array a , data type is integer, 5 elements
    int count = 5;
    int sum;
    float average;

    printf("Enter 5 number : (use a space between each number)\n");
    scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
    sum = n[0] + n[1] + n[2] + n[3] + n[4];
    average = (float) sum/count;
    printf("\n");

    for(int i=1 ; i<=count ; ++i)
        printf("Element %d = %d\n",(i-1),n[i-1]);

    printf("\nSum of the five numbers entered is : %d\n",sum);
    printf("Average of the 5 numbers entered is : %f\n\n",average);
}
