#include <stdio.h>

//function prototype
void line(void);

void main()
{
    line();     //เรียกใช้งานฟังก์ชัน โดยไม่มีการส่งผ่านค่าใดๆ
    printf("\t Colum1 \t Comlum2 \t Comlum3 \t Comlum4\n");
    line();
}
//function
void line()
{
    for(int i=1 ; i<=79 ; i++)
        printf("=");
    printf("\n");
}
