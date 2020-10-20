#include <stdio.h>

#define AND &&
#define OR ||
#define BEGIN {
#define END    }
#define TXT printf("\nEnd of program!\n\n")

void main()
BEGIN
    int f=1, x=4 , y=90;

    if((f < 5) AND (x <= 20 OR y <=45))
        printf("Your PC will always work fine...\n");
    else
        printf("Your PC may be have virus!...\n");
    TXT;
END
