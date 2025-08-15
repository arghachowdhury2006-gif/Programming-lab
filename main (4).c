#include<stdio.h>

int main()
{
    float num1,num2,sum;
    printf("enter first float number:");
    scanf("%f",&num1);
    
    printf("enter second float number");
    scanf("%f",&num2);
    sum = num1+num2;
    printf(" sum=%f", sum);
    
    return 0;
}