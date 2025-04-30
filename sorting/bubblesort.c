#include<stdio.h>
int main()
{
    int arr[100], n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using bubble sort
    for (i = n-1; i >=1; i--)
    {
        int swapdone = 0;
        for (j = 0; j <=i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapdone = 1;
            }
        }
        if (swapdone == 0){
            break; // No swaps means the array is sorted
        }
        printf("runs\n");
    }

    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}