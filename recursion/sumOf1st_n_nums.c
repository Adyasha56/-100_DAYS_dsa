#include<stdio.h>
int f(int n){
    if(n==0)
     return 0;
    return n+f(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); 
    f(n);
    printf("Sum of first %d numbers is %d",n,f(n));

    return 0;
}