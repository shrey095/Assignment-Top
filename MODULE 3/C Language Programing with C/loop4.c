/*WAP to print factorial of given number*/
#include<stdio.h>
#include<conio.h>
void main() 
{
    int n, i;
    float fact = 1;
    printf("Enter the N : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for (i=1;i<=n;i++) 
        {
            fact = fact*i;
        }
        printf("Factorial of %d = %0.2f ",n,fact);
    }
}