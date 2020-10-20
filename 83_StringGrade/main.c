#include <stdio.h>
#include <string.h>

void main()
{
    int score;
    char grade[2];      //level of grade
    char msg[12];       //message for each grade

    printf("Input score : ");
    scanf("%d",&score);

    if(score >= 80)
    {
        strcpy(grade,"A");
        strcpy(msg, "Excellent");
    }
    else if(score >= 75)
    {
        strcpy(grade,"B+");
        strcpy(msg, "Very Good");
    }
    else if(score >= 70)
    {
        strcpy(grade,"B");
        strcpy(msg, "Good");
    }
    else if(score >= 65)
    {
        strcpy(grade,"C+");
        strcpy(msg, "Fairly Good");
    }
    else if(score >= 60)
    {
        strcpy(grade,"C");
        strcpy(msg, "Fair");
    }
    else if(score >= 55)
    {
        strcpy(grade,"D+");
        strcpy(msg, "Poor");
    }
    else if(score >= 50)
    {
        strcpy(grade,"D");
        strcpy(msg, "Very Poor");
    }
    else
    {
        strcpy(grade,"F");
        strcpy(msg, "Failure");
    }
    printf("Your grade is %s and you're %s\n\n",grade,msg);
}
