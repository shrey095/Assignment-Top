/*Write a program to find the max number from given two numbers using
friend function */
#include<iostream>
using namespace std;

class maxNumber 
{
	int n1, n2;
	
	friend void max(maxNumber);
};

void max(maxNumber obj) 
{
	cout << "Enter 2 numbers: ";
	cin >> obj.n1 >> obj.n2;
	
	(obj.n1 > obj.n2) ? cout << "Number 1 is big" : cout << "Number 2 is big";
}

int main() 
{
	maxNumber obj1;
	
	max(obj1);
	
	return 0;
}
