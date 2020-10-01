/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/30/2020

    27_3.cpp
    "Comandi condizionali e iterativi", d. 27, es. 3
*/

#include <iostream>

using namespace std;

/*
    x e n non negativi: x = n^(1/2) -> x^2 = n -> x^2 - n = 0
    Metodo di Newton (versione elementare):
    - già studiato alle superiori
    - implementazione banale
    - convergenza quadratica grantita
*/

int main()
{
    cout << "Inserisci un intero n: ";
    int n;
    cin >> n;
    if (n < 0)
        cout << "Le radici di indice pari non sono definite per i numeri negativi.\n";
    else {
        double x;
        if (!n) {
            // radice quadrata di 0 (Newton non applicabile)
            x = 0;
        }
        else {
            x = n;
            double new_x; // successive approssimazioni
            while (static_cast<int>(new_x = (x + n / x) / 2) != static_cast<int>(x))
                x = new_x;
        }
        cout << "Parte intera della radice quadrata: " << static_cast<int>(x) << '\n';
    }
}