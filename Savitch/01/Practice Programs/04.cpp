/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	04.cpp
	Savitch, cap. 1, Practice Programs, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the first number: ";
	int a;
	cin >> a;
	cout << "Enter the second number: ";
	int b;
	cin >> b;
	cout << "The difference of " << a << " and " << b
		 << " is " << a - b << ".\n";
}