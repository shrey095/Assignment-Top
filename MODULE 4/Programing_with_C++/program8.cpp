/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
/*#include<iostream>
using namespace std;

void op(int x, int y) {
	cout << "Sum: " << x + y;
}

void op(int x, double y) {
	cout << "Subtraction: " << x - y;
}

void op(double x, int y) {
	cout << "Multiplication: " << x * y;
}

void op(double x, double y) {
	cout << "Division: " << x / y;
}

int main() {
	int x, y;
	
	cout << "Sum(int int)\nSubtraction(int double)\nMultiplication(double int)\nDivision(double double)\nEnter 2 numbers: ";
	cin >> x >> y;
	
	op(x, y);
	return 0;
}*/
#include <iostream>
using namespace std;

void op(int x, int y)
{
    cout << "Sum: " << x + y << endl;
}

void op(int x, double y) 
{
    cout << "Subtraction: " << x - y << endl;
}

void op(double x, int y) 
{
    cout << "Multiplication: " << x * y << endl;
}

void op(double x, double y) 
{
    cout << "Division: " << x / y << endl;
}

int main() 
{
    double x, y;
    
    cout << "Sum(int int)\nSubtraction(int double)\nMultiplication(double int)\nDivision(double double)\nEnter 2 numbers: ";
    cin >> x >> y;
    
    if(static_cast<int>(x) == x && static_cast<int>(y) == y) 
    {
        op(static_cast<int>(x), static_cast<int>(y));
    } 
    else if(static_cast<int>(x) == x) 
    {
        op(static_cast<int>(x), y);
    } 
    else if(static_cast<int>(y) == y) 
    {
        op(x, static_cast<int>(y));
    } 
    else 
    {
        op(x, y);
    }
    
    return 0;
}

