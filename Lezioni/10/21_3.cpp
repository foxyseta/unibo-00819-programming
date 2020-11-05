/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_3.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr size_t dim{ 10 };
    int v[dim];
    cout << "Inserisci " << dim << " interi: ";
    for (size_t i{ 0 }; i < dim; ++i)
        cin >> *(v + i);
    cout << "Inseriti:";
    for (size_t i{ 0 }; i < dim; ++i)
        cout << ' ' << *(v + i);
    cout << '\n';
}