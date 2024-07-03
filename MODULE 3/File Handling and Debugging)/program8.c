/*WAP to reverse a string and check that the string is palindrome or not */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[30],b[30];
    int i,j=0;
    printf("Enter the String : ");
    scanf("%s",&a);
    //gets(a);
    int length = strlen(a)-1;
    for(i=length;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("Revers String = %s ",b);
    for(i=0;i<='\0';i++)
    {
        if(a[i]==b[i])
        {
            printf("\nThe String is Palindrome");
        }
        else
        {
            printf("\nThe String is Not Palindrome");
        }
    }
}