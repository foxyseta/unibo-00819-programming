/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    03/11/2020

    19_3.cpp
    "Strutture", d. 19, es. 3
*/

#include <iostream>

using namespace std;

constexpr size_t max_voti{ 100 };

struct Studente {
    size_t n_voti{ 0 };
    double voti[max_voti]{}, anni;
};

size_t inserisci_studente(Studente elenco[], const size_t n, const size_t max_n, Studente s);

size_t inserisci_voto(Studente elenco[], const size_t id_studente, const double voto);

double media_voti(Studente elenco[], const size_t id_studente);

double media_anni(Studente elenco[], const size_t n);

int main()
{
    constexpr size_t max_studenti{ 100 };
    Studente studenti[]{ max_studenti };
    size_t n_studenti{ 0 };
    n_studenti = inserisci_studente(studenti, n_studenti, max_studenti, { 2, {23.0, 24.0}, 19});
    inserisci_voto(studenti, 0, 29.0);
    cout << "Media voti: " << media_voti(studenti, 0) << "\n"
            "Media anni: " << media_anni(studenti, n_studenti) << '\n';
}

size_t inserisci_studente(Studente elenco[], const size_t n, const size_t max_n, Studente s)
{
    if (n >= max_n)
        return max_n;
    elenco[n] = s;
    return n + 1;
}

size_t inserisci_voto(Studente elenco[], const size_t id_studente, const double voto)
{
    if (elenco[id_studente].n_voti >= max_voti)
        return max_voti;
    elenco[id_studente].voti[elenco[id_studente].n_voti] = voto;
    return ++elenco[id_studente].n_voti;
}

double media_voti(Studente elenco[], const size_t id_studente)
{
    if (elenco[id_studente].n_voti) {
        double somma{ 0.0 };
        for (size_t i{ 0 }; i < elenco[id_studente].n_voti; ++i)
            somma += elenco[id_studente].voti[i];
        return somma / elenco[id_studente].n_voti;
    }
    return 0.0;
}

double media_anni(Studente elenco[], const size_t n)
{
    if (n) {
        double somma{ 0.0 };
        for (size_t i{ 0 }; i < n; ++i)
            somma += elenco[i].anni;
        return somma / n;
    }
    return 0.0;
}
