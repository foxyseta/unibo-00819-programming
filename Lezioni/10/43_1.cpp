/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    43_1.cpp
    "Puntatori e strutture dati dinamiche", d. 43, es. 1
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *);

int main()
{
    Node n3{3, nullptr};
    Node n2{2, &n3};
    Node n1{1, &n2};
    cout << "Lista:";
    print(&n1);
    cout << '\n';
}

void print(const Node *l)
{
    while (l) {
        cout << ' ' << l->value;
        l = l->next;
    }
}