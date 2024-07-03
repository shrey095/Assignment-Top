/*Write a program of structure for five employee that provides the following
information -print and display empno, empname, address and age*/
#include<stdio.h>

struct employeeInfo 
{
	int no, age;
	char name[50], address[50];
};

void main() 
{
	struct employeeInfo e1[5];
	int i;
	for(i=0;i<5;i++) 
    {
		printf("Enter details(no., name, address & age) of employee %d: ",i+1);
        printf("\nEnter the Employee No : ");
        scanf("%d",&e1[i].no);
        printf("Enter the Employee Name : ");
        scanf("%s",&e1[i].name);
        //gets(e1[i].name);
        printf("Enter the Employee Address : ");
        scanf("%s",&e1[i].address);
        //gets(e1[i].address);
        printf("Enter the Employee Age : ");
        scanf("%d",&e1[i].age);
    }
    printf("\n\nEmployee No  Employee Name  Employee Address  Employee Age");
	for(i=0;i<5;i++) 
    {
		printf("\n%d              %s              %s            %d ",e1[i].no, e1[i].name, e1[i].address,e1[i].age);
	}
}