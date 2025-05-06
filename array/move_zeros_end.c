#include<stdio.h>
int main()
{
    int arr[10],i,n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Moving zeros to the end of the array
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }     
    }

    // Filling remaining positions with zeros
    while(count<n){
        arr[count]=0;
        count++;
    }

    printf("Array after moving zeros to the end: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
    return 0;

}