#include <stdio.h>

int main() {
    int i, j,n=6,space = 2*n -2;
    for (i = 0; i <= 2*n-1; i++) {
        int stars = i;
        if(i>n){
            stars = 2*n -i;
        }
        for (j = 0; j <= stars; j++) {
            printf("*");
        }
        
        for (j = 0; j <= space; j++) {
            printf(" ");
        }

        for (j = 0; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
        if(i<n){
            space -= 2;
        }
        else{
            space += 2;
        }
    }

    return 0;
}
