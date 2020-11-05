/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    05/11/2020

    21_4.cpp
    "Puntatori e strutture dati dinamiche", d. 21, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    struct Quintetto {
        int a, b, c, d, e;
    } q;
    Quintetto* p{ &q };
    cout << "Inserisci cinque interi: ";
    cin >> p->a >> p->b >> p->c >> p->d >> p->e;
    cout << "Interi inseriti: " << p->a << ' ' << p->b << ' ' << p->c <<
            ' ' << p->d << ' ' << p->e << '\n';
}