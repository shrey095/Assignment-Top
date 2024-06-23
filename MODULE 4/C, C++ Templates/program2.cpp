/*Write a program of to sort the array using templates. */
#include<iostream>
#include<utility>
using namespace std;

template <typename A> 
void sort(A array[5])
{
	cout << "Before: ";
	for(int i = 0; i < 5; i++) 
    {
		cout << array[i] << "\t";
	}
	cout << "\n";
	
    for(int i = 0; i < 5; i++) 
    {
		for(int j = i + 1; j < 5; j++) 
        {
			if(array[i] > array[j]) 
            {
				swap(array[i], array[j]);
			}
		}
	}
    cout << "After: ";
	for(int i = 0; i < 5; i++)
    {
		cout << array[i] << "\t";
	}
}

int main() 
{
	int array[5];
	cout << "Enter 5 numbers: ";
	for(int i = 0; i < 5; i++) 
    {
		cin >> array[i];
	}
	
	sort(array);
	
	return 0;
}