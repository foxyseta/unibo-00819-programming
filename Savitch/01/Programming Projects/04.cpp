/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	04.cpp
	Savitch, cap. 1, Programming Projects, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter time in seconds: ";
	double time;
	cin >> time;
	constexpr double acceleration{ 32 }; // feet per second
	cout << "Distance: " << acceleration * time * time / 2 << '\n';
}