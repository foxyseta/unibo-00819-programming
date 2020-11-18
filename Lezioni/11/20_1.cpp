/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    20_1.cpp
    "Funzioni ricorsive", d. 20, es. 1
*/

#include <iostream>

using namespace std;

void stampa_n_asterichi(const int);

int main()
{
    constexpr int N{ 10 };
    cout << "Stampo " << N << " asterischi: ";
    stampa_n_asterichi(N);
    cout << '\n';
}

void stampa_n_asterichi(const int n)
{
    if (n < 1)
        return;

    constexpr char asterisco{ '*' };
    cout << asterisco;
    stampa_n_asterichi(n - 1);
}