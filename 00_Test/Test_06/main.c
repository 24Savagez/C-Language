#include <stdio.h>

void main()
{
    int score;

    printf("Input score : ");
    scanf("%d",&score);

    if(score >= 80)         printf("Grade A : Excellent");
    else if(score >= 75)    printf("Grade B+ : Very Good");
    else if(score >= 70)    printf("Grade B : Good");
    else if(score >= 65)    printf("Grade C+: Fairly Good");
    else if(score >= 60)    printf("Grade C : Fair");
    else if(score >= 55)    printf("Grade D+ : Poor");
    else if(score >= 50)    printf("Grade D : Very Poor");
    else                    printf("Grade F : Faillure");

    printf("\n");

}
