/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    08/10/2020

    58_2.cpp
    "Comandi condizionali e iterativi", d. 58, es. 2
*/

#include <iostream>

using namespace std;

// sarà più semplice con programmazione dinamica o ricorsione
int main()
{
    cout << "Inserisci un numero naturale: ";
    int altezza;
    cin >> altezza;
    if (altezza < 0)
        cout << "Non un numero naturale.\n";
    else {
        for (int n{ 0 }; n < altezza; ++n) { // righe
            for (int i{ 0 }; i < altezza - n - 1; ++i) // tabulazioni
                cout << '\t'; // brutto per interi più lunghi di \t

            for (int k{ 0 }; k <= n; ++k) { // coefficienti binomiali
                int coefficiente_binomiale{ 1 };
                for (int i{ n - k + 1 }; i <= n; ++i)
                    coefficiente_binomiale *= i;
                for (int i{ 2 }; i <= k; ++i)
                    coefficiente_binomiale /= i;
                cout << '\t' << '\t' << coefficiente_binomiale;
            }
            cout << '\n';
        }
    }
}