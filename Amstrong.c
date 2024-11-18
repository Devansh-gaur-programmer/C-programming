#include <stdio.h>

int main() {
    int num, onum, r, result = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    onum = num;

    while (onum != 0) {
        r = onum % 10;
        result += r * r * r;
        onum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;

}