/*. WAP to take 10 no. Input from user and find out …
1. How many Even numbers are there
2. How many odd numbers are there
3. Sum of even numbers
4. Sum of odd numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum_even=0,sum_odd=0,total_even=0,total_odd=0;
     for(i=1;i<=10;i++)
    {
        printf("\nEnter the %d Number : ",i);
        scanf("%d",&n);
        printf("%d ",n);

        if (n%2==0)
        {
          //  printf("\n%d is even Number",n);
            sum_even=sum_even+n;
            total_even++;
        }
        else
        {
           // printf("\n%d is Odd Number ",n);
            sum_odd=sum_odd+n;
            total_odd++;
        }
    }
    printf("\nTotla of Even Number = %d ",total_even);
    printf("\nThe Sum of Even Number = %d ",sum_even);
    printf("\nTotla of Odd Number = %d ",total_odd);
    printf("\nThe Sum of Odd Number  = %d ",sum_odd);
}