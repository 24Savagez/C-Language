#include <stdio.h>

#define ER_MSG printf("Macro ER_MSG,Called at line : %d\n",__LINE__)

void main()
{
    printf("Compiled date : %s\n",__DATE__);
    printf("Compiled time : %s\n",__TIME__);
    printf("File name : %s\n",__FILE__);
    ER_MSG;
    printf("Current line : %d\n",__LINE__);
    printf("\n");
}
