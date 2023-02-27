#include <stdio.h>
#include <stdlib.h>
int main()
{

    char card_name[3];
    int count = 0;
    
    while ( card_name[0] != 'X') 
    {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        int value = 0;
        switch(card_name[0]) 
        {
        
        case 'K':
        case 'Q':
        case 'J':
            value = 10;
            break;
        
        case 'A':
            value = 11;
            break;
        case 'X':
            continue;
        default:
            value = atoi(card_name);
            if ((value < 1)||(value > 10))
            {
                puts("i dont understand");
                continue;
            }
        }
        
        if ((value > 2) && (value < 7)) 
        {
        
        count++;
        
        } 
        
        else if (value == 10) 
        {
        
        count--;
        
        }
        printf("Current count: %i\n", count);
    }
        return 0;
}







