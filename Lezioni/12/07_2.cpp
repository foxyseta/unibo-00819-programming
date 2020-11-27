/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    27/11/2020

    07_1.cpp
    "Programmazione onject-oriented", d. 7, es. 2
*/

#include <iostream>
#include <numbers>

using namespace std;

class Cerchio {
public:
    double diametro;

    double area() const;
    double circonferenza() const;
}

int main()
{
    cout << "Inserisci diametro (>=0): ";
    Cerchio c;
    cin >> c.diametro;
    cout << "Area: " << c.area() << '\n';
}

double Cerchio::area() const
{
    return diametro * numbers::pi / 4;
}

int Cerchio::circonferenza() const
{
    return diametro * numbers::pi;
}