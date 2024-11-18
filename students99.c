#include <stdio.h>

// students who scored 99
int main() {
    int students, i, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter the marks of the students:\n");
    for (i = 0; i < students; i++) {
        printf("Student %c: ", 'A' + i);
        scanf("%d", &marks[i]);
    }

    printf("Students who scored 99:");
    for (i = 0; i < students; i++) {
        if (marks[i] == 99) {
            printf("Student %c\n", 'A' + i);
            count++;
        }
    
    }
    if (count == 0) {
         printf("None of the students have scored 99 marks."); 
    }

    return 0;
}