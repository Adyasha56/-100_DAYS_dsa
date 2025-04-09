#include<stdio.h>
int main(){
    int sum=0,n,lastdigit;

    printf("Enter a number to check armstrong or not: ");
    scanf("%d",&n);
    int temp = n;
    while(n>0){
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==temp){
        printf("The number %d is armstrong\n",temp);
    }
    else{
        printf("The number %d is not armstrong\n",temp);
    }
    return 0;
}