/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    42_2.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 42, es. 2
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci i due cateti: "; // assumo lunghezze non negative
    double c1, c2;
    cin >> c1 >> c2;

    cout << "Ipotenusa: " << sqrt(c1 * c1 + c2 * c2) << '\n';
}