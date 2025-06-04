//find the no in the array which occurs once and others twice

//brute will be linear search and do thye itearion update  the counter 
//better will be using hash and map data structure
//optimal will be using bit manipulation i.e xor operation

#include <stdio.h>
int main()
{
    int arr[100],n,i,xor=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }

    for(i=0;i<n;i++)
    {
        xor ^= arr[i]; // XOR operation
    }

    printf("The number that occurs once is: %d\n", xor);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)