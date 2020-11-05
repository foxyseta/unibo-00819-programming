/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    35_1.cpp
    "Array", d. 35, es. 1
*/

#include <iostream>

using namespace std;

int prima_duplice_occorrenza(const int[], const size_t);

constexpr int not_found_error{ -1 };

int main()
{
    constexpr size_t dim{ 5 };
    cout << "Inserisci " << dim << " interi: ";
    int vet[dim];
    for (size_t i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    cout << "Prima duplice occorrenza: ";
    int res{ prima_duplice_occorrenza(vet, dim) };
    if (res == not_found_error)
        cout << "non trovata";
    else
        cout << res;
    cout << '\n';
    
}

int prima_duplice_occorrenza(const int v[], const size_t n)
{
    for (size_t i{ 0 }; i < n; ++i)
        for (size_t j{ 0 }; j < i; ++j)
            if (v[i] == v[j])
                return static_cast<int>(i);
    return not_found_error;
}