/* q6
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,temp=0;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            temp++;
            printf(" %d ",temp);
        }
        printf("\n");
    }
}
/*debug :
hear n=5

 */