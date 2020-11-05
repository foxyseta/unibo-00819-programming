/*
	Università di Bologna
	Corso di laurea in Informatica
	00819 - Programmazione

	Stefano Volpe #969766
	12/10/2020

	04.cpp
	"Laboratorio su operazioni, condizioni e iterazioni", d. 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "Inserisci primo e secondo operando: ";
	int primo, secondo;
	cin >> primo >> secondo;

	srand(static_cast<unsigned int>(time(nullptr)));
	const int random{ static_cast<int>(rand() * 6) };
	// sarà più agevole con switch
	if (random == 0)
		cout << "Somma: " << primo + secondo << "\n";
	else if (random == 1)
		cout << "Differenza: " << primo - secondo << "\n";
	else if (random == 2)
		cout << "Prodotto: " << primo * secondo << "\n";
	else if (random == 3) {
		"Divisione euclidea: ";
		if (secondo)
			cout << primo / secondo;
		else
			cout << "impossibile";
	}
	else if (random == 4) {
		cout << "\nDivisione decimale: ";
		if (secondo)
			cout << static_cast<double>(primo) / secondo;
		else
			cout << "impossibile";
	}
	else
		cout << "\nResto: " << primo % secondo << '\n';
}