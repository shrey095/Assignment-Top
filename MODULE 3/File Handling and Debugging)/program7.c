/*WAP Find out length of string without using inbuilt function*/
#include<stdio.h>
#include<conio.h>
void main() 
{
	int length = 0, i = 0;
	char string[50];
	printf("Enter your string: ");
	scanf("%s",&string);
	for(;string[i] != '\0';) 
    {
		length++;
		i++;
	}
	printf("\nLength of string = %d ",length);
}