#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 100, num, guess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number within the specified range
    num = (rand() % (upper - lower + 1)) + lower;

    printf("Welcome to the Guess the Number game!\n");
    printf("I'm thinking of a number between %d and %d.\n", lower, upper);

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < lower || guess > upper) {
            printf("Please guess a number between %d and %d.\n", lower, upper);
        } else if (guess < num) {
            printf("Too low! Try again.\n");
        } else if (guess > num) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", num, attempts);
            break;
        }
    }

    return 0;
}

