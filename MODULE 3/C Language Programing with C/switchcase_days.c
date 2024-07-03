#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
  
    printf("\n***************************************************");
    printf("\n1Sunday");
    printf("\n2Monday");
    printf("\n3Tuesday");
    printf("\n4Wednesday");
    printf("\5Thrusday");
    printf("\n6Friday");
    printf("\n7Saturday");
    printf("\n****************************************************");
 
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
            printf("\nSunday");
            break;
    case 2:
            printf("\nMonday");
            break;
    case 3:
            printf("\nTuesday");
            break;
    case 4:
            printf("\nWednesday");
            break;
    case 5:
            printf("\nThrusday");
            break;
    case 6:
            printf("\nFriday");
            break;
    case 7:
            printf("\nSaturday");
            break;    
    default:
            printf("\nInvailed choice");
        break;
    }
}
