/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    49_4.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 49, es. 4
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

    // non sostituisco differenze nulle con lo 0 per chiarezza
    cout << '\t' << x << '\t' << y << '\t' << z << '\n'
         <<    x << '\t' << x - x << '\t' << x - y << '\t' << x - z << '\n'
         <<    y << '\t' << y - x << '\t' << y - y << '\t' << y - z << '\n'
         <<    z << '\t' << z - x << '\t' << z - y << '\t' << z - z << '\n';
}