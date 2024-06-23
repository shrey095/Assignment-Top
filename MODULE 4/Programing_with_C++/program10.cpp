/*Write a program to concatenate the two strings using Operator Overloading */
#include<iostream>
#include<string.h>
using namespace std;

class concat 
{
	public:
		
	char s1[50], s2[50];
	
		concat(char str1[], char str2[]) 
        {
			strcpy(this -> s1, str1);
			strcpy(this -> s2, str2);
		}
		
		void operator + ()  
        {
			cout << "\nConcatenated: " << strcat(s1, s2);
		}
};

int main() 
{
	char s1[50], s2[50];
	
	cout << "Enter string 1: ";
	cin >> s1;
	cout << "Enter string 2: ";
	cin >> s2;
	
	concat o1(s1, s2);
	+o1;
	
	return 0;
}