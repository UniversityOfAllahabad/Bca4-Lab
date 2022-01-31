#include <stdio.h>

void bubblesort(int len ,int array[]){
   int temp;
   for(int i=0;i<len;i++){
       for(int j=0;j<len-i;j++)
       {
         if(array[j] > array[j+1]){
           temp=array[j+1];
           array[j+1]=array[j];
           array[j]=temp; 
         }
       }
   }
}

void main(){
    int length=10, array[length];
    for(int k=0;k<length;k++){
        printf("Enter number %d:",k+1);
        scanf("%d",&array[k]);
    }
    bubblesort(length,array);
    printf("Sorted list:");
    for(int l=0;l<length;l++){
        printf("%d ",array[l]);       
    }

}