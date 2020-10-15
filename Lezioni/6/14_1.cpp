/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    14/10/2020

    14_1.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 14, es. 1
*/

#include <iostream>

using namespace std;

void print_decimal_to_binary();

int main()
{
    print_decimal_to_binary();
}

void print_decimal_to_binary()
{
    // diverrebbe più semplice con getline()
    cout << "Inserisci un numero binario (aggiungi un carattere "
        "terminatore in fondo diverso da 0 e 1): ";
    constexpr char zero{ '0' }, uno{ '1' };
    constexpr int base{ 2 };
    char input{ zero };
    int res{ 0 };
    do {
        res = base * res + (input == uno);
        cin >> input;
    } while (input == zero || input == uno);
    cout << res << '\n';
}