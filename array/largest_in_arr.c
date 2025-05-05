#include<stdio.h>
int main()
{
    int arr[10],size,i;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("largest element in array is: %d",largest);
    return 0;
}