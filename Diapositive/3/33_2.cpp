/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    33_2.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 33, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci tre numeri con virgola mobile: ";
    double a, b, c;
    cin >> a >> b >> c;

    cout << "Stampati dall'ultimo al primo: "
         << c << ' ' << b << ' ' << a << '\n';
}