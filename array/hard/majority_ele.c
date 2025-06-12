#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int count;
    int list[100], listSize = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        // Check if this element is already in the list
        int alreadyExists = 0;
        for (j = 0; j < listSize; j++) {
            if (list[j] == arr[i]) {
                alreadyExists = 1;
                break;
            }
        }

        if (alreadyExists)
            continue;

        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > n / 3) {
            list[listSize++] = arr[i];
        }
    }

    printf("The majority elements are: ");
    for (i = 0; i < listSize; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}
