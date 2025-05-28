#include<stdio.h>
int main()
{
    int arr[10],n, i,j=-1,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Moving zeros to the end of the array
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

if(j==-1)
    {
        return 0;
    }

for (i=j+1;i<n;i++)
{
     if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }           
}
printf("Array after moving zeros to the end: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

return 0;
}
        
