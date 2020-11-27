/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    27/11/2020

    07_1.cpp
    "Programmazione onject-oriented", d. 7, es. 1
*/

#include <iostream>
#include <numbers>

using namespace std;

class Cerchio {
public:
    double raggio;

    double area() const;
    double circonferenza() const;
}

int main()
{
    cout << "Inserisci raggio (>=0): ";
    Cerchio c;
    cin >> c.raggio;
    cout << "Area: " << c.area() << '\n';
}

double Cerchio::area() const
{
    return raggio * raggio * numbers::pi;
}

int Cerchio::circonferenza() const
{
    return 2 * raggio * numbers::pi;
}