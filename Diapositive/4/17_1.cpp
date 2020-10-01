/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    17_1.cpp
    "Comandi condizionali e iterativi", d. 17, es. 1
*/

#include <iostream>

using namespace std;

// ci si astenga dall'uso di STL (ad es. std::isalpha)
int main()
{
    cout << "Inserisci cinque caratteri consecutivi: ";
    // diverrà più agevole con i vettori
    char a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << "Output: ";
    /*
        "It is *not* safe to assume that [...] the alphabetic characters are
        contiguous (EBCDIC leaves a gap between 'i' and 'j')."
        [Stroustrup, 2011]
    */
    if ('a' <= a && a <= 'z')
        cout << a;
    if ('a' <= b && b <= 'z')
        cout << b;
    if ('a' <= c && c <= 'z')
        cout << c;
    if ('a' <= d && d <= 'z')
        cout << d;
    if ('a' <= e && e <= 'z')
        cout << e;
}