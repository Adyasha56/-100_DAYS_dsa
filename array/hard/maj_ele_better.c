#include <stdio.h>

int main() {
    int arr[100], n, i;
    int count[100] = {0}; 
    int list[100], listSize = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count[arr[i]]++;

        if(count[arr[i]] > n/3) {
            // Check if already added
            int alreadyExists = 0;
            for(int j = 0; j < listSize; j++) {
                if(list[j] == arr[i]) {
                    alreadyExists = 1;
                    break;
                }
            }

            if(!alreadyExists) {
                list[listSize++] = arr[i];
            }
        }
    }

    printf("The majority elements are: ");
    for(i = 0; i < listSize; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}
