/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    27_1.cpp
    "Comandi condizionali e iterativi", d. 27, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un intero n: ";
    int n;
    cin >> n;
    cout << "Somma dei naturali minori di n: " << n * (n - 1) / 2 << '\n';
}