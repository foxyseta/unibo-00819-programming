/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	03.cpp
	Savitch, cap. 1, Programming Projects, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter number of quarters: ";
	int input;
	cin >> input;
	constexpr int quarters_to_cents{ 25 };
	int cents = input * quarters_to_cents;

	cout << "Enter number of dimes: ";
	cin >> input;
	constexpr int dimes_to_cents{ 10 };
	cents += input * dimes_to_cents;

	cout << "Enter number of nickels: ";
	cin >> input;
	constexpr int nickels_to_cents{ 5 };
	cout << "Cents: " << cents + input * nickels_to_cents << '\n';
}