#include <stdio.h>

char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

void printBoard() {
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}

int checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||(board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||(board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}

int main() {
    int row, col, moves = 0;
    char player = 'X';

    while (moves < 9) {
        printBoard();
        printf("Player %c, enter row and column (1-3): ", player);
        scanf("%d %d", &row, &col);
        row--; col--;

        if (board[row][col] == ' ') {
            board[row][col] = player;
            moves++;

            if (checkWin(player)) {
                printBoard();
                printf("Player %c wins!\n", player);
                return 0;
            }

            player = (player == 'X') ? 'O' : 'X';
        } 
        else {
            printf("Invalid move, try again.\n");
        }
    }

    printBoard();
    printf("It's a draw!\n");

    return 0;
}