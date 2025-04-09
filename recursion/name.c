#include<stdio.h>
void f(int i,int n){
    if(i>n){
        return;
    }
    else{
        printf("hey haadsaa \n");
        f(i+1,n);
    }
}

int main(){
    int n,i;
    f(1,5);
}