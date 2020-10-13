/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    13/10/2020

    17.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 17
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci interi x e y: ";
    int x, y;
    cin >> x >> y;
    if (y) {
        cout << "Risultato: " << x / y << '.';
        constexpr int precisione{ 100 }, base{ 10 };
        for (int i{ 0 }; i < precisione; ++i)
            cout << (x = x % y * base) / y;
        cout << '\n';
    }
    else
        cout << "Denominatore nullo.\n";
}