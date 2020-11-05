/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    33_1.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 33, es. 1
*/

#include <iostream>

using namespace std;

// ci si astenga dall'uso di STL (ad es. std::swap)
int main()
{
    cout << "Inserisci i caratteri x e y: ";
    char x, y;
    cin >> x >> y;

    // o senza t ma con paranoie da portabilità e sicurezza rispetto ai tipi
    char t = x;
    x = y;
    y = t;

    cout << "Caratteri x e y dopo lo scambio: " << x << ' ' << y << '\n';
}