#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float principle,time,rate,SI,CI,A;
    printf("Enter the value of Principle : ");
    scanf("%f",&principle);
    printf("Enter the Time : ");
    scanf("%f",&time);
    printf("Enter the rate : ");
    scanf("%f",&rate);
    SI=(principle*time*rate)/100;
    printf("Simple Interest = %f ",SI);
    A=(principle*(pow(1+(rate/100),time)));
    CI=A-principle;
    printf("\nCompound Insterest = %f ",CI);

}