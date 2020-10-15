/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    42_1.cpp
    "Identificatori, dichiarazioni, tipi di dato", d. 42, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci prezzo in euro: "; // assumo un prezzo valido
    double euro;
    cin >> euro;
    constexpr int centesimi_per_euro{ 100 };
    int centesimi{ static_cast<int>(centesimi_per_euro * euro) };

    // sarà più agevole con i vettori
    constexpr int monetaA{ 200 }, monetaB{ 100 }, monetaC{ 50 },
                  monetaD{ 20 }, monetaE{ 10 }, monetaF{ 5 }, monetaG{ 2 };
    cout << "Monete da 2 euro: " << centesimi / monetaA <<
            "\nMonete da 1 euro: " << (centesimi %= monetaA) / monetaB <<
            "\nMonete da 50 centesimi: " << (centesimi %= monetaB) / monetaC <<
            "\nMonete da 20 centesimi: " << (centesimi %= monetaC) / monetaD <<
            "\nMonete da 10 centesimi: " << (centesimi %= monetaD) / monetaE <<
            "\nMonete da 5 centesimi: " << (centesimi %= monetaE) / monetaF <<
            "\nMonete da 2 centesimi: " << (centesimi %= monetaF) / monetaG <<
            "\nMonete da 1 centesimo: " << centesimi % monetaG << '\n';
}