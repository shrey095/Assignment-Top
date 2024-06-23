/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;

class person 
{
	protected:
		int age;
		char name[50];
};

class student 
{
	protected:
		int percentage;
};

class teacher: public person, public student 
{
	int salary;
	
	public: 
		void get() 
        {
			cout << "Enter age, name, percentage & salary: ";
			cin >> age >> name >> percentage >> salary;
		}
		
		void display() 
        {
			cout << "Age: " << age << "\nName: " << name << "\nPercentage: " << percentage << "\nSalary:" << salary;
		}
};


int main() 
{
	teacher obj;
	obj.get();
	obj.display();
	return 0;
}