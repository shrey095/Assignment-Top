/*WAP to find factorial using recursion */
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Factorial = %d ",fact(n));
}
int fact(int n)
{
    if(n==0)
    {
        return 1;

    }
        return n*fact(n-1);
}