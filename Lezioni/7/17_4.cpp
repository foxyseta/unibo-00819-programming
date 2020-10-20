/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_4.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 17, es. 4
*/

#include <iostream>

using namespace std;

void print_once(int[], const int);

int main()
{
    constexpr int dim{ 5 };
    cout << "Inserisci " << dim << " interi: ";
    int vet[dim];
    for (int i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    print_once(vet, dim);
}

void print_once(int v[], const int n)
{
    for (int i{ 0 }; i < n; ++i)
    {
        bool trovato{ false };
        for (int j{ 0 }; j < i && !trovato; ++j)
            if (v[i] == v[j])
                trovato = true;
        if (!trovato)
            cout << ' ' << v[i];
    }
    cout << '\n';
}