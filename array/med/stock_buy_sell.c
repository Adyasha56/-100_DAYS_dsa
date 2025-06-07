//best time to buy and sell stock - problems on dynamic programming

#include <stdio.h>
int main()
{
    int arr[100],n,i,profit =0;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    printf("Enter the stock prices for each day: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min_price = arr[0];
    for(i=1;i<n;i++)
    {
        int cost = arr[i]- min_price;
        if(cost > profit)
        {
            profit = cost;
        }

        if(arr[i] < min_price)
        {
            min_price = arr[i];
        }
    }
    if(profit > 0)
    {
        printf("The maximum profit that can be made is: %d\n", profit);
    }
    else
    {
        printf("No profit can be made.\n");
    }
}