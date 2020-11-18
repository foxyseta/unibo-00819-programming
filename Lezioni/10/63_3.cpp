/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    63_3.cpp
    "Puntatori e strutture dati dinamiche", d. 63, es. 3
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

// assumo assenza di duplicati
Node* insieme();
bool is_in(Node* const, const int);
Node* union_set(const Node* const, const Node* const);
Node* intersection_set(const Node* const, const Node* const);

int main()
{
    Node n4{8, nullptr},
         n3{6, &n4},
         n2{4, &n3},
         n1{2, &n2},
         n0{0, &n1},
         nD{9, nullptr},
         nC{6, &nD},
         nB{3, &nC},
         nA{0, &nB};
    const Node * i{ union_set(&n0, &nA)};
    cout << "Insieme unione: ";
    for (const Node* p{ i }; p; p = p->next)
        cout << ' ' << p->value;
    i = intersection_set(&n0, &nA);
    cout << "\nInsieme intersezione: ";
    for (const Node* p{ i }; p; p = p->next)
        cout << ' ' << p->value;
    cout << '\n';
}

Node* insieme()
{
    return nullptr;
}

bool is_in(Node* const i, const int v)
{
    for (Node* p{ i }; p; p = p->next)
        if (p->value == v)
            return true;
    return false;
}

Node* union_set(const Node* const i1, const Node* const i2)
{
    Node *res{ nullptr }, *r{ res };
    if (i1) { // accodo i1
        res = r = new Node{ i1->value, nullptr};
        for (const Node *p{ i1->next }; p; p = p->next)
            r = r->next = new Node{ p->value, nullptr };
    }
    for (const Node *q{ i2 }; q; q = q->next) { // accodo i2 \ i1
        bool trovato{ false };
        for (const Node *p{ i1 }; p; p = p->next)
            if (p->value == q->value) {
                trovato = true;
                break;
            }
        if (!trovato)
            if (r)
                r = r->next = new Node{ q->value, nullptr };
            else
                res = r = new Node{ q->value, nullptr};
    }
    return res;
}

Node* intersection_set(const Node* const i1, const Node* const i2)
{
    Node *res{ nullptr }, *r{ res };
    for (const Node *p{ i1 }; p; p = p->next)
        for (const Node *q{ i2 }; q; q = q->next)
            if (p->value == q->value)
                if (r)
                    r = r->next = new Node{ p->value, nullptr };
                else
                    res = r = new Node{ p->value, nullptr};
    return res;
}