#include<stdio.h>
int main(){
    int a[20],i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size); 
    
    printf("Enter the elements of array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    int largest=a[0],second_largest=-1;
    for(i=0;i<size;i++){
        if(a[i]>largest){
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i]>second_largest && a[i]<largest){
            second_largest=a[i];
        }
    }
    if(second_largest==-1){
        printf("No second largest element found\n");
    }else{
        printf("The second largest element is: %d\n",second_largest);
    }
    
}