/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    28/10/2020

    10_1.cpp
    "Stringhe", d. 10, es. 1
*/

#include <iostream>

using namespace std;

void concatena(char[], const char[]);

int main()
{
    constexpr size_t len{ 100 };
    char stringa[len]{ "Hello" };
    concatena(stringa, ", world.");
    cout << stringa << '\n';
}

void concatena(char s1[], const char s2[])
{
    size_t i;
    for (i = 0; s1[i] != '\0'; ++i);
    for (size_t j{ 0 }; s2[j] != '\0'; ++j)
        s1[i++] = s2[j];
    s1[i] = '\0';
}