/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    29/10/2020

    25_2.cpp
    "Stringhe", d. 25, es. 2
*/

#include <cstring>
#include <iostream>

using namespace std;

void stampaPrimo(const char[], const char[]);

int main()
{
    stampaPrimo("Abecedario", "Abaco");
    cout << '\n';
}

void stampaPrimo(const char s1[], const char s2[])
{
    cout << (strcmp(s1, s2) < 0 ? s1 : s2);
}