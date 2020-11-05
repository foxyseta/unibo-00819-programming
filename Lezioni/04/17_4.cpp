/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    17_4.cpp
    "Comandi condizionali e iterativi", d. 17, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci tre interi: ";
    int a, b, c;
    cin >> a >> b >> c;
    // con l'operatore ternario diverrà più breve
    // con i vettori diverrà più elegante
	if (a < b)
		if (a < c) {
			cout << a << ' ';
			if (b < c)
				cout << b << ' ' << c; // a b c
			else
				cout << c << ' ' << b; // a c b
		}
		else
			cout << c << ' ' << a << ' ' << b; // c a b
	else if (b < c) {
		cout << b << ' ';
		if (a < c)
			cout << a << ' ' << c; // b a c
		else
			cout << c << ' ' << a; // b c a
	}
	else
		cout << c << ' ' << b << ' ' << a; // c b a
	cout << '\n';
}