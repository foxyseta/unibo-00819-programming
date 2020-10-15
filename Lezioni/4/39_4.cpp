/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    07/10/2020

    39_4.cpp
    "Comandi condizionali e iterativi", d. 39, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un intero: ";
    int n;
    cin >> n;
    if (n < 0)
        n *= -1;
    int res{ 0 };
    while (n)
    {
        constexpr int base{ 10 };
        res += n % base;
        n /= base;
    }
    cout << "Somma delle cifre: " << res << '\n';
}