#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("enter the card name: ");
    scanf("%2s", card_name);
    int value = 0;

    if(card_name[0] == 'K')
    {
        value = 10;
    } 

    else if(card_name[0] == 'Q')
    {
        value = 10;
    }

    else if(card_name[0] == 'J')
    {
        value = 10;
    }

    else if(card_name[0] == 'A')
    {
        value = 11;
    }
    else
    {
        value = atoi(card_name);
    }

printf("The card name value is: %d\n", value);
return 0;

}
