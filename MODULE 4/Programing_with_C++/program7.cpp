/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) */
#include<iostream>
using namespace std;
class students 
{
	public:
		int rollNumber;
	
		void get() 
        {
			cout << "Enter your roll number: ";
			cin >> rollNumber;
		}
};

class test : public students 
{
	public:
		int sub1, sub2;

		void getSub() 
        {
			cout << "Enter subject 1 & 2 marks: ";
			cin >> sub1 >> sub2;
		}
};

class result : public test 
{
	int total;
	
	public:
		void inher() 
        {
			get();
			getSub();
			total = sub1 + sub2;
		}
		
		void display() 
        {
			cout << "Roll Number: " << rollNumber << "\nSubject 1: " << sub1 << "\nSubject 2: "
			 << sub2 << "\nTotal: " << total;
		}
};

int main() 
{
	result obj;
	
	obj.inher();
	obj.display();
	return 0;
}
