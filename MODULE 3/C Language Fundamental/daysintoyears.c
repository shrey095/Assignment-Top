#include<stdio.h>
#include<conio.h>
void main()
{
    float days=0;
    printf("Enter the Days : ");
    scanf("%f",&days);
    days=days/365;
    printf("The Number of Years = %0.2f ",days);
}