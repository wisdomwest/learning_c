#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("enter the card name: ");
    scanf("%2s", card_name);

    int value = 0;
    switch(card_name[0])
    {
        case 'K':
        case 'Q':
        case 'J':
        value = 10;
        break;
        /*keeps going until it is told to break out of the switch statement. So k,q,j all become 10*/
        case 'A':
        value = 11;
        break;
        
        default:
        value = atoi(card_name);
    }
}