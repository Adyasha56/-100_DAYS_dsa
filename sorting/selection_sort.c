#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using selection sort
    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Print
    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
