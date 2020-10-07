/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    10/01/2020

    27_5.cpp
    "Comandi condizionali e iterativi", d. 27, es. 5
*/

#include <iostream>

using namespace std;

/*
    Si veda:
    Metodi per il calcolo della radice quadrata. (5 aprile 2020). "Wikipedia,
    L'enciclopedia libera." Tratto il 1 ottobre 2020, 21:21 da
    //it.wikipedia.org/w/index.php?title=Metodi_per_il_calcolo_della_radice_quadrata&oldid=111964896.
*/ 

int main()
{
    cout << "Inserisci un intero n: ";
    int n;
    cin >> n;
    if (n < 0)
        cout << "Le radici di indice pari non sono definite per i numeri negativi.\n";
    else {
        int x{ 0 }, r{ 0 }; // r funge anche da d
        while (n) {
            // 1. Aggiorno r
            constexpr int due_posti{ 100 };
            int gruppo_n{ n }, i{ 1 };
            while (gruppo_n >= due_posti) {
                gruppo_n /= due_posti;
                i *= due_posti;
            }
            n %= i;
            r = due_posti * r + gruppo_n;

            // 2. Aggiorno x
            constexpr int cifra_max{ 9 };
            int d{ cifra_max }, y;
            while ((y = d * (20 * x + d)) > r)
                --d;
            constexpr int un_posto{ 10 };
            x = un_posto * x + d;

            // 3. Detraggo da r
            r -= y;
        }
        cout << "Radice quadrata con l'algoritmo di Bombelli: " <<
                x << ", resto " << r << '\n';
    }
}
