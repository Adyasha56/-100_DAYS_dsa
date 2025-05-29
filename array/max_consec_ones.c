#include<stdio.h>
int main()
{
    int arr[20], n, i, count = 0, max_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array (0s and 1s only):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] != 0 && arr[i] != 1) {
            printf("Invalid input! Please enter only 0s and 1s.\n");
            return 1; 
        }
    }
    for(i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            if(count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }
    printf("The maximum number of consecutive 1s is: %d\n", max_count);
    return 0;
}