/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    43_3.cpp
    "Puntatori e strutture dati dinamiche", d. 43, es. 3
*/

#include <cmath>
#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

int closer_to_avg(const Node *const);

int main()
{
    Node n3{0, nullptr};
    Node n2{49, &n3};
    Node n1{100, &n2};
    cout << "Meno lontano dalla media: " << closer_to_avg(&n1) << '\n';
}

int closer_to_avg(const Node *const l)
{
    if (!l)
        return 0; // no avg when the list is empty
    const Node *p{ l };
    double avg{ 0.0 };
    size_t len{ 0 };
    while (p) {
        avg += p->value;
        p = p->next;
        ++len;
    }
    avg /= len;
    int res{ l->value };
    double delta{ abs(l->value - avg) };
    p = l->next;
    while (p) {
        const double new_delta{ abs(p->value - avg) };
        if (new_delta < delta) {
            res = p->value;
            delta = new_delta;
        }
        p = p->next;
    }
    return res;
}