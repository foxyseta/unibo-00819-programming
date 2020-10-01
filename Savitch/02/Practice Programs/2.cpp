/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    2.cpp
    Savitch, cap. 2, Practice Programs, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter base number and exponent: ";
    double base;
    int exponent;
    cin >> base >> exponent;
    if (!base && !exponent)
        cout << "Zero to the power of zero is an indeterminate form.\n";
    else
    {
        double res{ 1 };
        if (exponent > 0) {
            int i{ 1 };
            while (i++ <= exponent)
                res *= base;
        }
        else {
            int i{ -1 };
            while (i-- >= exponent)
                res /= base;
        }
        cout << "Result: " << res << '\n';
    }
    // will be easier with for loops

}