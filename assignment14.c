#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = 10;
    int found;

    printf("your entered array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Duplicates in the array: ");
    for (int i = 0; i < n; i++) {
        found = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }
    return 0;
}