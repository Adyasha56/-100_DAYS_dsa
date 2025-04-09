#include<stdio.h>
void f(int i,int n){
  if(i<1){
    return;
  }
  else{
    printf("%d\n",i);
    f(i-1,n);   
  }
}

int main(){
    int n,i;
    f(4,4);
}