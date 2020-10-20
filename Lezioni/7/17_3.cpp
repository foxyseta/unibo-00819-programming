/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_3.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 17, es. 2
*/

#include <iostream>

using namespace std;

bool is_in_array(int a[], const int size, int n);

int main()
{
    constexpr int dim{ 5 };
    cout << "Inserisci " << dim << " interi: ";
    int vet[dim];
    for (int i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    cout << "Inserisci un carattere da cercare: ";
    int query;
    cin >> query;
    cout << (is_in_array(vet, dim, query) ? "Trovato.\n" : "Non trovato.\n");
}

bool is_in_array(int a[], const int size, int n)
{
    for (int i{ 0 }; i < size; ++i)
        if (a[i] == n)
            return true;
    return false;
}