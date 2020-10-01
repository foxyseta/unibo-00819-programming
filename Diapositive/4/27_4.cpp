/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    27_4.cpp
    "Comandi condizionali e iterativi", d. 27, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un intero n: ";
    int n;
    cin >> n;
    if (n <= 0)
        cout << "I logaritmi supportano solo argomenti strettamente positivi.\n";
    else {
        int log{ -1 };
        while (n) {
            ++log;
            n /= 2;
        }
        cout << "Logaritmo in base 2: " << log << '\n';
    }
}