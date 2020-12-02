/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    02/12/2020

    18_1.cpp
    "Ereditarietà", d. 18, es. 4
*/

#include <cstring>
#include <iostream>

using namespace std;

class citta {
public:
    citta(const char nome[], const int abitanti);
    void descrizione() const;
    void cambiaAbitanti(const int abitanti);
protected:
    static constexpr size_t dim{ 100 };
private:
    char n[dim];
    int a;
};

class capoluogo: public citta {
public:
    capoluogo(const char nome[], const int abitanti, const char regione[]);
    void descrizione() const;
private:
    char r[dim];
};

class capitale: public capoluogo {
public:
    capitale(const char nome[], const int abitanti,
             const char regione[], const char nazione[]);
    void descrizione() const;
private:
    char na[dim];
};

int main()
{
    citta cesenatico{ "Cesenatico", 25971 };
    cesenatico.descrizione();

    capoluogo bologna{ "Bologna", 390473, "Emilia-Romagna" };
    bologna.descrizione();

    capoluogo torino{ "Torino", 867620, "Piemonte" };
    torino.descrizione();
    
    capitale roma{ "Roma", 2825661, "Lazio", "Italia" };
    roma.descrizione();
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

capoluogo::capoluogo(const char nome[], const int abitanti, const char regione[])
    :citta{ nome, abitanti }
{
    strncpy(r, regione, dim);
}

void capoluogo::descrizione() const
{
    citta::descrizione();
    cout << "Fa da capoluogo alla regione di " << r << ".\n";
}

capitale::capitale(const char nome[], const int abitanti,
             const char regione[], const char nazione[])
    :capoluogo{ nome, abitanti, regione }
{
    strncpy(na, nazione, dim);
}

void capitale::descrizione() const
{
    capoluogo::descrizione();
    cout << "Fa da capitale alla nazione di " << na << ".\n";
}