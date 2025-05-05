#include <stdio.h>

int main() {
    int arr[20], size, i, isSorted = 1;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < size; i++) {
        if(arr[i] < arr[i - 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted) {
        printf("Array is sorted in non-decreasing order.\n");
    } else {
        printf("Array is not sorted.\n");
    }

    return 0;
}
