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
        if ((i == 0 || marks[i] >= marks[i - 1]) && (i == students - 1 || marks[i] >= marks[i + 1])) { 
            printf("A peak element is Student %c with score %d\n", 'A' + i, marks[i]);
            break;
        }
    }
    return 0;
}