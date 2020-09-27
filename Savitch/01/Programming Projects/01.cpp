/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	01.cpp
	Savitch, cap. 1, Programming Projects, es. 1
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
	cout << "Sum: " << a + b << "\nProduct: " << a * b << '\n';
}