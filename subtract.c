#include <stdio.h>

//subtracting two integers without using Minus (-) operator. 
int subtract(int a, int b) {

    while (b != 0) {
        int sub = (~a) & b;
        a = a ^ b;
        b = sub << 1;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int result = subtract(a, b);
    printf("Result = %d\n", result);
    return 0;
}