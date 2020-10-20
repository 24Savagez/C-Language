#include <stdio.h>
#include <string.h>

void main()
{
    char string1[] = "BMW";
    char string2[] = "BENZ";
    int x,y,z;

    x = strcmp(string1,"BMW");
    y = strcmp(string1,string2);
    z = strcmp(string1,"BMX");

    printf("%s = BMW, Result is %d\n",string1,x);
    printf("%s = %s, Result is %d\n",string1,string2);
    printf("%s = BMX, Result is %d\n",string1,z);
}
