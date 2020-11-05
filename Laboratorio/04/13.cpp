/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/10/2020

    13.cpp
        "Laboratorio su operazioni, condizioni e iterazioni", d. 13
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci un intero: ";
    int N;
    cin >> N;
    if (N < 0)
        N *= -1;
    int res;
    for (res = 0; N; N /= 10)
        res += N % 10;
    cout << "Somma delle cifre: " << res << '\n';
}