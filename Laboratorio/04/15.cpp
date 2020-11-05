/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    13/10/2020

    15.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 15
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    constexpr int up_to{ 10 };
    constexpr streamsize width{ 3 };
    // intestazione
    cout << "   ";
    for (int i{ 0 }; i <= up_to; ++i)
        cout << ' ' << setw(width) << i;
    cout << '\n';
    // corpo
    for (int i{ 0 }; i <= up_to; ++i) {
        cout << setw(width) << i;
        for (int j{ 0 }; j <= up_to; ++j)
            cout << ' ' << setw(width) << i * j;
        cout << '\n';
    }
}