/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    15/10/2020

    48_2.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 48, es. 2
*/

#include <iostream>

using namespace std;

// serie di Mercator; 1.0 è codice d'errore 
double ln(const double);

int main()
{
    cout << "Inserisci l'argomento per la serie di Mercator: ";
    double input;
    cin >> input;
    cout << "Stima del logaritmo naturale: ";
    const double log{ ln(input) };
    if (log == 1.0)
        cout << "non pervenuta";
    else
        cout << log;
    cout << '\n';
}

double ln(const double uno_piu_x)
{
    constexpr double est_inf{ 0.0 }, max{ 2.0 };
    if (uno_piu_x <= est_inf || max < uno_piu_x)
        return 1.0; // input fuori dall'intervallo
    constexpr int n{ 50 };
    double numeratore{ -1.0 }, denominatore{ 0 }, res{ 0 };
    for (int i{ 0 }; i < n; ++i)
        res += (numeratore *= 1 - uno_piu_x) / ++denominatore;
    return res;
}