#include <stdio.h>
#include <math.h>

void main()
{
    printf("sqrt(5)         = %f\n",sqrt(5));
    printf("fabs(-2.5)      = %2.f\n",fabs(-2.5));
    printf("pow(2,8)        = %g\n",pow(2,8));
    printf("fmod(11,3)      = %g\n",fmod(11,3));
    printf("ceil(5.4)       = %.2f\n",ceil(5.4));
    printf("ceil(5.85)      = %.2f\n",ceil(5.85));
    printf("ceil(-5.4)      = %.2f\n",ceil(-5.4));
    printf("ceil(-5.85)     = %.2f\n",ceil(-5.85));
    printf("floor(8.9)      = %.2f\n",floor(8.9));
    printf("floor(8.1)      = %.2f\n",floor(8.1));
    printf("floor(-8.9)     = %.2f\n",floor(-8.9));
    printf("floor(-8.1)     = %.2f\n",floor(-8.1));
}
