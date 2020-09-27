/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	27/09/2020

	05.cpp
	Savitch, cap. 1, Programming Projects, es. 5
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a character: ";
	char c;
	cin >> c;
	cout << "     " << c << ' ' << c << ' ' << c << '\n'
		 << "    " << c << "    " << c << '\n'
		 << "   " << c << '\n'
		 << "   " << c << '\n'
		 << "   " << c << '\n'
		 << "   " << c << '\n'
		 << "   " << c << '\n'
		 << "    " << c << "    " << c << '\n'
		 << "     " << c << ' ' << c << ' ' << c << '\n';
}