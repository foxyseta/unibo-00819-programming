/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    33_3.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 33, es. 3
*/

#include <iostream>
#include <numbers> // solo su c++20 o successivi

using namespace std;

int main()
{
    cout << "Inserisci raggio: ";
    double raggio; // assumo raggio non negativo
    cin >> raggio;
    cout << "Area: " << numbers::pi * raggio * raggio;
}