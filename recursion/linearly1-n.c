#include<stdio.h>
void f(int i,int n){
    if(i>n){
        return;
    }
    else{
        printf("%d\n",i);
        f(i+1,n);   
    }
}

int main(){
    int n,i;
    f(1,10);
}