/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    02/12/2020

    14_1.cpp
    "Ereditarietà", d. 14, es. 1
*/

#include <iostream>

using namespace std;

class contoBanca {
public:
    double versa(const double versati);
    double preleva(const double prelevati);
protected:
    double saldo{ 0.0 };
};

class contoInteressi: public contoBanca {
public:
    double applica_interesse();
protected:
    constexpr static double fattore{ 1.02 };
};

int main()
{
    contoInteressi c;
    c.versa(200.0);
    c.preleva(100.0);
    cout << "Risultato: " << c.applica_interesse() << '\n';
}

double contoBanca::versa(const double versati)
{
    return saldo += versati;
}

double contoBanca::preleva(const double prelevati)
{
    saldo -= prelevati;
    if (saldo < 0)
        saldo = 0;
    return saldo;
}

double contoInteressi::applica_interesse()
{
    return saldo *= fattore;
}