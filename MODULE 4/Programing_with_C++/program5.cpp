/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */
#include<iostream>
using namespace std;
class cricketer 
{
	protected:
		int runs, matches, average;
};

class batsman: public cricketer 
{
	public: 
		void averageRuns() 
        {
			cout << "Enter total runs and matches: ";
			cin >> runs >> matches;
			average = runs / matches;
			cout << "Average: " << average;
		}
};

int main() 
{
	batsman obj;
	obj.averageRuns();
	return 0;
}
