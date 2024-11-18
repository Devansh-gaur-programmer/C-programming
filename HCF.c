#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter another number: ");
    scanf("%d", &n2);

    while (n1 != n2) {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("HCF = %d\n", n1);
    return 0;
}