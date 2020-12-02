/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    02/12/2020

    18_1.cpp
    "Ereditarietà", d. 18, es. 1
*/

#include <cstring>
#include <iostream>

using namespace std;

class citta {
public:
    citta(const char nome[], const int abitanti);
    void descrizione() const;
    void cambiaAbitanti(const int abitanti);
private:
    static constexpr size_t dim{ 100 };
    char n[dim];
    int a;
};

int main()
{
    citta lugo{ "Lugo", 2 };
    lugo.cambiaAbitanti(3);
    lugo.descrizione();
}

citta::citta(const char nome[], const int abitanti)
{
    strncpy(n, nome, dim);
    cambiaAbitanti(abitanti);
}

void citta::descrizione() const
{
    cout << n << " ha " << a << " abitanti.\n";
}

void citta::cambiaAbitanti(const int abitanti)
{
    a = abitanti < 0 ? 0 : abitanti;
}