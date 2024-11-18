#include <stdio.h>

int main() {
    int students, i;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (i = 0; i < students; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < students; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: A grade\n", i + 1);
        } else if (marks[i] >= 60) {
            printf("Student %d: B grade\n", i + 1);
        } else if (marks[i] >= 40) {
            printf("Student %d: C grade\n", i + 1);
        } else {
            printf("Student %d: D grade\n", i + 1);
        }
    }

    return 0;
}