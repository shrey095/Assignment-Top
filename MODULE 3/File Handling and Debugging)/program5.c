/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],i,n,temp,j,temp1,choice;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the A[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the B[%d] : ",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nValue of  A[%d] = %d ",i,a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\nValue of  B[%d] = %d ",i,b[i]);
    }
    printf("\n\n");
    printf("\n1.Aescending order");
    printf("\n2.Descending order");
    printf("\nEnter the Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 : 
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(b[i]>b[j])
                    {
                        temp1=b[i];
                        b[i]=b[j];
                        b[j]=temp1;
                    }
                }
            }
            printf("\nThe numbers arranged in Aescending order are given below ");
            for(i=0;i<n;i++)
            {
                printf("\nA[%d] = %d ",i,a[i]);
            }
            printf("\nThe numbers arranged in Aescending order are given below ");
            for(i=0;i<n;i++)
            {
                printf("\nB[%d] = %d ",i,b[i]);
            }
            break;
    case 2 :
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(b[i]<b[j])
                    {
                        temp1=b[i];
                        b[i]=b[j];
                        b[j]=temp1;
                    }
                }
            }
            printf("\nThe numbers arranged in Descending order are given below ");
            for(i=0;i<n;i++)
            {
                printf("\nA[%d] = %d ",i,a[i]);
            }
            printf("\nThe numbers arranged in Descending order are given below ");
            for(i=0;i<n;i++)
            {
                printf("\nB[%d] = %d ",i,b[i]);
            }
            break;
        default :
                printf("Inviled choice");
                break;
    }
}