#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1; // Generate a random number

    int guess;
    int attempts = 0;

    printf("Guess the number between 1 - 100: \n");
    do
    {
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber)
        {
            printf("Too low! Try again: ");
        }
        else if (guess > randomNumber)
        {
            printf("Too high! Try again: ");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);
        }
    } while (guess != randomNumber);

    return 0;
}