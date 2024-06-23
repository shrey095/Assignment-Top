/*Write a program to swap the two numbers using friend function without
using third variable*/
#include<iostream>
using namespace std;

class swapClass 
{
	int n1, n2;
	
	friend void swap(swapClass);
};

void swap(swapClass obj) 
{
	cout << "Enter two numbers: ";
	cin >> obj.n1 >> obj.n2;
	
	obj.n1 = obj.n1 + obj.n2;
	obj.n2 = obj.n1 - obj.n2;
	obj.n1 = obj.n1 - obj.n2;
	
	cout << "Number 1: " << obj.n1 << "\nNumber 2: " << obj.n2;
}

int main() 
{
	swapClass obj1;
	
	swap(obj1);
	
	return 0;
}