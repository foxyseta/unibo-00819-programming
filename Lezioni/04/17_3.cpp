/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/10/2020

    17_3.cpp
    "Comandi condizionali e iterativi", d. 17, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Primo operando, operatore, secondo operando (no spazi): ";
    int primo, secondo;
    char op;
    cin >> primo >> op >> secondo;

    // con i vettori diverrà più semplice
    constexpr char add{ '+' }, sub{ '-' }, mul{ '*' }, div{ '/' }, rem{ '%' };
    cout << "Risultato: ";
    // con switch, ? e/o lambda e simili diverrà più semplice/elegante
    if (op == add)
        cout << primo + secondo;
    else if (op == sub)
        cout << primo - secondo;
    else if (op == mul)
        cout << primo * secondo;
    else if (op == div)
        if (!secondo)
            cout << "impossibile (/ 0)";
        else
        cout << primo / secondo;
    else if (op == rem)
        if (!secondo)
            cout << "impossibile (% 0)";
        else
            cout << primo % secondo;
    else
        cout << "Operatore non riconosciuto.";
    cout << '\n';
}