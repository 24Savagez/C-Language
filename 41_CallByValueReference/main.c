#include <stdio.h>

//function prototype
void areaPeri(int r,float *a,float *p);

int main()
{
    int radius;
    float area = 0.0 , perimeter = 0.0;

    printf("Enter radius of a circle : ");
    scanf("%d",&radius);

    //mixed with call by value and by reference
    areaPeri(radius,&area,&perimeter);

    printf("Area = %f\n",area);
    printf("Perimeter = %f\n\n",perimeter);

}
void areaPeri(int r,float *a,float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;      //indirectly return 2 values
}
