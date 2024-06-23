/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include<iostream>
using namespace std;

int n1, n2, ans, choice;

class addition 
{
	public:
		addition()
        {
			ans = n1 + n2;
			cout << "Addition: " << ans;
		}
};

class subtraction 
{
	public:
		subtraction()
        {
			ans = n1 - n2;
			cout << "Subtraction: " << ans;
		}
};

class multiplication
{
	public:
		multiplication()
        {
			ans = n1 * n2;
			cout << "Multiplication: " << ans;
		}
};

class division 
{
	public:
		division()
        {
			ans = n1 / n2;
			cout << "Division: " << ans;
		}
};

int main()
{
	cout << "Enter two values for operation: ";
	cin >> n1 >> n2;
	cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
	cin >> choice;
	if (choice == 1) 
    {
		addition o1;
	} 
    else if (choice == 2)
    {
		subtraction o1;
	} 
    else if (choice == 3)
    {
		multiplication o1;
	} 
    else if (choice == 4) 
    {
		division o1;
	} 
    else 
    {
		cout << "Wrong choice.";
	}
	return 0;
}
