//leader in an array optimal solution

#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leader[100], count = 0;
    for (i = 0; i < n; i++) {
        int isLeader = 1; // Assume arr[i] is a leader
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                isLeader = 0; // Found a greater element, not a leader
                break;
            }
        }
        if (isLeader) {
            leader[count++] = arr[i]; // Store the leader
        }
    }
    printf("The leaders in the array are: ");
    for (i = 0; i < count; i++) {
        printf("%d ", leader[i]);
    }
    printf("\n");
    return 0;
    
}