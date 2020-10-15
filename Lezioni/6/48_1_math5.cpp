/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    15/10/2020

    48_1_math5.cpp
    "Dichiarazioni, funzioni e passaggio dei parametri", d. 48, es. 1
*/

#include "48_1_math5.h"

namespace math5 {

    int root5(int n)
    {
        bool negativo{ n < 0 };
        if (n < 0)
            n *= -1;
        int res{ 0 };
        while (res * res * res * res * res <= n)
            ++res;
        return (negativo ? -1 : 1) * (res - 1);
    }
    
    int log5(int n)
    {
        if (n <= 0)
            return -1; // logaritmo non definito
        constexpr int base{ 5 };
        int res{ 0 };
        while (n /= base)
            ++res;
        return res;
    }

}