/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    28/10/2020

    10_2.cpp
    "Stringhe", d. 10, es. 2
*/

#include <iostream>

using namespace std;

bool haSoloMaiuscole(const char[]);

int main()
{
    const char stringa[]{ "HELLOWORLD" };
    cout << stringa << " ha solo maiuscole? " <<
            haSoloMaiuscole(stringa) << '\n';
}

bool haSoloMaiuscole(const char s[])
{
    for (size_t i{ 0 }; s[i] != '\0'; ++i)
        if (s[i] < 'A' || s[i] > 'Z')
            return false;
    return true;
}