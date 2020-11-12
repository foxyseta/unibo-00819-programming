/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    61_1.cpp
    "Puntatori e strutture dati dinamiche", d. 61, es. 1
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *);
Node* selective_remove(Node *, const int);

int main()
{
    Node n5{5, nullptr};
    Node n4{4, &n5};
    Node n3{3, &n4};
    Node n2{2, &n3};
    Node n1{1, &n2};
    cout << "Lista:";
    print(selective_remove(&n1, 2));
    cout << '\n';
}

void print(const Node *l)
{
    while (l) {
        cout << ' ' << l->value;
        l = l->next;
    }
}

Node* selective_remove(Node * l, const int n)
{
    while (l && !(l->value % n)) { // primo elemento
        Node *const old_l{ l };
        l = l->next;
        delete old_l;
    }
    if (!l) // lista vuota
        return l;
    Node *p = l;
    while (p && p->next) {
        if (!(p->next->value % n)) {
            Node *const to_be_deleted{ p->next };
            p->next = to_be_deleted->next;
            // delete to_be_deleted;
        }
        p = p->next;
    }
    return l;
}