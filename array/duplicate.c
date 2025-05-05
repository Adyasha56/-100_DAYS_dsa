
#include <stdio.h>

int main() {
    int arr[100], size, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; ) {
            if(arr[i] == arr[j]) {
                // Shift elements left
                for(k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrease size
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
