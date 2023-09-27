#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ATTEMPTS 6
#define WORDS_COUNT 10

char* words[] = {
    "apple",
    "banana",
    "cherry",
    "dog",
    "elephant",
    "frog",
    "giraffe",
    "hamburger",
    "icecream",
    "jacket",
    "mouse"
};

int main() {
    srand(time(0));

    // Select a random word from the list
    int randomIndex = rand() % WORDS_COUNT;
    char* selectedWord = words[randomIndex];
    int wordLength = strlen(selectedWord);

    char guessedWord[wordLength];
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    char guessedLetters[MAX_ATTEMPTS];
    int attempts = 0;

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s\n", guessedWord);

    while (1) {
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);

        if (strchr(guessedLetters, guess) != NULL) {
            printf("You already guessed that letter.\n");
            continue;
        }

        guessedLetters[attempts] = guess;
        attempts++;

        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (selectedWord[i] == guess) {
                guessedWord[i] = guess;
                found = 1;
            }
        }

        if (strcmp(selectedWord, guessedWord) == 0) {
            printf("Congratulations! You guessed the word: %s\n", selectedWord);
            break;
        }

        printf("Word: %s\n", guessedWord);
        printf("Guessed letters: %s\n", guessedLetters);
        
        if (!found) {
            printf("Incorrect guess! You have %d attempts left.\n", MAX_ATTEMPTS - attempts);
            if (attempts >= MAX_ATTEMPTS) {
                printf("Out of attempts. The word was: %s\n", selectedWord);
                break;
            }
        }
    }

    return 0;
}

