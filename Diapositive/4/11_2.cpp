/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    11_2.cpp
    "Comandi condizionali e iterativi", d. 11, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci due interi: ";
    int a, b;
    cin >> a >> b;
    // sarà più breve con l'operatore condizionale
    if (a == b)
        cout << "true";
    else
        cout << "false";
}