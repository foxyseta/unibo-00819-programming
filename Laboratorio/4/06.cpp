/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/10/2020

    06.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 6
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci secondi: ";
    int s;
    cin >> s;
    if (s < 0)
        s *= -1;
    constexpr int base{ 60 };
    int m{ s / base };
    s %= base;
    const int h{ m / base };
    m %= base;
    cout << h << ':' << m << ':' << s << '\n';
}