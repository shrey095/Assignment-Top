/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,p,max=0;
    printf("Enter the N : ");
    scanf("%d",&n);
    //n=abs(n); extre : this function use for converting negative number(sign) to positive number
    for(;n>0; n=n/10)
    {
        p=n%10;
        if (p>max)
        {
           max=p;
        }
    }
    printf("The Max number = %d ",max);
}