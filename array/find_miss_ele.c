#include<stdio.h>
int main(){
    int i,j,sum=0,n,sum2=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sum = n * (n + 1) / 2; 

    for(i=0;i<n-1;i++){
        sum2 += arr[i];
    }

    int miss = sum - sum2;
    printf("The missing element is: %d\n", miss);
    return 0;
}