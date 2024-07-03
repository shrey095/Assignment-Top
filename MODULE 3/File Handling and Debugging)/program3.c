/*WAP to find reverse of string using recursion*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
/*void main()
{
    char a[30],b[30];
    int i,j=0;
    printf("Enter the String : ");
    //scanf("%s",&a);
    gets(a);
    int length = strlen(a)-1;
    for(i=length;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("Revers String = %s ",b);
}*/
void reverse(char *str);
void main()
{
    char a[30];
    printf("Enter the String : ");
    //scanf("%s",&a);
    gets(a);
    printf("\nOriginal String = %s ",a);
    printf("\nRevers String = ");
    reverse(a);
}
void reverse(char *str)
{
    if(*str!='\0')
    {
        reverse(str+1);
        printf("%c",*str);
    }
}