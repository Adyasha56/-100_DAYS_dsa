//optimal solution for signwise arrangement of an array

#include <stdio.h>
int main()
{
    int arr[100],i,n,ans[100],j=0,k=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int pos = 0, neg = 1;
    for(i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    printf("The rearranged array in signwise order is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }
 return 0;
}