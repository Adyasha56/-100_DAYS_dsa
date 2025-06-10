//rotate by 90 degrees clockwise an n x n matrix

#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //transpose the matrix
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    //reverse each row
    for(i = 0; i < n; i++) {
        for(j = 0; j < n / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n - j - 1];
            a[i][n - j - 1] = temp;
        }
    }
    //print the rotated matrix
    printf("Rotated matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}