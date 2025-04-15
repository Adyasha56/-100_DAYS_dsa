#include<stdio.h>
int main()
{
    int n, i, arr[100], hash[100] = {0};
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    
    printf("Enter elements (0-99):\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    // Build frequency hash
    for(i=0; i<n; i++){
        hash[arr[i]]++;
    }
    
    // Query system
    int q;
    printf("\n\nEnter number of queries: ");
    scanf("%d", &q);
    
    while(q-- > 0){
        int num;
        printf("Enter number to search: ");
        scanf("%d", &num);
        
        if(num >=0 && num <100){
            if(hash[num] > 0) 
                printf("%d exists (%d times)\n", num, hash[num]);
            else 
                printf("%d not found\n", num);
        }
        else {
            printf("Invalid number! Enter 0-99\n");
        }
    }
    
    // Display hash table
    printf("\nHash table contents:\n");
    for(i=0; i<100; i++){
        if(hash[i] > 0) 
            printf("Value %d: %d occurrences\n", i, hash[i]);
    }
    
    return 0;
}
