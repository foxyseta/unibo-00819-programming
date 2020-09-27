/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	05.cpp
	Savitch, cap. 1, Practice Programs, es. 5
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
	// run-time error when b = 0
	cout << a << " divided by " << b << " is " << a / b << ".\n";
}