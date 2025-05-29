#include <stdio.h>

int main() {
    int xor1 = 0, xor2 = 0;
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor2 ^= arr[i]; 
    }

    for(i = 1; i <= n + 1; i++) {
        xor1 ^= i;  
    }

    int miss = xor1 ^ xor2;
    printf("The missing element is: %d\n", miss);

    return 0;
}
