/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    03/11/2020

    19_4.cpp
    "Strutture", d. 19, es. 4
*/

#include <cstring>
#include <iostream>

using namespace std;

constexpr size_t max_nome{ 30 },
                 max_num{ 30 };

struct Contatto {
    char nome[max_nome],
         num[max_num];
};

size_t inserisci(Contatto agenda[], const size_t n, const size_t max, Contatto nuovo);
size_t ricerca(Contatto agenda[], const size_t n, const char query[]);
size_t elimina(Contatto agenda[], const size_t n);

int main()
{
    constexpr size_t max_contatti{ 100 };
    Contatto rubrica[max_contatti]{};
    size_t n{ 0 };
    n = inserisci(rubrica, n, max_contatti, { "FoxySeta", "+39 123 4567 890" });
    const size_t res{ ricerca(rubrica, n, "FoxySeta") };
    if (res != n)
        cout << "Contatto trovato in posizione: " << res;
    else
        cout << "Contatto non trovato.";
    cout << '\n';
    n = elimina(rubrica, n);
}

size_t inserisci(Contatto agenda[], const size_t n, const size_t max, Contatto nuovo)
{
    if (n >= max)
        return max;
    agenda[n] = nuovo;
    return n + 1;
}

size_t ricerca(Contatto agenda[], const size_t n, const char query[])
{
    for (size_t i{ 0 }; i < n; ++i)
        if (!strcmp(agenda[i].nome, query))
            return i;
    return n;
}

size_t elimina(Contatto agenda[], const size_t n)
{
    return n ? n - 1 : 0;
}
