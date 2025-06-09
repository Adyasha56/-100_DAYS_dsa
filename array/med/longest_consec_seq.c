//longest consecutive sequence in an unsorted array

#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}   

int main()
{
    int arr[100],n,i,count=1,longest=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++) {
        int current = arr[i];
        count = 1;

        // Check for consecutive elements
        while (linearSearch(arr, n, current + 1) != -1) {
            count++;
            current++;
        }

        // Update longest if current count is greater
        if (count > longest) {
            longest = count;
        }
    }
    printf("The length of the longest consecutive sequence is: %d\n", longest);
    return 0;
}