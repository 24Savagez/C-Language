#include <stdio.h>
#include <math.h>       //include header file math.h

//function prototype
double round(double x);
double round2(double x);

void main()
{
    printf("ceil(8.1) = %.2f\n",ceil(8.1));
    printf("ceil(8.5) = %.2f\n",ceil(8.5));

    printf("floor(8.1) = %.2f\n",floor(8.1));
    printf("floor(8.5) = %.2f\n",floor(8.5));

    printf("ceil(-8.1) = %.2f\n",ceil(-8.1));
    printf("ceil(-8.5) = %.2f\n",ceil(-8.5));

    printf("floor(-8.1) = %.2f\n",floor(-8.1));
    printf("floor(-8.5) = %.2f\n",floor(-8.5));

    printf("round(8.1) = %.2f : ok.\n",round(8.1)); //function call
    printf("round(8.5) = %.2f : ok.\n",round(8.5)); //function call

    printf("round(-8.1) = %.2f : ok.\n",round(-8.1));   //function call
    printf("round(-8.5) = %.2f : ok.\n",round(-8.5));   //function call
}
//user-defined function
double round(double x)
{
    /*check positive or negative value
    if positive : rounds x with floor (x + 0.5);
    if negative : round x with ceil (x - 0.5)*/
        return x >= 0.0 ? floor(x+0.5) : ceil(x-0.5);
}
