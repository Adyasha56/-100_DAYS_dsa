#include<stdio.h>
int main(){
    int n,rev=0,lastdigit;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        lastdigit=n%10;        
         rev=rev*10+lastdigit;
         n=n/10;
    }
         if(temp==rev){
            printf("The number %d is a palindrome\n",temp);
         }
         else{
            printf("The number %d is not a palindrome\n",temp);
        }
    
    
    return 0;
}