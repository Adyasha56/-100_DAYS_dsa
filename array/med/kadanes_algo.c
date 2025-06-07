//kadanes algo to find the maximum sum of a contiguous subarray

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int max_sum = 0, current_sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    if (max_sum == 0)
    {
        printf("The maximum sum of a contiguous subarray is: 0\n");
    }
    else
    {
        printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);
    }
    return 0;
}