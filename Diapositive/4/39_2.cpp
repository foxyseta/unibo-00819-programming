/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    07/10/2020

    39_2.cpp
    "Comandi condizionali e iterativi", d. 39, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un numero intero maggiore di 1: "; // richiesto oralmente dal professore
    int n;
    cin >> n;
    if (n < 2)
        cout << "Input non corretto.\n";
    else {
        bool primo{ true }; // diverrà più semplice con return
        for (int i{ 2 }; i * i <= n && primo; ++i)
            if (!(n % i))
                primo = false;
        cout << (primo ? "Primo.\n" : "Non primo.\n");
    }
}