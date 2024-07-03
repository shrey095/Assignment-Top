/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/
#include<stdio.h>
void main() 
{
	int i, j;
	char alpha = 'A';
	for (i = 1; i <= 5; i++) 
    {
		alpha = 'A';
		for (j = 1; j <= i; j++) 
        {
			printf("%c ", alpha);
			alpha++;
		}
		printf("\n");
	}

}