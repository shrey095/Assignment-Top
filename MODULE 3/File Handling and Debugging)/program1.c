/*Write a program to find out the max number from given array using function */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],max=0;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of A[%d] : ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
  /*  for(i=0;i<n;i++)
    {
        printf("\nvalue of A[%d] = %d ",i,a[i]);
    }*/
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];    
        }
    }
    printf("\nMax number = %d ",max);
}