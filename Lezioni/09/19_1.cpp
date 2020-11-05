/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    03/11/2020

    19_1.cpp
    "Strutture", d. 19, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr size_t nome_max_len{ 100 },
                     voti_max_len{ 10 };
    struct Studente {
        char nome[nome_max_len]{ "" };
        double voti[voti_max_len]{};
        size_t voti_len{ 0 };
    } s;

    cout << "Inserisci nome: ";
    cin >> s.nome;
    cout << "Inserisci voto (o 0 per terminare): ";
    double input;
    cin >> input;
    double media{ 0.0 };
    while (input && s.voti_len < voti_max_len) {
        media += s.voti[s.voti_len++] = input;
        cout << "Inserisci un altro voto: ";
        cin >> input;
    }
    cout << s.nome << " (" << media / s.voti_len << ")\n";
}