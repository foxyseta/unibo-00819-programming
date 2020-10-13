/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/10/2020

    08.cpp
    "Laboratorio su operazioni, condizioni e iterazioni", d. 8
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Inserisci una distanza (km): ";
    double distanza_chilometri;
    cin >> distanza_chilometri;
    cout << "Inserisci ore, minuti e secondi: ";
    int ore, minuti, secondi;
    cin >> ore >> minuti >> secondi;

    // chiudiamo un occhio sulle approssimazioni
    constexpr double base_tempo{ 60.0 }, km_to_miles{ 0.621371192 };
    const double tempo_minuti
                    { ore * base_tempo + minuti + secondi / base_tempo },
                 tempo_ore{ tempo_minuti / base_tempo },
                 distanza_miglia{ distanza_chilometri * km_to_miles };
    cout << "Velocita' media (km/min): " <<
            distanza_chilometri / tempo_minuti <<
            "\nVelocita' media (km/h): " <<
            distanza_chilometri / tempo_ore <<
            "\nVelocita' media (miles/min): " <<
            distanza_miglia / tempo_minuti <<
            "\nVelocita' media (miles/h): " <<
            distanza_miglia / tempo_ore << '\n';
}