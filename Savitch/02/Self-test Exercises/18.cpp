/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    18.cpp
    Savitch, cap. 2, Self-test Exercises, es. 18
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two whole numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "Euclidean quotient: " << a / b <<
            "\nRemainder: " << a % b << '\n';
}