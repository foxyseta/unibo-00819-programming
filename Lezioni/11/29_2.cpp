/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    22/11/2020

    29_2.cpp
    "Funzioni ricorsive", d. 29, es. 2
*/

#include <iostream>

using namespace std;

int somma(int, int);
int prodotto(int, int);

int main()
{
    cout << "Inserisci primo e secondo operando interi: ";
    int a, b;
    cin >> a >> b;
    cout << "Somma: " << somma(a, b) <<
            "\nProdotto: " << prodotto(a, b) << '\n';
}

int somma(int x, int y)
{
    if (!y)
        return x;
    else if (y < 0) {
        return -somma(-x, -y);
    }
    return somma(x + 1, y - 1);
}

int prodotto(int x, int y)
{
    if (!y)
        return 0;
    else if (y < 0) {
        x = -x;
        y = -y;
    }
    return prodotto(x, y - 1) + x;
}