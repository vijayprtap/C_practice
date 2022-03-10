// number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, ngusses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("GUESS THE NUMBER \n");
        scanf("%d", &guess);
        if (number < guess)
        {
            printf("Try a Lower Number\n");
        }
        else if(number > guess)
        {
            printf("Try a Higher Number\n");
        }
        else{
            printf("CONGRATULATIONS\n you gussed it in %d Attempts",ngusses);
        }
         ngusses++;
    } 
    while(guess != number);

    return 0;
}