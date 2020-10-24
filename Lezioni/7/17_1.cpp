/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    17_1.cpp
    "Array", d. 17, es. 1
*/

#include <iostream>

using namespace std;

int binary_to_decimal(int[], const size_t);

int main()
{
    constexpr size_t dim{ 5 };
    cout << "Inserisci " << dim << " 0/1 (separati da altri caratteri): ";
    int binary[dim];
    for (size_t i{ 0 }; i < dim; ++i)
        cin >> binary[i]; // assumo solo 0 e 1
    cout << "In decimale: " << binary_to_decimal(binary, dim);
}

int binary_to_decimal(int bin[], const size_t n)
{
    int res{ 0 };
    for (size_t i{ 0 }; i < n; ++i) {
        constexpr int base{ 2 };
        res = res * base + bin[i];
    }
    return res;
}