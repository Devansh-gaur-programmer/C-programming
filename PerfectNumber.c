#include <stdio.h>

// Perfect Number 

int main() {
    int num, i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }
    
    return 0;
}