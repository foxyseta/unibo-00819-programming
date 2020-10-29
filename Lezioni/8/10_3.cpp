/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    28/10/2020

    10_3.cpp
    "Stringhe", d. 10, es. 2
*/

#include <iostream>

using namespace std;

void ritaglia(char[], const size_t);

int main()
{
    char stringa[]{ "Hello, world." };
    ritaglia(stringa, 5);
    cout << stringa << '\n';
}

void ritaglia(char s[], const size_t n)
{
    s[n] = '\0';
}