/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    13/10/2020

    19.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 19
*/

#include <chrono>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    // generazione della soluzione
    default_random_engine motore{
        static_cast<default_random_engine::result_type>
        (chrono::system_clock::now().time_since_epoch().count())
    };
    constexpr int min{ 1 }, max{ 100 };
    uniform_int_distribution<> distribuzione{ min, max };
    const int soluzione = distribuzione(motore);

    // turni
    int tentativo;
    cout << "Numero fra " << min << " e " << max << " inclusi: ";
    cin >> tentativo;
    while (tentativo != soluzione) {
        cout << "Troppo " << (tentativo < soluzione ? "piccolo" : "grande") <<
                ". Ritenta: ";
        cin >> tentativo;
    }
    cout << "Risposta esatta!\n";
}