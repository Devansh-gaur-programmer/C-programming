#include <stdio.h>
#include <time.h>

char ComputerChoice() {
    int seconds = ((int)time(NULL)) % 3;
    if (seconds == 0)
        return 'R'; 
    else if (seconds == 1)
        return 'P'; 
    else
        return 'S'; 
}

int main() {
    char userChoice, computerChoice;

    computerChoice = ComputerChoice();

    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf(" %c", &userChoice);

    printf("You chose: %c\n", userChoice);
    printf("Computer chose: %c\n", computerChoice);

    if (userChoice == computerChoice) {
        printf("It's a tie! Well played.\n");
    } 
    else if ((userChoice == 'R' && computerChoice == 'S') ||(userChoice == 'P' && computerChoice == 'R') ||(userChoice == 'S' && computerChoice == 'P')) {
        printf("Congratulations! You win!\n");
    } 
    else {
        printf("Oops! You lose. Better luck next time.\n");
    }
    return 0;
}