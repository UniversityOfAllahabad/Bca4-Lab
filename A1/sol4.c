#include <stdio.h>

void reverse(int len,char arr[]){
   printf("Reverse order of digits are:"); 
   for(int i=len;i>=0;i--){
       printf("%c",arr[i]);
   }
   printf("\n");
}

void main(){
    char array[100];
    int len;
    printf("Enter your number:");
    scanf("%s",array);
    len =0;
    while(array[len] != '\0'){
        len++;
    }
    reverse(len,array);
}