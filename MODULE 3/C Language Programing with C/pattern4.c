/*
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
	for (i = 1; i <= 6; i++) 
    {
		for (j = 1; j <= i; j++) 
        {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 6; i >= 1; i--) 
    {
		for (j = 1; j < i; j++) 
        {
			printf("* ");
		}
		printf("\n");
	}
}

