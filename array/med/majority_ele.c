//find thw majority element in an array using moore's voting algorithm

#include <stdio.h>
int main()
{
    int arr[100], n, i, count = 0, ele;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Moore's Voting Algorithm
    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ele = arr[i];
            count = 1;
        }
        else if (arr[i] == ele)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify if the found element is indeed the majority element

    int count1 = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count1++;
        }
    }
    if (count1 > n / 2)
    {
        printf("The majority element is: %d\n", ele);
    }
    else
    {
        printf("There is no majority element in the array.\n");
    }

    return 0;
}