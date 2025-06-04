//longest sub array with sum k
//brute force will be to check all the sub arrays and check the sum
//better will be to use hash map to store the sum and check if the sum-k exists
////optimal will be to use two pointers or sliding window technique

#include <stdio.h>
int main()
{
    int arr[100],n,k,i,j,maxlen=0,start=0,end=0,sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the sum k: ");
    scanf("%d",&k);

    while(end<n){
        while(start<=end && sum > k){
            sum -= arr[start];
            start++;
        }
        if(sum == k){
            maxlen = (end - start + 1 > maxlen) ? (end - start + 1) : maxlen;
        }
        end++;
        if(end < n) {
            sum += arr[end];
        }
       
   

    }
     printf("maxlen: %d", maxlen);
     return 0; 

}