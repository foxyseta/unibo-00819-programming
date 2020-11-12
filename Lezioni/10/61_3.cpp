/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    12/11/2020

    61_3.cpp
    "Puntatori e strutture dati dinamiche", d. 61, es. 3
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(const Node *list, const Node *current);
Node *add(Node *, int);

int main()
{
    Node* l{ nullptr }, *pos{ nullptr };
    int comando;
    do {
        print(l, pos);
        cout << "\n\t0. Accoda\n"
                  "\t1. Guarda\n"
                  "\t2. Avanza\n"
                  "\t3. Indietreggia\n"
                  "\t4. Elimina\n"
                  "\t5. Termina\n"
                "Inserisci un comando: ";
        cin >> comando;
        if (!comando) { // Accoda
            cout << "Inserisci un valore: ";
            int valore;
            cin >> valore;
            l = add(l, valore);
            if (!pos)
                pos = l;
        } else if (comando == 1) // Guarda
            if (pos)
                cout << "Elemento corrente: " << pos->value << '\n';
            else
                cout << "Lista vuota.\n";
        else if (comando == 2) // Avanza
            if (!pos)
                cout << "Lista vuota.\n";
            else if (!pos->next)
                cout << "Fine lista raggiunta.\n";
            else
                pos = pos->next;
        else if (comando == 3) // Indietreggia
            if (!pos)
                cout << "Lista vuota.\n";
            else if (pos == l)
                cout << "Testa lista raggiunta.\n";
            else {
                Node *p{ l };
                while (p->next != pos)
                    p = p->next;
                pos = p;
            }
        else if (comando == 4) // Elimina
            if (!pos)
                cout << "Lista vuota.\n";
            else if (pos == l) {
                l = pos->next;
                delete pos;
                pos = l;
            } else {
                Node *p{ l };
                while (p->next && p->next != pos)
                    p = p->next;
                if (p->next) {
                    Node *const to_be_deleted{ p-> next };
                    p->next = to_be_deleted->next;
                    delete to_be_deleted;
                    pos = p;
                } else
                    cout << "Elemento corrente non trovato.\n";
            }
        else if (comando != 5)
            cout << "Comando non riconosciuto.\n";
    } while (comando != 5); // Termina
}

void print(const Node *list, const Node *current)
{
    if (!list) {
        cout << "Nessun elemento da visualizzare.";
        return;
    }
    while (list) {
        if (list == current)
            cout << " [" << list->value << "]";
        else
            cout << ' ' << list->value;
        list = list->next;
    }
}

Node *add(Node *list, int value)
{
    if (!list)
        return new Node{ value, nullptr };
    Node *p{ list };
    while (p->next)
        p = p->next;
    p->next = new Node{ value, nullptr };
    return list;
}