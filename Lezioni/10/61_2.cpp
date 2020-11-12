/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    61_2.cpp
    "Puntatori e strutture dati dinamiche", d. 61, es. 2
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *);
Node* selective_remove(Node *, const int);
Node* eratosthenes_sieve(const int);

int main()
{
    cout << "Inserisci massimo : ";
    int N;
    cin >> N;
    cout << "Numeri primi fino a " << N << " incluso:";
    print(eratosthenes_sieve(N));
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
            delete to_be_deleted;
        }
        p = p->next;
    }
    return l;
}

Node* eratosthenes_sieve(const int n)
{
    constexpr int min{ 2 };
    if (n < min)
        return nullptr;
    Node *res{ new Node{ min, nullptr } }, *back{ res };
    for (int i{ min + 1 }; i <= n; ++i)
        back = back->next = new Node{ i, nullptr };
    Node *divisor{ res };
    while (divisor->value * divisor->value <= n) {
        selective_remove(divisor->next, divisor->value);
        divisor = divisor->next;
    }
    return res;
}