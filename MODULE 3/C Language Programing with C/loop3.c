/*WAP to print table up to given numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j;
    printf("Enter the table N : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        j=n*i;
        printf("\n%d * %d = %d ",n,i,j);
    }
}