#include <stdio.h>

#define VAT 0.07                //defined constants
#define TXT "Product price"     //defined constants

void main()
{
    const float discount = 0.5;     //memory constants

    float full_price = 20000;
    float disc_price;

    disc_price = full_price * discount;

    printf("*** SHOCK PRICE SALES %d% ***\n\n",50);     //literal constants
    printf("%s\t\t%5.2f baht\n",TXT,full_price);
    printf("Special price \t\t%5.2f baht\n",disc_price);
    printf("Vat include   \t\t%5.2f baht\n",disc_price * VAT);
    printf("Net           \t\t%5.2f baht\n",disc_price * (1+VAT));

}
