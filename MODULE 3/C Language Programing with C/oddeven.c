#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the value of Number : ");
    scanf("%d",&num);
    (num%2==0) ? printf("%d is Even Number ",num) : printf("%d is Odd Number ",num);
}