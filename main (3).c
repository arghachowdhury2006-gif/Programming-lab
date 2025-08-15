#include<stdio.h>

int main() {
    int num1,num2,sum;
    
    //Input from the user
    printf("Enter first integer");
    scanf("%d",&num1);
    
    printf("Enter second integer");
    scanf("%d",&num2);
    
    //Add the numbers
    sum= num1+num2;
    
    //Output the result
    printf("sum=%d\n",sum);
    
    return 0;
}