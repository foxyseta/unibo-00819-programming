/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_2.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 17, es. 2
*/

#include <iostream>

using namespace std;

bool is_palindrome(char[], const int);

int main()
{
    constexpr int dim{ 5 };
    cout << "Inserisci " << dim << " caratteri: ";
    char vet[dim];
    for (int i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    cout << (is_palindrome(vet, dim) ? "Palindromo.\n" : "Non palindromo.\n");
}

bool is_palindrome(char v[], const int n)
{
    for (int i{ 0 }; i < n / 2; ++i)
        if (v[i] != v[n - 1 - i])
            return false;
    return true;
}