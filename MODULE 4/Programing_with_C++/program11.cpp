/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area*/
#include<iostream>
using namespace std;

class calculateArea 
{
	int l, b, h, base, r;
	
	public:
	void area() 
    {
		cout << "Enter length & breadth: ";
		cin >> l >> b;
		cout << "Area of rectangle: " << l * b;
	}
	
	void area(int base, int h) 
    {
		cout << "Area of triangle: " << 0.5 * base * h;
	}
	
	void area(int r) 
    {
		cout << "Area of circle: " << 3.14 * r * r;
	}
};

int main() 
{
	int choice, base, h, r;
	calculateArea obj;
	
	printf("Enter your choice:\n1. Area of Rectangle\n2. Area of Triangle\n3. Area of Circle\n");
	cin >> choice;
	
	switch(choice) 
    {
		case 1:
			obj.area();
			break;
			
		case 2:
			cout << "Enter base & height: ";
			cin >> base >> h;
			obj.area(base, h);
			break;
			
		case 3:
			cout << "Enter radius: ";
			cin >> r;
			obj.area(r);
	}
	return 0;
}
