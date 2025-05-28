#include <stdio.h>

// Function to check if an element is present in the array
int isPresent(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem)
            return 1;
    }
    return 0;
}

// Function to compute the union of two arrays
void unionArrays(int arr1[], int size1, int arr2[], int size2) {
    int result[200];
    int k = 0;

    // Add unique elements from arr1
    for (int i = 0; i < size1; i++) {
        if (!isPresent(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }

    // Add unique elements from arr2
    for (int i = 0; i < size2; i++) {
        if (!isPresent(result, k, arr2[i])) {
            result[k++] = arr2[i];
        }
    }


    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}



int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    unionArrays(arr1, size1, arr2, size2);

    return 0;
}
