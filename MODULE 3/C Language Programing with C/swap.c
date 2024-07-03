#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,temp;
    printf("Enter the value of num1 : ");
    scanf("%d",&num1);
    printf("Enter the value of num2 : ");
    scanf("%d",&num2);
    printf("\nBefor swaping num1 value = %d ",num1);
    printf("\nBefor swaping num2 value = %d ",num2);
   /* temp=num1;
    num1=num2;
    num2=temp;*/

    /* num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;*/

    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("\n\nAfter swaping num1 value = %d ",num1);
    printf("\nAfter swaping num1 value = %d ",num2);
}