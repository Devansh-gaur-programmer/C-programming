#include <stdio.h>

int main() {
    int students, i, found = 0;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (i = 0; i < students; i++) {
        printf("Student %c: ", 'A' + i);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < students; i++) {
        if (marks[i] == 99) {
            printf("The first student who scored 99 is Student %c \n", 'A' + i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No student scored 99 \n");
    }
    return 0;
}