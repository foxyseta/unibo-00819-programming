/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    29/10/2020

    25_4.cpp
    "Stringhe", d. 25, es. 4
*/

#include <iostream>

using namespace std;

bool contieneSuoniDuri(const char[]);

int main()
{
    cout << contieneSuoniDuri("Agghiacciante");
}

bool contieneSuoniDuri(const char s[])
{
    constexpr char consonante1{ 'c' }, consonante2{ 'g' }, acca{ 'h' };
    if (s[0] == '\0')
        return false;
    for (size_t i{ 0 }; s[i + 1] != '\0'; ++i)
        if ((s[i] == consonante1 || s[i] == consonante2) && s[i + 1] == acca)
            return true;
    return false;
}