#include <stdio.h>
#include <math.h>
//conversion of binary number to decimal number and decimal number to binary numvber

// Function to convert Binary to Decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

// Function to convert Decimal to Binary
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, rem;
    while (decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

int main() {
    int choice, num;
    
    printf("Enter 1 to convert Binary number to Decimal Number\n");
    printf("Enter 2 to convert Decimal Number to Binary Number\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);

        printf("%d in Decimal is: %d\n", num,binaryToDecimal(num));
    } 
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        printf("%d in Binary number is:%d\n", num,decimalToBinary(num));
    } 
    else {
        printf("Invalid choice\n");
    }
    return 0;
}