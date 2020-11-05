/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    14/10/2020

    14_2.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 14, es. 2
*/

#include <iostream>

using namespace std;

void print_binary_sum_product();

int main()
{
    print_binary_sum_product();
}

// diverrà più semplice con funzioni non-void e parametri
void print_binary_sum_product()
{
    cout << "Inserisci due numeri binari: ";
    int n, m; // ingannevole, vengono letti in formato decimale
    cin >> n >> m; // assumo solo sequenze di 0 e 1 senza segno
    constexpr int base_binaria{ 2 }, base_decimale{ 10 };
    const int n2{ n }, m2{ m };
    int res{ 0 }, peso{ 1 }, riporto{ 0 };
    
    // somma
    while (n || m || riporto) {
        // somma e riporto
        int s{ n % base_decimale + m % base_decimale + riporto};
        riporto = s >= base_binaria;
        s %= base_binaria;
        res += s * peso;
        // addendi e peso
        n /= base_decimale;
        m /= base_decimale;
        peso *= base_decimale;
    }
    cout << res;

    // prodotto
    n = n2;
    m = m2;
    res = 0;
    int peso_riga{ 1 };
    // senza riporto
    while (m) {
        n = n2;
        peso = peso_riga;
        while (n) {
            // prodotto e riporto
            int p{ n % base_decimale * m % base_decimale };
            res += p * peso;
            // primo fattore e peso
            n /= base_decimale;
            peso *= base_decimale;
        }
        m /= base_decimale;
        peso_riga *= base_decimale;
    }
    // riporto
    riporto = 0;
    peso = 1;
    while (res / peso) {
        riporto = res / peso % base_decimale / base_binaria;
        res -= riporto * peso * base_binaria;
        peso *= base_decimale;
        res += riporto * peso;
    }
    cout << ' ' << res << '\n';
}