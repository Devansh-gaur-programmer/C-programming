#include <stdio.h>
//Swapping two inegers using 4 different methods

//swaping two numbers using Temporary Variable
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Swapping two numbers using Addition and Subtraction
void swap_add(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Swapping two numbers Using Multiplication and Division
void swap_mul(int *a, int *b) {
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

// Swapping two numbers Using Bitwise XOR
void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    printf("Enter first integers: ");
    scanf("%d", &x);

    printf("Enter second integers: ");
    scanf("%d", &y);

    int ogX = x, ogY = y;

    printf("Entered numbers are: x = %d, y = %d\n", x, y);

    swap_temp(&x, &y);
    printf("After swapping the given numbers using temporary variable: x = %d, y = %d\n", x, y);

    x = ogX;
    y = ogY;

    swap_add(&x, &y);
    printf("After swapping using addition and subtraction: x = %d, y = %d\n", x, y);

    x = ogX;
    y = ogY;

    swap_mul(&x, &y);
    printf("After swapping using multiplication and division: x = %d, y = %d\n", x, y);

    x = ogX;
    y = ogY;

    swap_xor(&x, &y);
    printf("After swapping using bitwise XOR: x = %d, y = %d\n", x, y);

    return 0;
}
