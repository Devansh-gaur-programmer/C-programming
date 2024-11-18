#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "cat";
    char guess;
    int attempts = 3;
    int length = strlen(word);
    int guessed[length];
    int i, correct = 0;

    for (i = 0; i < length; i++) {
        guessed[i] = 0;
    }

    printf("You have %d attempts to guess the word.\n", attempts);
    printf("It's an animal \n");

    while (attempts > 0 && correct < length) {
        printf("The structure of the word is: ");
        for (i = 0; i < length; i++) {
            if (guessed[i]) {
                printf("%c ", word[i]);
            } 
            else {
                printf("_ ");
            }
        }
        printf("\n");

        printf("Enter your guess: ");
        scanf(" %c", &guess);

        int found = 0;
        for (i = 0; i < length; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct++;
                found = 1;
            }
        }

        if (!found) {
            attempts--;
            printf("Wrong guess! You have %d attempts left.\n", attempts);
        }

        if (correct == length) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            return 0;
        }
    }

    if (attempts == 0) {
        printf("You've run out of attempts! The word was: %s\n", word);
    }

    return 0;
}