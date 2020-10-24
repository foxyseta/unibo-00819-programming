/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_4.cpp
    "Array", d. 17, es. 4
*/

#include <iostream>

using namespace std;

void print_once(int[], const size_t);

int main()
{
    constexpr size_t dim{ 5 };
    cout << "Inserisci " << dim << " interi: ";
    int vet[dim];
    for (size_t i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    print_once(vet, dim);
}

void print_once(int v[], const size_t n)
{
    for (size_t i{ 0 }; i < n; ++i)
    {
        bool trovato{ false };
        for (size_t j{ 0 }; j < i && !trovato; ++j)
            if (v[i] == v[j])
                trovato = true;
        if (!trovato)
            cout << ' ' << v[i];
    }
    cout << '\n';
}