#include<stdio.h>
int main()
{
    int n, last_digit,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        last_digit=n%10;
        printf("last digit is %d\n", last_digit);
        count++;
        n = n/10;
        
    }
    printf("the number of digits in the number is %d\n", count);
    return 0;
}