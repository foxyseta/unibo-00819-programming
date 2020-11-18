/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    20_3.cpp
    "Funzioni ricorsive", d. 20, es. 3
*/

#include <iostream>

using namespace std;

/*
    "Scrivere una funzione ricorsiva che prende n e stampa un numero di
    asterischi uguale al quadrato di n (una sola funzione ricorsiva,
    senza usare iterazioni né funzioni di libreria)."
    Assumo che n sia un numero naturale.
*/
void stampa_asterischi_prodotto(const int x, const int y);

/*
    "Scrivere una funzione ricorsiva che prende n e stampa un numero di
    asterischi uguale alla somma dei quadrati dei primi n numeri naturali (una
    sola funzione ricorsiva, senza usare iterazioni né funzioni di libreria)."
    Assumo che n sia un numero naturale. N.B. Escludo 0 (0^2 = 0).
*/
void stampa_asterischi_somma_prodotti(const int k, const int x, const int y);

int main()
{
    cout << "Inserisci n: ";
    int n;
    cin >> n;
    cout << "Stampo " << n << " al quadrato asterischi: ";
    stampa_asterischi_prodotto(n, n);
    cout << "\nStampo la somma dei quadrati dei primi " << n <<
            " numeri naturali: ";
    stampa_asterischi_somma_prodotti(n, n, n);
    cout << '\n';
}

void stampa_asterischi_prodotto(const int x, const int y)
{
    if (x > 0) {
        if (x > 1)
            stampa_asterischi_prodotto(x - 1, y);
        if (y > 0) {
            if (y > 1)
                stampa_asterischi_prodotto(1, y - 1);
            cout << '*';
        }
    }
}

void stampa_asterischi_somma_prodotti(const int k, const int x, const int y)
{
    if (k > 0) {
        if (k > 1)
            stampa_asterischi_somma_prodotti(k - 1, x - 1, y - 1);
        if (x > 0) {
            if (x > 1)
                stampa_asterischi_somma_prodotti(1, x - 1, y);
            if (y > 0) {
                if (y > 1)
                    stampa_asterischi_somma_prodotti(1, 1, y - 1);
                cout << '*';
            }
        }
    }
}