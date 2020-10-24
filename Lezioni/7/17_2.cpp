/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_2.cpp
    "Array", d. 17, es. 2
*/

#include <iostream>

using namespace std;

bool is_palindrome(char[], const size_t);

int main()
{
    constexpr size_t dim{ 5 };
    cout << "Inserisci " << dim << " caratteri: ";
    char vet[dim];
    for (size_t i{ 0 }; i < dim; ++i)
        cin >> vet[i];
    cout << (is_palindrome(vet, dim) ? "Palindromo.\n" : "Non palindromo.\n");
}

bool is_palindrome(char v[], const size_t n)
{
    for (size_t i{ 0 }; i < n / 2; ++i)
        if (v[i] != v[n - 1 - i])
            return false;
    return true;
}