#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char play_again;

    do
    {
        srand(time(0));
        int num = (rand() % 100) + 1;

        int guess;
        int attempts = 0;
        int max_attempts = 5;

        do 
        {
            printf("\nGuess a number from 1 to 100: \n");

            if(scanf("%d", &guess) != 1)    // error verification
            {
                printf("\nInvalid input. Please enter a number.\n");
                while (getchar() != '\n');  // clear input buffer
                continue;
            }

            if (guess < 1 || guess > 100)
            {
                printf("The number should be between 1 and 100.\n");
                continue;
            }

            attempts++;

            if (attempts == max_attempts && guess != num)
            {
                printf("\nYou lost, the correct number was %d.\n", num);
            }
            else if(guess == num)
            {
                printf("\nCongratulations, the correct number is %d!\n", num);
            }
            else if(guess <= (num+10) && guess >= (num+1))
            {
                printf("\nA bit less. Attempts remaining: %d\n", max_attempts - attempts);
            }
            else if(guess >= (num-10) && guess <= (num-1))
            {
                printf("\nA bit more. Attempts remaining: %d\n", max_attempts - attempts);
            }
            else if(guess > (num+10))
            {
                printf("\nToo high. Attempts remaining: %d\n", max_attempts - attempts);
            }
            else if(guess < (num-10))
            {
                printf("\nToo low. Attempts remaining: %d\n", max_attempts - attempts);
            }

        } while (guess != num && attempts < max_attempts);

        printf("\nDo you want to play again? (Y/N): \n");
        scanf(" %c", &play_again);
        
    } while (play_again == 'Y' || play_again == 'y');

    printf("Thanks for playing!\n");
    return 0;
}
