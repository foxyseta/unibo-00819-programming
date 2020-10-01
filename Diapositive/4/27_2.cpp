/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    27_2.cpp
    "Comandi condizionali e iterativi", d. 27, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un intero n: ";
    int n;
    cin >> n;
    if (n < 0)
        cout << "Fattoriale classico non definito per interi negativi.\n";
    else {
        // con il for diverrà più leggibile
        int fattoriale{ 1 }, i{ 2 };
        while (i <= n)
            fattoriale *= i++;
        cout << "n! = " << fattoriale << '\n';
    }
}