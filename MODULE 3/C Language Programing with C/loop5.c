/*WAP to print Fibonacci series up to given numbers */
#include<stdio.h>
#include<conio.h>
void main() 
{
    int i,n,first,second;
    float ans;
    printf("Enter the First Number ");
    scanf("%d",&first);
    printf("Enter the Second Number : ");
    scanf("%d",&second);
    
    ans=first+second;

    printf("Enter the Last Number : ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", first, second);

    for(i=2;i<=n;i++)
    {
       printf("%0.2f, ",ans);
       first = second;
       second = ans;
       ans= first + second;
    }
}


