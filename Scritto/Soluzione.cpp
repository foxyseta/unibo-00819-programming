/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    17/12/2020

    Soluzione.cpp
    Prova scritta di Programmazione
    Lo stile del codice che segue riflette i
    gusti del docente, non dello studente.
*/

#include <cstring>
#include <iostream>

#define DIM 81

using namespace std;

// es. 1
void es1(int[], int da, int a);

// es. 2
struct regalo;
regalo* es2a(regalo*, char n[], float p, char d[]);
regalo* es2b(regalo*, char []);
float es2c(regalo*, char []);

int main()
{
    // es. 1
    constexpr int N{ 10 };
    int arr[N] = { 6, -5, 5, 9, -1, 3, 2, 2, 3, 9};
    es1(arr, 0, N - 1);
    cout << "Es. 1:";
    for (int i{ 0 }; i < N; ++i)
        cout << ' ' << arr[i];
    cout << '\n';

    // es. 2
    char nome[DIM] = "Peluche",
         destinatario[DIM] = "Lucia";
    regalo* r = es2a(NULL, nome, 17.80, destinatario);
    strcpy(nome, "Vinile");
    strcpy(destinatario, "Antonio");
    r = es2a(r, nome, 30.0, destinatario);
    strcpy(nome, "Pianta");
    strcpy(destinatario, "Lucia");
    r = es2a(r, nome, 10.0, destinatario);
    strcpy(nome, "Cioccolatini");
    strcpy(destinatario, "Lucia");
    r = es2a(r, nome, 12.0, destinatario);
    r = es2b(r, nome);
    cout << "Es. 3: " << es2c(r, destinatario) << '\n';
}

void es1(int vet[], int da, int a)
{
    if (a > da)
    {
        if (vet[da] % 2 == 0) // numero pari: in testa
            da = da + 1;
        else { // numero dispari: in coda
            int t = vet[da];
            vet[da] = vet[a];
            vet[a] = t;
            a = a - 1;
        }
        es1(vet, da, a);
    }
}

struct regalo {
    char nome[DIM];
    float prezzo;
    char destinatario[DIM];
    regalo* next;
};

regalo* es2a(regalo* lista, char n[], float p, char d[])
{
    regalo* res = new regalo;
    strcpy(res->nome, n);
    res->prezzo = p;
    strcpy(res->destinatario, d);
    res->next = lista;
    return res;
}

regalo* es2b(regalo* lista, char n[])
{
    if (lista != NULL) { // nomi uguali
        if (strcmp(lista->nome, n) == 0) {
            regalo* coda = lista->next;
            delete lista;
            return es2b(coda, n);
        }
        // nomi diversi
        lista->next = es2b(lista->next, n);
        return lista;
    }
    return NULL;
}

float es2c(regalo* lista, char d[])
{
    if (lista == NULL)
        return 0.0;
    if (strcmp(lista->destinatario, d) == 0) // destinatari uguali
        return lista->prezzo + es2c(lista->next, d);
    // destinatari diversi
    return es2c(lista->next, d);
}