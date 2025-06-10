//no of sub arrays with sum K

#include <stdio.h>
int main() {
    int n, k, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the sum K: ");
    scanf("%d", &k);
    
    // Check all subarrays
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == k) {
                count++;
            }
        }
    }
    
    printf("Number of subarrays with sum %d: %d\n", k, count);
    return 0;
}