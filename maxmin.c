#include <stdio.h>

int main() {
    int students, i;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (i = 0; i < students; i++) {
        printf("Student %c: ", 'A' + i);
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    int min = marks[0];

    for (i = 1; i < students; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    printf("The maximum score is: %d \n", max);
    printf("The minimum score is: %d", min);

    return 0;
}