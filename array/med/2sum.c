//2 sum problem, variety-1 , only yes or no 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000],n,i,j,sum;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum to be checked: ");
    scanf("%d", &sum);

    int hashmap[1000] = {0}; // Assuming the sum and elements are within this range
    for(i = 0; i < n; i++)
    {
        int complement = sum - arr[i];
        if(complement >= 0 && complement < 1000 && hashmap[complement] > 0)
        {
            //indices of those two ele 

            printf("Yes\n");
            printf("Indices: %d and %d\n", i, hashmap[complement] - 1);
            printf("Elements: %d and %d\n", arr[i], complement);
            return 0;
        }
        
        hashmap[arr[i]] = i + 1; // Store index + 1 to differentiate from zero
    }
    printf("No\n");
    return 0;

}