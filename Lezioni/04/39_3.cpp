/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    07/10/2020

    39_3.cpp
    "Comandi condizionali e iterativi", d. 39, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un numero intero: ";
    int dividendo;
    cin >> dividendo;
    cout << "Inserisci un divisore: ";
    int divisore; // sarà meno macchinoso con do... while...
    cin >> divisore;
    while (!divisore || dividendo % divisore) {
        cout << "Non un divisore. Ritenta: ";
        cin >> divisore;
    }
}