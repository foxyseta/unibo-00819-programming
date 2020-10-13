/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/10/2020

    02.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci primo e secondo operando: ";
    int primo, secondo;
    cin >> primo >> secondo;

    cout << "Somma: " << primo + secondo << "\n"
        "Differenza: " << primo - secondo << "\n"
        "Prodotto: " << primo * secondo << "\n"
        "Divisione euclidea: ";
    if (secondo)
        cout << primo / secondo;
    else
        cout << "impossibile";
    cout << "\nDivisione decimale: ";
    if (secondo)
        cout << static_cast<double>(primo) / secondo;
    else
        cout << "impossibile";
    cout << "\nResto: " << primo % secondo << '\n';
}