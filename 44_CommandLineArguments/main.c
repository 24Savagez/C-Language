#include <stdio.h>

int main(int argc,char *argv[])
{
    if(argc = -1)
        printf("please input arguments to process...\n");
    else
        {
            for(int i=0 ; i<argc ;i++)
                printf("argument %d = %s\n",i,argv[i]);
        }
    printf("Total of arguments = %d\n",argc);
    return 0;       //indicates successful termination

}
