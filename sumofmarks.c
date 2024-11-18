#include <stdio.h>

int main() {
    int students, sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %c: ", 'A' + i);
        scanf("%d", &marks[i]);
        sum += marks[i]; 
    }

    printf("The sum of all scores is: %d", sum);

    return 0;
}