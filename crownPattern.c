#include <stdio.h>

int main() {
    int i, j, n = 4, space = 2 * (n - 1);

    for (i = 0; i < n; i++) {
        // Print increasing sequence
        for (j = 0; j <= i; j++) {
            printf("%d", j + 1);
        }

        // Print spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Print decreasing sequence
        for (j = i; j >= 0; j--) {
            printf("%d", j + 1);
        }

        printf("\n");
        space -= 2; // Reduce spaces in each row
    }

    return 0;
}
