#include<stdio.h>
int main(){
    int n,i,rev=0,lastdigit;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        lastdigit=n%10; 
         n=n/10; 
         rev=rev*10+lastdigit; 
    }
    printf("Reversed number is: %d",rev);
    return 0;
}