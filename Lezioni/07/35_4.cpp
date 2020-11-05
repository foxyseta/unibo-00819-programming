/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    35_4.cpp
    "Array", d. 35, es. 4
*/

#include <iostream>

using namespace std;

void parola(const char str[], int n, char dest[]);

int main()
{
    const char s[]{ "Alma Mater Studiorum" };
    constexpr size_t dim{ 100 };
    char d[dim];
    parola(s, 2, d);
    cout << '"' << d << "\"\n";
}

void parola(const char str[], const int n, char dest[])
{
    constexpr char space{ ' ' }, end{ '\0' };
    size_t i{ 0 };

    // Spazi iniziali
    while (str[i] == space)
        ++i;
    if (str[i] == end) {
        // Nessuna parola trovata
        dest[0] = end;
        return;
    }

    int k;
    for (k = 1; k < n && str[i] != end; ++k) {
        // Parola non interessante
        do
            ++i;
        while (str[i] != space && str[i] != end);
        if (str[i] == end) {
            // Non abbastanza parole
            dest[0] = end;
            return;
        }
        // Spazi fra parole
        do
            ++i;
        while (str[i] == space);
    }
    if (k < n) {
        // Nessuna parola trovata
        dest[0] = end;
        return;
    }
    size_t j{ 0 };
    while (str[i] != space && str[i] != end) {
        dest[j++] = str[i++];
    }
    dest[j] = end;
}