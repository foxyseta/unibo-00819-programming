/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    08/10/2020

    43_2.cpp
    "Comandi condizionali e iterativi", d. 43, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un numero intero (o 0 per terminare): ";
    int n;
    cin >> n;
    while (n) {
        if (n < 2) // n != 0 in ogni iterazione
            cout << "Non primo.\n";
        else {
            bool primo{ true }; // diverrà più semplice con return
            for (int i{ 2 }; i * i <= n && primo; ++i)
                if (!(n % i))
                    primo = false;
            cout << (primo ? "Primo." : "Non primo.") << '\n';
        }
        cout << "Inserisci un altro numero intero (o 0 per terminare): ";
        cin >> n;
    }
}