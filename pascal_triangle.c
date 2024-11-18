#include <stdio.h>

int main() {
    int rows, i, j,space, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
        coef = 1;
    }

    return 0;
}