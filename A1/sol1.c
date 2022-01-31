#include <stdio.h>

int factorial(int i){
    if(i<=0){
        return 1;
    }
    else{
        return i * factorial(i -1);
    }
}

void main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    printf("factorial of %d is %d \n",num,factorial(num));

}