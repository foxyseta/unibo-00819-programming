/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    27/11/2020

    16_1.cpp
    "Programmazione onject-oriented", d. 16, es. 1
*/

#include <iostream>

using namespace std;

class Frazione {
public:
    Frazione(const int numeratore, const int denominatore);
    void stampa() const;
    void moltiplica(Frazione f, Frazione g);
    void inverso();
protected:
    int n, d;
    int mcd(int n, int m);
};

int main()
{
    cout << "Inserisci numeratore e denominatore (diverso da 0): ";
    int num, den;
    cin >> num >> den;
    Frazione fra(num, den);
    cout << "Inserisci altro numeratore e altro denominatore (diverso da 0): ";
    cin >> num >> den;
    fra.moltiplica(fra, Frazione(num, den));
    cout << "Prodotto: ";
    fra.stampa();
    cout << "\nReciproco del prodotto (se esiste, altrimenti il prodotto): ";
    fra.inverso();
    fra.stampa();
    cout << '\n';
}

Frazione::Frazione(const int numeratore, const int denominatore)
    :n{ numeratore }, d{ denominatore ? denominatore : 1 } { }

void Frazione::stampa() const
{
    cout << static_cast<double>(n) / d;
}

void Frazione::moltiplica(Frazione f, Frazione g)
{
    n = f.n * g.n;
    d = f.d * g.d;
    const int factor{ mcd(n, d) };
    n /= factor;
    d /= factor;
}

void Frazione::inverso()
{
    if (d) {
        const int t{ n };
        n = d;
        d = t;
    }
}

int Frazione::mcd(int n, int m)
{
    while (n != m)
        if (n < m)
            m -= n;
        else
            n -= m;
    return m;
}