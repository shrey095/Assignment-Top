/*gram you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5) */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,ld,fd,sum;
    printf("Enter the N : ");
    scanf("%d",&n);
    ld=n%10;
    fd=n;
    for(;fd>=10; fd=fd/10)
    {
        
    }
    sum=fd+ld;
    printf("Sum = %d",sum);
}