/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    14/10/2020

    14_3.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 14, es. 3
*/

#include <iostream>

using namespace std;

void f();

int main()
{
    f();
}

void f()
{
    cout << "Inserisci due interi: ";
    int x, y;
    cin >> x >> y;
    cout << "Risultati: " << x * x + y * y << ", " << x * x * y << '\n';
}