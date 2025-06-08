//rearrange the elements of an array in signwise order
#include <stdio.h>
int main()
{
    int arr[1000],n,i,j,pos[100],neg[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //add positive and negative elements to separate arrays
    j = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            pos[j] = arr[i];
            j++;
        }
    }
    j = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            neg[j] = arr[i];
            j++;
        }
    }

    for(i=0;i<n/2;i++)
    {
       arr[2*i] = pos[i];
       arr[2*i + 1] = neg[i];
    }

    printf("The rearranged array in signwise order is: ");
    for(i=0;i<n/2;i++)
    {
        printf("%d ", pos[i]);
        printf("%d ", neg[i]);
    }

    return 0;
}