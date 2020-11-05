/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_6.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 6
*/

#include <iostream>

using namespace std;

void scambia(int* x, int* y);

int main()
{
    constexpr size_t dim{ 5 };
    int v[dim]{ 8, 1, 4, -2, 5 };

    // Bubble sort non ottimizzato
    bool ordinato;
    do {
        ordinato = true;
        for (size_t i{ 0 }; i + 1 < dim; ++i)
            if (*(v + i) > * (v + i + 1)) {
                scambia(v + i, v + i + 1);
                ordinato = false;
            }
    } while (!ordinato);
    cout << "Vettore ordinato:";
    for (size_t i{ 0 }; i < dim; ++i)
        cout << ' ' << *(v + i);
    cout << '\n';
}

void scambia(int* x, int* y)
{
    int t{ *x };
    *x = *y;
    *y = t;
}