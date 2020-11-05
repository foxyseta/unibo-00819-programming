/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_1.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    int x{ 0 }, *p{ &x }, *q{ &x };
    ++*p;
    ++*q;
    cout << "x: " << x << '\n';
}