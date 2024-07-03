#include<stdio.h>
#include<conio.h>
void main()
{
    char choice;
    printf("\nEnter your Choice : ");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I': 
    case 'O':
    case 'U':
            printf("\nIt is Vowel");
            break;
    default:
            printf("\nIt is Consonant");
            break;
    }
}
