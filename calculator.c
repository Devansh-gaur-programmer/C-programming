#include <stdio.h>

int main() {
    char choice[10];
    float num1, num2;

    printf("Enter your choice \n (a)addition \n (s)subtraction\n (m)multiplication\n (d)division\n ");
    scanf("%s", choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (choice[0] == 'a') { 
        printf("%f + %f = %f\n", num1, num2, num1 + num2);
    } 
    else if (choice[0] == 's') { 
        printf("%f - %f = %f\n", num1, num2, num1 - num2);
    } 
    else if (choice[0] == 'm') { 
        printf("%f * %f = %f\n", num1, num2, num1 * num2);
    } 
    else if (choice[0] == 'd') { 
        if (num2 != 0)
            printf("%f / %f = %f\n", num1, num2, num1 / num2);
        else
            printf("Error! Division by zero.\n");
    } 
    else {
        printf("Error! Invalid operation.\n");
    }
    return 0;
}