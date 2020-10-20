#include <stdio.h>
#include <conio.h>

//function Prototype
int getCHAR(void);

void main()
{
    char ch;

    printf("Enter any character : ");
    ch = getCHAR();     //call function
    printf("%c is %d for ASCII value\n",ch,ch);

}
//function
int getCHAR(void)
{
    char a;
    a = getch();
    return(a);      //return value
}
