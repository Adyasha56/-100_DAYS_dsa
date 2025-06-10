//set zeros in a matrix better solution by adding a row and colmn matrix extra

#include <stdio.h>

int main()
{
    int a[100][100], row[100] = {0}, col[100] = {0};
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) {
                row[i] = 1; // Mark the row
                col[j] = 1; // Mark the column
            }
        }
    }

    // Set rows to zero
    for(int i = 0; i < m; i++) {
        for(int j=0;j<n;j++){
            if(row[i] || col[j]) {
                a[i][j] = 0; // Set to zero if row or column is marked
            }
        }
    }

    // Print the modified matrix
    printf("Modified matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}