/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    14/10/2020

    14_4.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 14, es. 4
*/

#include <iostream>

using namespace std;

void reverse_print();

int main()
{
    reverse_print();
}

void reverse_print()
{
    cout << "Inserisci un intero: ";
    int n;
    cin >> n;
    if (n < 0) { // -
        n *= -1;
        cout << '-';
    }
    constexpr int base{ 10 };
    if (n) // +
        while (n) {
            cout << n % base;
            n /= base;
        }
    else // 0
        cout << 0;
    cout << '\n';
}