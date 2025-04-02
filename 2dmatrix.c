#include <stdio.h>

// minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int i, j, n = 4;
    
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            int val = n - min(min(top, down), min(left, right));
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}
