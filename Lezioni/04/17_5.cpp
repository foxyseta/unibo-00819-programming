/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    17_5.cpp
    "Comandi condizionali e iterativi", d. 17, es. 5
*/

#include <cmath>
#include <iostream>

using namespace std;

// in caso di parità, precedenza all'input meno recente
int main()
{
    cout << "Inserisci quattro interi: ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    const double media{ (static_cast<double>(a) + b + c + d) / 4.0 },
        scarto_a{ abs(a - media) },
        scarto_b{ abs(b - media) },
        scarto_c{ abs(c - media) },
        scarto_d{ abs(d - media) };
    // senza cicli innestati sarebbe più breve, ma meno efficiente
    int output{ a }; // facoltativi, ma...
    double scarto_min{ scarto_a }; // ...rendono il codice più leggibile
    if (scarto_b < scarto_min) {
        output = b;
        scarto_min = scarto_b;
    }
    if (scarto_c < scarto_min) {
        output = c;
        scarto_min = scarto_c;
    }
    if (scarto_d < scarto_min)
        output = d;
    cout << "Risultato: " << output << '\n';
}