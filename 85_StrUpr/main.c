#include <stdio.h>
#include <string.h>

void main()
{
    char txt[] = "c language";

    printf("%s\n",txt);
    printf("%s\n\n",strupr(txt));
    printf("%s\n\n",strupr("FUNCTION strupr()"));
}
