/* Write a program of to swap the two values using templates */
#include<iostream>
using namespace std;
template <typename S> 
void Swap(S& a, S& b) 
{
	S temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 15;
	cout << "A: " << a << " B: " << b << endl;
	Swap<int>(a, b);
	cout << "A: " << a << " B: " << b << endl;
	return 0;
}
