#include<stdio.h>
int f(int n){
    if(n==0)
      return 1;
    return n * f(n-1);
}

int main(){
    int n;
    printf("Enter a number to print factorial: ");
    scanf("%d",&n); 
    f(n);
    printf("factorial of number %d is %d",n,f(n));

    return 0;
}