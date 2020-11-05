/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_2.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    int* p{ new int{0} };
    cout << "Risultato: " << ++*p << '\n';
    delete p;
}