#include <stdio.h>

void main()
{
    int score;
    printf("Input score => ");
    scanf("%d",&score);

    if(score >= 50)
    {
        printf("\nCongratulation! you passed\n");
    }
    else
    {
        printf("\nSorry! you failed\n");
    }
}
