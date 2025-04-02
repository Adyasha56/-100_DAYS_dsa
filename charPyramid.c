#include<stdio.h>
int main(){
    int i,j,n=5; 
    char ch='A';
    //row- outerloop
    for(i=0;i<n;i++){
        //for spaces
        for(j=0;j< n-i-1;j++){
            printf(" ");
        }

        //for alphabets
        int breakpoint = (2*i+1) /2 ;
        for(j =0;j<=2*i+1;j++){
            printf("%c",ch);
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        //for spaces
        for(j=0;j< n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}