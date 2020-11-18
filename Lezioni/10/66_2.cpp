/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    66_2.cpp
    "Puntatori e strutture dati dinamiche", d. 66, es. 2
*/

#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *prec, *next;
};

void print(const Node* head, const Node* tail, const Node* current);
void add(Node**, Node**, int);

int main()
{
    Node* head{ nullptr }, *tail{ nullptr }, *pos{ nullptr };
    int comando;
    do {
        print(head, tail, pos);
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
            add(&head, &tail, valore);
            if (!pos)
                pos = head;
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
            else if (pos->prec)
                pos = pos->prec;
            else
                cout << "Testa lista raggiunta.\n";
        else if (comando == 4) // Elimina
            if (!pos)
                cout << "Lista vuota.\n";
            else {
                Node* to_be_deleted{ pos };
                if (to_be_deleted == head) {
                    head = pos = to_be_deleted->next;
                    if (head)
                        head->prec = nullptr;
                    else
                        tail = nullptr;
                } else if (to_be_deleted == tail) {
                    pos = tail = to_be_deleted->prec;
                    to_be_deleted->prec->next = nullptr;
                } else {
                    to_be_deleted->prec->next = to_be_deleted->next;
                    pos = to_be_deleted->next->prec = to_be_deleted->prec;
                }
                delete to_be_deleted;
            }
        else if (comando != 5)
            cout << "Comando non riconosciuto.\n";
    } while (comando != 5); // Termina
}

void print(const Node* head, const Node* tail, const Node* current)
{
    if (!head) {
        cout << "Nessun elemento da visualizzare.";
        return;
    }
    cout << "Diretto: ";
    while (head) {
        if (head == current)
            cout << " [" << head->value << "]";
        else
            cout << ' ' << head->value;
        head = head->next;
    }
    cout << "\nInverso: ";
    while (tail) {
        if (tail == current)
            cout << " [" << tail->value << "]";
        else
            cout << ' ' << tail->value;
        tail = tail->prec;
    }
}

void add(Node** head, Node** tail, int value)
{
    if (!*head)
        *head = *tail = new Node{ value, nullptr, nullptr};
    else
        *tail = (*tail)->next = new Node{ value, *tail, nullptr};
}