//dutch national flag algo to sort an array of 0s, 1s, and 2s

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000], n, i, low = 0, mid = 0, high;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array (0s, 1s, and 2s):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            // Swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            // Swap arr[mid] and arr[high]
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//time complexity: O(n)
//space complexity: O(1)