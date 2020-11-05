/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_5.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 5
*/

#include <iostream>

using namespace std;

void scambia(int* x, int* y);

int main()
{
    int a{ 0 }, b{ 1 };
    scambia(&a, &b);
    cout << "Dopo lo scambio: " << a << ' ' << b << '\n';
}

void scambia(int* x, int* y)
{
    int t{ *x };
    *x = *y;
    *y = t;
}