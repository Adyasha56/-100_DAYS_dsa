#include <stdio.h>

int ncr(int n, int r) {
    int res = 1;  
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;   
}

int main() {
    int n, r;
    printf("Enter the row and column (0-indexed): ");
    scanf("%d %d", &n, &r);
    
    if (r < 0 || r > n) {
        printf("-1\n");  // Invalid case
        return 0;
    }
    
    int res = ncr(n, r);
    printf("%d\n", res);
    
    return 0;
}
