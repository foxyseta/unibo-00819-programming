/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    17/12/2020

    Soluzione.cpp
    Prova scritta di Programmazione
    Lo stile del codice che segue riflette i
    gusti del docente, non dello studente.
*/

#include <cstring>
#include <iostream>

#define DIM 81

using namespace std;

void es1(int vet[], int da, int a)
{
    if (a > da)
    {
        if (vet[da] % 2 == 0) // numero pari: in testa
            da = da + 1;
        else { // numero dispari: in coda
            int t = vet[da];
            vet[da] = vet[a];
            vet[a] = t;
            a = a - 1;
        }
        es1(vet, da, a);
    }
}

struct regalo {
    char nome[DIM];
    float prezzo;
    char destinatario[DIM];
    regalo* next;
};

regalo* es2a(regalo* lista, char n[], float p, char d[])
{
    regalo* res = new regalo;
    strcpy(res->nome, n);
    res->prezzo = p;
    strcpy(res->destinatario, d);
    res->next = lista;
    return res;
}

regalo* es2b(regalo* lista, char n[])
{
    if (lista != NULL) { // nomi uguali
        if (strcmp(lista->nome, n) == 0) {
            regalo* coda = lista->next;
            delete lista;
            return es2b(coda, n);
        }
        // nomi diversi
        lista->next = es2b(lista->next, n);
        return lista;
    }
    return NULL;
}

float es2c(regalo* lista, char d[])
{
    if (lista == NULL)
        return 0.0;
    if (strcmp(lista->destinatario, d) == 0) // destinatari uguali
        return lista->prezzo + es2c(lista->next, d);
    // destinatari diversi
    return es2c(lista->next, d);
}

class Automobile {
protected:
    char modello[DIM];
    float consumo_per_100km;
public:
    Automobile(char m[], float c)
    {
        strcpy(modello, m);
        if (c > 0.0)
            consumo_per_100km = c;
        else
            consumo_per_100km = 1.0; // valore predefinito
    }

    float calcola_consumi(float km)
    {
        if (km < 0.0)
            km = 0.0; // valore predefinito
        return consumo_per_100km / 100.0 * km;
    }

    float calcola_costo(float km, float euro)
    {
        if (euro < 0.0)
            euro = 0.0; // valore predefinito
        return calcola_consumi(km) * euro;
    }
};

class Benzina: public Automobile {
protected:
    float serbatoio; // in litri
public:
    Benzina(char m[], float c, float s) // in litri
        :Automobile(m, c) {
        if (s <= 0.0)
            serbatoio = 1.0; // valore predefinito
        else
            serbatoio = s;
    }

    float calcola_autonomia()
    {
        return serbatoio / consumo_per_100km * 100.0;
    }
};

class Ibrida: public Benzina {
protected:
    float risparmio; // in percentuale
public:
    Ibrida(char m[], float c, float s, float r) // in litri e in percentuale
        :Benzina(m, c, s) {
        if (r <= 0.0 || r >= 100.0)
            risparmio = 50.0; // valore predefinito
        else
            risparmio = r;
    }

    float calcola_consumi(float km)
    {
        return (100.0 - risparmio) / 100.0 * Automobile::calcola_consumi(km);
    }

    float calcola_costo(float km, float euro)
    {
        return (100.0 - risparmio) / 100.0 * Automobile::calcola_costo(km, euro);
    }

    float calcola_autonomia()
    {
        // confronta con versione cartacea
        return 100.0 / (100.0 - risparmio) * Benzina::calcola_autonomia();
    }
};

class Elettrica: public Automobile {
protected:
    float batteria; // in kWh
public:
    Elettrica(char m[], float c, float b) // in kWh
        :Automobile(m, c) {
        if (b <= 0.0)
            batteria = 1.0; // valore predefinito
        else
            batteria = b;
    }

    float calcola_autonomia()
    {
        return batteria / consumo_per_100km * 100.0;
    }
};

int main()
{
    // es. 1
    constexpr int N{ 10 };
    int arr[N] = { 6, -5, 5, 9, -1, 3, 2, 2, 3, 9};
    es1(arr, 0, N - 1);
    cout << "Es. 1:";
    for (int i{ 0 }; i < N; ++i)
        cout << ' ' << arr[i];
    cout << '\n';

    // es. 2
    constexpr int dim{ DIM };
    char nome[dim] = "Peluche",
         destinatario[dim] = "Lucia";
    regalo* r = es2a(nullptr, nome, 17.80, destinatario);
    strcpy(nome, "Vinile");
    strcpy(destinatario, "Antonio");
    r = es2a(r, nome, 30.0, destinatario);
    strcpy(nome, "Pianta");
    strcpy(destinatario, "Lucia");
    r = es2a(r, nome, 10.0, destinatario);
    strcpy(nome, "Cioccolatini");
    strcpy(destinatario, "Lucia");
    r = es2a(r, nome, 12.0, destinatario);
    r = es2b(r, nome);
    cout << "Es. 2: " << es2c(r, destinatario) << '\n';

    // es. 3
    char modello[dim] = "Peppina";
    cout << "Es. 3: " << Ibrida(modello, 100.0, 1.0, 20.0).calcola_autonomia()
         << '\n';
}