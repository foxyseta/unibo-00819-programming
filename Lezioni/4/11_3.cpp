/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    11_3.cpp
    "Comandi condizionali e iterativi", d. 11, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci interi x, y, z: ";
    // diverrà più agevole con i vettori
    int x, y, z;
    // poco leggibile con input più lunghi di \t
    cin >> x >> y >> z;
    cout << "Inserisci oparatore ('-' o '/'): ";
    char operatore;
    cin >> operatore;
    while (operatore != '-' && operatore != '/') // meglio costanti manifeste?
    {
        cout << "Errore. Ritenta: ";
        cin >> operatore;
    }

    // diverrà più agevole con lambda e loro alternative
    if (operatore == '-')
        // non sostituisco differenze nulle con lo 0 per chiarezza
        cout << '\t' << x << '\t' << y << '\t' << z << '\n'
        << x << '\t' << x - x << '\t' << x - y << '\t' << x - z << '\n'
        << y << '\t' << y - x << '\t' << y - y << '\t' << y - z << '\n'
        << z << '\t' << z - x << '\t' << z - y << '\t' << z - z << '\n';
    else if (!(x && y && z))
        cout << "Divisioni per zero non ammesse.\n";
    else
        cout << '\t' << x << '\t' << y << '\t' << z << '\n'
            << x << '\t' << x / x << '\t' << x / y << '\t' << x / z << '\n'
            << y << '\t' << y / x << '\t' << y / y << '\t' << y / z << '\n'
            << z << '\t' << z / x << '\t' << z / y << '\t' << z / z << '\n';
}