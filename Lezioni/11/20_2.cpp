/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    18/11/2020

    20_2.cpp
    "Funzioni ricorsive", d. 20, es. 2
*/

#include <iostream>

using namespace std;

// assumo n > 0
void write_vertical(const int);

int main()
{
    constexpr int N{ 12345 };
    cout << "Stampo " << N << " dal basso all'alto:\n";
    write_vertical(N);
}

void write_vertical(const int n)
{
    if (!n)
        return;
    constexpr int base{ 10 };
    cout << n % base << '\n';
    write_vertical(n / base);
}