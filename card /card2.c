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

/* Check if the value is 3 to 6 */
if((value > 2) && (value < 7))
    {
        puts("Count has gone up");
    }

/* Otherwise check if the card was 10, J, Q, or K */
else if (value == 10)
    {
       puts("Count has gone down");
    }
    
}