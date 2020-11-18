/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    66_1.cpp
    "Puntatori e strutture dati dinamiche", d. 66, es. 1
*/

#include <iostream>

using namespace std;

struct Node {
    char value;
    Node *prec, *next;
};

int main()
{
    constexpr size_t dim{ 100 };
    char s[dim];
    cout << "Inserisci una stringa: ";
    cin >> s;
    // creazione bilista
    Node *head{ nullptr }, *p{ head };
    if (s[0]) {
        head = p = new Node{s[0], nullptr, nullptr};
        for (size_t i{ 1 }; s[i]; ++i)
            p = p->next = new Node{s[i], p, nullptr};
    }
    Node *tail{ p };
    // stampa
    cout << "Stampa diretta: ";
    for (p = head; p; p = p->next)
        cout << p->value;
    cout << "\nStampa inversa: ";
    for (p = tail; p; p = p->prec)
        cout << p->value;
    cout << '\n'; 
}