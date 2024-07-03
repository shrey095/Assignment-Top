/*
A 
B C 
D E F 
G H I J 
K L M N O 
*/
#include<stdio.h>
void main() 
{
	int i, j;
	char Alpha = 'A';
	for (i = 1; i <= 5; i++) 
    {
		for (j = 1; j <= i; j++)
        {
			printf("%c ", Alpha);
			Alpha++;
		}
		printf("\n");
	}
}