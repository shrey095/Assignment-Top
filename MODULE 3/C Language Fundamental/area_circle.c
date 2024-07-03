#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,area,pi=3.14;
    printf("Enter the value of Radius : ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of Circle = %f ",area);
}