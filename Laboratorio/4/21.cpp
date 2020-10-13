/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    13/10/2020

    21.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 21
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci il numero di righe: ";
    int n;
    cin >> n;
    for (int i{ 1 }, x{ 0 }; i <= n; ++i) {
        cout << i << ')';
        for (int j{ 0 }; j < i; ++j)
            cout << ' ' << ++x;
        cout << '\n';
    }
}