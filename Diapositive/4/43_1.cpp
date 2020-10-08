/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    08/10/2020

    43_1.cpp
    "Comandi condizionali e iterativi", d. 43, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un numero naturale: ";
    int n;
    cin >> n;
    if (n < 0)
        cout << "Non un numero naturale.\n";
    else {
        for (int i{ 0 }; i < n; ++i) {
            for (int j{ 0 }; j < n + i; ++j)
                cout << (j < n - i - 1 ? ' ' : '*');
            cout << '\n';
        }
    }
}