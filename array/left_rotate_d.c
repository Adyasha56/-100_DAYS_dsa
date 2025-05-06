#include<stdio.h>
int main()
{
    int arr[30],i,n,d;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d",&d);
    if(d>n){
        printf("Number of positions to rotate cannot be greater than size of array.\n");
        return 1;
    }
    d=d%n; // To handle the case when d is greater than n

    int temp[d];

    // Store the first d elements in a temporary array
    for(i=0;i<d;i++){
        temp[i]=arr[i];
    }
    // Shift the remaining elements to the left
    for(i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    // Place the saved elements at the end of the array
    for(i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }

    printf("Array after left rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}