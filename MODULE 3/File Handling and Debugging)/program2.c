/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,ans;
    char choice;
     
    printf("\n***************************************************");
    printf("\n+ Addition");
    printf("\n- Subtraction");
    printf("\n* Multiplication");
    printf("\n/ Division");
    printf("\n****************************************************");

    printf("\nEnter your Choice : ");
    scanf("%c",&choice); 

    if(choice=='+'||choice=='-'||choice=='*'||choice=='/')
    {
        printf("Enter the Number 1 : ");
        scanf("%d",&n1);
        printf("Enter the Number 2 : ");
        scanf("%d",&n2);
    }
    switch (choice)
    {
    case '+':
            ans=n1+n2;
            printf("\nAddition = %d ",ans);
            break;
    case '-':
            ans=n1-n2;
            printf("\nSubtraction = %d ",ans);
            break;
    case '*':
            ans=n1*n2;
            printf("\nMultiplication = %d ",ans);
            break;
    case '/':
            ans=n1/n2;
            printf("\nDivision = %d ",ans);
            break;
    
    default:
            printf("\nInvailed choice");
        break;
    }
}