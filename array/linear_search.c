#include<stdio.h>
int main()
{
    int arr[30],search,i,n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("Element found at index %d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("Element not found in the array\n");
    }
    else
    {
        printf("Element found %d times\n",count);
    }
    return 0;
}