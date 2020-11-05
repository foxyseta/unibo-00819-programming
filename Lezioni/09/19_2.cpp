/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    03/11/2020

    19_2.cpp
    "Strutture", d. 19, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr size_t mesi{ 12 };
    constexpr int giorni_a_mese[mesi]{
        31, // gennaio
        28, // febbraio (non bisestile)
        31, // marzo
        30, // aprile
        31, // maggio
        30, // giugno
        31, // luglio
        31, // agosto
        30, // settembre
        31, // ottobre
        30, // novembre
        31  // dicembre
    };
    struct Giorno {
        int mese{ 1 }, giorno{ 1 };
    } g;
    cout << "Inserisci un mese (1 - " << mesi << "): ";
    cin >> g.mese;
    if (g.mese < 1 || g.mese > mesi)
        cout << "Mese non valido.\n";
    else {
        cout << "Inserisci un giorno (1 - " << giorni_a_mese[g.mese - 1] <<
                "): ";
        cin >> g.giorno;
        if (g.giorno < 1 || g.giorno > giorni_a_mese[g.mese - 1])
            cout << "Giorno non valido.\n";
        else {
            int somma{ 0 };
            for (size_t i{ 0 }; i < g.mese - 1; ++i)
                somma += giorni_a_mese[i];
            cout << "Hai inserito il " << somma + g.giorno << "esimo giorno "
                    "di un anno non bisestile.\n";
        }
    }
}