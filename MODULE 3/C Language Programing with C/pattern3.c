// C program to print the full pyramid pattern of numbers 
#include <stdio.h> 
void  main() 
{ 
	int i,j,rows = 5,k;  
	for ( i = 0; i < rows; i++) 
    {  
		for (j = 0; j < 2*(rows - i)-1; j++) 
        { 
			printf(" "); 
		} 
		for ( k = 0; k < 2 * i + 1; k++)
        { 
            printf(" * ");
			//printf("%d ", k + 1); 
		} 
		printf("\n"); 
	} 
}
