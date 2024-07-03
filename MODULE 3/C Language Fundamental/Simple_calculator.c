#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum,sub,mul,mod;
    float div;
    printf("Enter the value of num1 : ");
    scanf("%d",&num1);
    printf("\nEnter the value of num2 : ");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;
    printf("\nAddition of two numbers       = %d ",sum);
    printf("\nSubtraction of two numbers    = %d ",sub);
    printf("\nMultiplication of two numbers = %d ",mul);
    printf("\nDivision of two numbers       = %f ",div);
    printf("\nModulo of two numbers         = %d ",mod);
}