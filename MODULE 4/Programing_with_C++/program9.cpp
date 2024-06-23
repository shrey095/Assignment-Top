/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;

class matrix 
{
	int array[5], i;
	
	public:
		void get() 
        {
			cout << "Enter 5 numbers: ";
			for(i = 0; i < 5; i++) 
            {
				cin >> array[i];
			}
		}
		
		void display() 
        {
			for(i = 0; i < 5; i++) 
            {
				cout << array[i] << "\t";
			}
			cout << "\n";
		}
		
		matrix operator + (matrix obj) 
        {
			int ans[5];
			
			for(i = 0; i < 5; i++) 
            {
				ans[i] = array[i] + obj.array[i];
			}
			cout<<"\n\n";
			for(i = 0; i < 5; i++) 
            {
				cout << ans[i] << "\t";
			}
		}
};

int main() 
{
	matrix a1, a2;
	
	a1.get();
	a2.get();
	
	a1.display();
	a2.display();
	
	a1 + a2;
	
	return 0;
}