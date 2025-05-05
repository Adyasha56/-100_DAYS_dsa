#include<stdio.h>
int main()
{
    int arr[20],i,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    printf("Array after left rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}