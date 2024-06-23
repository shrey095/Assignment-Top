/*Write a program to find the multiplication values and the cubic values using
inline function */
#include<iostream>
using namespace std;

inline void mul(int x, int y) 
{
	cout << "Multiplication: " << x * y;
}

inline void cube(int z) 
{
	cout << "Cube: " << z * z * z;
}

int main()
{
	int x, y, z;
	cout << "Enter two values for multiplication: ";
	cin >> x >> y;
	mul(x, y);
	
	cout << "\n\nEnter any value to cube: ";
	cin >> z;
	cube(z);
	
	return 0;
}