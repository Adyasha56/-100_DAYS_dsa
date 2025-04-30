#include <stdio.h>

int main() {
    int n, i, number;
    int arr[100];       
    int freq[100] = {0}; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (0 to 99):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Update frequency map
        freq[arr[i]]++;
    }

    printf("\nFrequencies of unique elements:\n");
    for (i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
