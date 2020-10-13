/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    13/10/2020

    10.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 10
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci x0, y0, x1, y1: ";
    double x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    const double denominatore{ x1 - x0 };
    if (!denominatore)
        if (y0 == y1)
            cout << "Infinite rette (punti coincidenti).\n";
        else
            cout << "x = " << x0 << '\n';
    else {
        const double m{ (y1 - y0) / denominatore };
        cout << "y = " << m << "x ";
        const double q{ y0 - m * x0 };
        cout << (q < 0 ? "" : "+") << q << '\n';
    }
}