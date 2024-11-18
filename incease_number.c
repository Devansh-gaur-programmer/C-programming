#include <stdio.h>

int main() {
    int students;
    int marks[] = {99, 91, 85, 73, 55, 40, 32}; 
    
    students = sizeof(marks) / sizeof(marks[0]); 

    for (int i = 0; i < students; i++) {
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