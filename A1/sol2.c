#include <stdio.h>
#include <stdbool.h>
int find_max(int a, int b, int c){
switch (a > b)
{
    case true:
       switch (a > c)
       {
            case true:
                printf("%d is greatest number\n",a);
                break;
       
            default:
                printf("%d is greatest number\n",c);
                break;
       }
       break;
    default:
        switch (b > c)
        {
          case true:
              printf("%d is greatest number\n",b);
              break;
          
          default:
              printf("%d is greatest number\n",c);
              break;
        }
        break;
    }   
}


void main(){
    int num1, num2, num3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&num1, &num2, &num3);
    find_max(num1, num2, num3); 
}