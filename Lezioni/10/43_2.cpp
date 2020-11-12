/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    43_2.cpp
    "Puntatori e strutture dati dinamiche", d. 43, es. 2
*/

#include <chrono>
#include <iostream>
#include <random>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *);
Node *generate(const size_t);

int main()
{
    constexpr size_t dim{ 10 };
    cout << "Lista pseudoaleatoria di lunghezza " << dim << ':';
    print(generate(dim));
    cout << '\n';
}

void print(const Node *l)
{
    while (l) {
        cout << ' ' << l->value;
        l = l->next;
    }
}

Node *generate(const size_t n)
{
    if (!n)
        return nullptr;

    default_random_engine motore{
        static_cast<default_random_engine::result_type>
        (chrono::system_clock::now().time_since_epoch().count())
    };
    constexpr int min{ 1 }, max{ 100 };
    uniform_int_distribution<> distribuzione{ min, max };

    Node *l{ new Node{ distribuzione(motore), nullptr} },
         *p{ l };
    for (size_t i{ 1 }; i < n; ++i)
        p = p->next = new Node{ distribuzione(motore), nullptr };
    return l;
}