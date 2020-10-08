/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    08/10/2020

    58_1.cpp
    "Comandi condizionali e iterativi", d. 58, es. 1
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un esponente per e: ";
    double x;
    cin >> x;
    cout << "Inserisci l'indice dell'ultimo termine da calcolare: ";
    double n;
    cin >> n;
    if (n < 0 || n != static_cast<int>(n))
        cout << "L'indice deve essere un numero naturale.";
    else {
        double numeratore{ 1 }, denominatore{ 1 }, risultato{ numeratore / denominatore };
        for (double i{ 1 }; i <= n; ++i)
            risultato += (numeratore *= x) / (denominatore *= i);
        cout << "Risultati: " << risultato << " VS " << exp(x) << '\n';
    }
}