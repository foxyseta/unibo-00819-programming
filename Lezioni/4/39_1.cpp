/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    07/10/2020

    39_1.cpp
    "Comandi condizionali e iterativi", d. 39, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un naturale n: ";
    int n;
    cin >> n;
    if (n < 0)
        cout << "Numero non naturale.\n";
    else
        for (int i = 1; i <= n; ++i)
            cout << '*';
    cout << '\n';
}