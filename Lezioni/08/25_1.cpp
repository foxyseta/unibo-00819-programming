/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    29/10/2020

    25_1.cpp
    "Stringhe", d. 25, es. 1
*/

#include <cstring>
#include <iostream>

using namespace std;

void piuLunga(const char[], const char[], const char[]);

int main()
{
    piuLunga("Hello", ", world", "!");
}

void piuLunga(const char s1[], const char s2[], const char s3[])
{
    const size_t l1{ strlen(s1) }, l2{ strlen(s2) }, l3{ strlen(s3) };
    if (l1 > l2)
        if (l1 > l3)
            cout << s1;
        else
            cout << s3;
    else
        if (l2 > l3)
            cout << s2;
        else
            cout << s3;
}