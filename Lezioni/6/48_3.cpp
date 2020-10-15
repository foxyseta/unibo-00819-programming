/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    15/10/2020

    48_3.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 48, es. 3
*/

#include <cmath>
#include <iostream>
#include <utility>

using namespace std;

// primo valore maggiore del secondo: nessuna soluzione in R
pair<double, double> radici(const double a, const double b, const double c);

int main()
{
    cout << "Inserisci a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;
    auto soluzioni = radici(a, b, c);
    if (soluzioni.first > soluzioni.second)
        cout << "Nessuna soluzione reale.\n";
    else if (soluzioni.first == soluzioni.second)
        cout << "Radice: " << soluzioni.first << " (doppia molt.).\n";
    else
        cout << "Radici: " << soluzioni.first <<
                " e " << soluzioni.second << '\n';
}

pair<double, double> radici(const double a, const double b, const double c)
{
    const double delta{ b * b - 4.0 * a * c };
    if (delta < 0)
        return { 1.0, 0.0 };
    return { (-b - sqrt(delta)) / (2.0 * a), (-b + sqrt(delta)) / (2.0 * a) };
}