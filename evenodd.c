#include <stdio.h>

int main() {
    int students;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %c: ", 'A' + i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < students; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %c: Even\n", 'A' + i);
        } 
        else {
            printf("Student %c: Odd\n", 'A' + i);
        }
    }

    return 0;
}