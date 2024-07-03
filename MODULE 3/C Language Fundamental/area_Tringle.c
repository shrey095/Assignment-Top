#include<stdio.h>
#include<conio.h>
void main()
{
    float base,heigth,area;
    printf("Enter the value of base : ");
    scanf("%f",&base);
    printf("Enter the value of heigth : ");
    scanf("%f",&heigth);
    area=0.5*base*heigth;
    printf("Area of Tringle  = %f ",area);
}