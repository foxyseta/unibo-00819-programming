/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	01/10/2020

	5.cpp
	Savitch, cap. 2, Practice Programs, es. 5
*/

#include <iostream>

using namespace std;

int main()
{
	// I worked exclusively on the formatting. I do not endorse anything else.
	double radius, vm;
	cout << "Enter radius of a sphere." << endl;
	cin >> radius;
	constexpr double sphere_const{ 4.0 / 3.0 },
					 pi{ 3.1415 }; // V = 4/3 * pi * r^3
	vm = sphere_const * pi * radius * radius * radius;
	cout << " The volume is " << vm << endl;
	return 0;
}