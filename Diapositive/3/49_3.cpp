/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    49_3.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 49, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci base e altezza: ";
    double base, altezza; // assumo base e altezza non negative
    cin >> base >> altezza;
    cout << "Area: " << base * altezza << '\n';
}