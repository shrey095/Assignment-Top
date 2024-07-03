/*WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */
//c[m][j]={0}
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],d[100][100],e[100][100],i,j,k,n,m,p,q;
    printf("Enter the value of M : ");
    scanf("%d",&m);
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Enter the value of P : ");
    scanf("%d",&p);
    printf("Enter the value of Q : ");
    scanf("%d",&q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the value of Matrix A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter the value of Matrix B[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A :");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B :");
    printf("\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    if(m==p && n==q)
    {
        printf("\nSum of Matrix : ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
        printf("\nSub of Matrix : ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                d[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d ",d[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nAddition and Subtraction is not possible");
    }
    if(n==p)
    {
        printf("\nMul of Matrix : ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                e[i][j]=0;
                for(k=0;k<n;k++)
                {
                    e[i][j]=e[i][j]+a[i][k]*b[k][j];
                }   
            }
        }
        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d ",e[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
            printf("\nMultiplication is not possible");
    }
}