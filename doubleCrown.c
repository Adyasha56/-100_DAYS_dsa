#include <stdio.h>

int main() {
    int i, j, space = 0, n = 5;
    
    // Part 1: Inverted Crown
    for (i = 0; i < n; i++) {
        // Left stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        // Spaces in between
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        // Right stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        space += 2;
        printf("\n");
    }

    // Part 2: Crown
    space -= 2; // Adjust space for symmetry here cause yahi saala dikkat karta he
    for (i = 0; i < n; i++) {
        // Left stars
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        // Spaces in between
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        // Right stars
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        space -= 2;
        printf("\n");
    }

    return 0;
}
