/* 
1
10
101
1010
10101
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf(" 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            
        }
        printf("\n");
    }
}
/*debug :
hear n=5

 */