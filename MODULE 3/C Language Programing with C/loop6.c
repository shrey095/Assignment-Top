/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,rev=0,p,temp;
    printf("Enter the N : ");
    scanf("%d",&n);
    temp=n;
    for(;n>0; n=n/10)
    {
        p=n%10;
        rev=10*rev+p;
    }
    printf("\n%d is the  reversed number of  %d ",rev,temp);
}