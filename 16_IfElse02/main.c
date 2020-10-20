#include <stdio.h>

void main()
{
    int score;
    char grade;

    printf("Input score => ");
    scanf("%d",&score);

    if(score >= 80)
    {
        grade = 'A';
    }
        else if(score >= 70)
        {
            grade = 'B';
        }
        else if(score >= 60)
        {
            grade = 'C';
        }
        else if(score >= 50)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

    printf("Your Grade is %c\n",grade);
}
