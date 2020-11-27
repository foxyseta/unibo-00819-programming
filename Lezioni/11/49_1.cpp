/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    27/11/2020

    49_1.cpp
    "Funzioni ricorsive", d. 49, es. 1
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

int sum(const Node* const);

int main()
{
    Node* n5{ new Node{5, nullptr} };
    Node* n4{ new Node{4, n5} };
    Node* n3{ new Node{3, n4} };
    Node* n2{ new Node{2, n3} };
    Node* n1{ new Node{1, n2} };
    cout << "Somma: " << sum(n1) << '\n';
}

int sum(const Node* const list)
{
    if (!list)
        return 0;
    return list->value + sum(list->next);
}