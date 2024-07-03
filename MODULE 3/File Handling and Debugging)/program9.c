/*Write a program of structure employee that provides the following
information -print and display empno, empname, address and age*/
#include<stdio.h>
#include<conio.h>
struct employeeInfo 
{
	int no, age;
	char name[50], address[50];
};

void main() 
{
	struct employeeInfo e1;
	printf("Enter the Employee No : ");
    scanf("%d",&e1.no);
    printf("Enter the Employee Name : ");
    scanf("%s",&e1.name);
  //gets(e1.name);
    printf("Enter the Employee Address : ");
    scanf("%s",&e1.address);
  //gets(e1.address);
    printf("Enter the Employee Age : ");
    scanf("%d",&e1.age);
    printf("\n\nEmployee No  Employee Name  Employee Address  Employee Age  \n%d              %s              %s            %d ",e1.no,e1.name,e1.address,e1.age);
}