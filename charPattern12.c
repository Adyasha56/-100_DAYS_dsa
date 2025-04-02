#include<stdio.h>
int main()
{
    int i,j,n=5;
    char ch = 'E';
    for(i=0;i<n;i++){
        for(ch = 'E'-i;ch <= 'E';ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}