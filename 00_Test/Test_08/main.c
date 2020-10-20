#include <stdio.h>

void main()
{
    int a,b,c;

    do
    {
        printf("\nInput value of A B and C : ");
        scanf("%d %d %d",&a,&b,&c);

        if(a > b)
            if(a > c)           printf("A is max");
            else if(a == c)     printf("AC is max");
                 else           printf("C is max");
        else
            if(b > c)
                if(b == a)      printf("AB is max");
                else            printf("B is max");

            else if(b == c)
                    if(b == a)  printf("ABC is max");
                    else        printf("BC is max");
                 else           printf("C is max");

        printf("\n");

    }while(a!=99 || b!=99 || c!=99);

}
