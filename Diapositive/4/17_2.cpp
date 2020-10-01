/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    17_2.cpp
    "Comandi condizionali e iterativi", d. 17, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci tre interi: ";
    int x, y, z;
    cin >> x >> y >> z;

    if (!(x && y && z))
        cout << "Divisione per zero non ammessa.\n";
    else
        // sarà più agevole con i vettori
        cout << "Output: " << !((y % x || z % x) && (x % y || z % y) && (x % z || y % z)) << '\n';
        /*
        // o, volendo usare if-else,
        if (!((y % x || z % x) && (x % y || z % y) && (x % z || y % z)))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
        */
}