/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    15/10/2020

    48_1.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 48, es. 1
*/

#include <iostream>
#include "48_1_math5.h"

using namespace std;

int main()
{
    cout << "Inserisci un intero: ";
    int input;
    cin >> input;
    cout << "Radice di indice 5: " << math5::root5(input) <<
            "\nLogaritmo in base 5: ";
    const int log{ math5::log5(input) };
    if (log == -1)
        cout << "non definito";
    else
        cout << log;
    cout << '\n';
}