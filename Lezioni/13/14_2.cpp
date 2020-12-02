/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    02/12/2020

    14_2.cpp
    "Ereditarietà", d. 14, es. 1
*/

#include <cstring>
#include <iostream>

using namespace std;

class persona {
public:
    persona(const char *nome);
    void presentati() const;
protected:
    static constexpr size_t dim{ 100 };
    char nome[dim];
};

class impiegato: public persona {
public:
    impiegato(const char *nome, int reparto, double stipendio);
    void presentati() const;
    void aumento();
private:
    static constexpr double fattore{ 1.05 };
    int reparto{ 1 };
    double stipendio{ 1000.0 };
};

int main()
{
    impiegato i{ "Serafino", 2, 2000.0};
    i.aumento();
    i.presentati();
}

persona::persona(const char *n)
{
    strncpy(nome, n, dim);
}

void persona::presentati() const
{
    cout << "Ciao, mi chiamo " << nome <<".\n";
}

impiegato::impiegato(const char *nome, int reparto, double stipendio)
    :persona{ nome }, reparto{ reparto }, stipendio{ stipendio } { }

void impiegato::presentati() const
{
    persona::presentati();
    cout << "Lavoro nel reparto " << reparto <<
            " e guadagno " << stipendio << "$ al mese.\n";
}

void impiegato::aumento()
{
    stipendio *= fattore;
}