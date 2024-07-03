/*WAP to show difference between Structure and Union. */
#include<stdio.h>
#include<conio.h>

// Different keyword to define structure and union 
struct Employee 
{
  int age;  
  char Name[50];
  char Department[20];
  float Salary;
};

union Person 
{
  int ag;  
  char Nam[50];
  char Departent[20];
  float Salar;
};

void main() 
{
  struct Employee emp1;
  union Person Person1;
    
  printf(" The Size of Employee Structure = %d\n", sizeof (emp1) );
  printf(" The Size of Person Union = %d\n", sizeof (Person1));
}
/*Structures:-
-->Struct keyword is used to declare the structure
-->The structure variable will allocate memory for all the structure members separately.
-->Example:
struct Employee{ int age; char name[50]; float salary; };
-->It allows us to access any or all the members at any time.

Union:-
-->Union keyword is used to declare it
-->The union variable will allocate common memory for all the union members.
-->Example:
union Employee{ int age; char name[50]; float salary; };
-->It allows us to access only one union member at a time.
*/