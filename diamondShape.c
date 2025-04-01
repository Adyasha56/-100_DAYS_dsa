#include <stdio.h>
int main() {
    int i, j, rows = 5;

    // Upper Pyramid
    for (i = 1; i <= rows; i++) {
        //leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Inverted Pyramid
    for (i = rows - 1; i >= 1; i--) {
        //leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
