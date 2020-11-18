/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    63_1.cpp
    "Puntatori e strutture dati dinamiche", d. 63, es. 1
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* pila();
Node* push(Node* const, const int);
Node* pop(Node* const);
int top(const Node* const);

int main()
{
    Node* x{ push(pila(), 1) };
    cout << "Elemento inserito: " << top(x) << "\n"
            "Tentativo di lettura pila vuota: " << top(x = pop(x)) << '\n';
}

Node* pila()
{
    return nullptr;
}

Node* push(Node* const p, const int v)
{
    return new Node{v, p};
}

Node* pop(Node* const p)
{
    if (!p) // pila vuota
        return nullptr; // nessun elemento da eliminare
    Node* const res{ p->next };
    delete p;
    return res;
}

int top(const Node* const p)
{
    if (!p) // pila vuota 
        return 0;
    return p->value;
}