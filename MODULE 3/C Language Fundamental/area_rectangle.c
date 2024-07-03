#include<stdio.h>
#include<conio.h>
void main()
{
    float length,width,area;
    printf("Enter the value of Length : ");
    scanf("%f",&length);
    printf("Enter the value of Width : ");
    scanf("%f",&width);
    area=length*width;
    printf("Area of Rectangle = %f ",area);
}