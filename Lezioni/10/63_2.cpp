/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    63_2.cpp
    "Puntatori e strutture dati dinamiche", d. 63, es. 2
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* coda();
Node* enqueue(Node* const, const int);
Node* dequeue(Node* const);
int top_el(const Node* const);

int main()
{
    Node* x{ enqueue(coda(), 1) };
    cout << "Elemento inserito: " << top_el(x) << "\n"
            "Tentativo di lettura coda vuota: " << top_el(x = dequeue(x)) << '\n';
}

Node* coda()
{
    return nullptr;
}

Node* enqueue(Node* const c, const int v)
{
    if (!c)
        return new Node{v, nullptr};
    Node *p{ c };
    while (p->next)
        p = p->next;
    p->next = new Node{v, nullptr};
    return c;
}

Node* dequeue(Node* const c)
{
    if (!c) // coda vuota
        return nullptr; // nessun elemento da eliminare
    Node* const res{ c->next };
    delete c;
    return res;
}

int top_el(const Node* const c)
{
    if (!c) // coda vuota 
        return 0;
    return c->value;
}