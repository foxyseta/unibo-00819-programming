/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    27/11/2020

    49_4.cpp
    "Funzioni ricorsive", d. 49, es. 4
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *);
Node* selective_remove(Node* list, const int factor);

int main()
{
    Node* n5{ new Node{5, nullptr} };
    Node* n4{ new Node{4, n5} };
    Node* n3{ new Node{3, n4} };
    Node* n2{ new Node{2, n3} };
    Node* n1{ new Node{1, n2} };
    cout << "Lista:";
    print(selective_remove(n1, 2));
    cout << '\n';
}

void print(const Node *l)
{
    while (l) {
        cout << ' ' << l->value;
        l = l->next;
    }
}

Node* selective_remove(Node* list, const int factor)
{
    if (!list)
        return nullptr;
    if (list->value % factor) {
        list->next = selective_remove(list->next, factor);
        return list;
    }
    Node* body{ list->next };
    delete list;
    return selective_remove(body, factor);
}