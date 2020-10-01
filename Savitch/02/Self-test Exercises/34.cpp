/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/30/2020

    34.cpp
    Savitch, cap. 2, Self-test Exercises, es. 34
*/

#include <iostream>

using namespace std;

int main()
{
    int i{ 1 };
    constexpr int max{ 20 };
    // diverrà più semplice con for
    while (i <= max)
        cout << i++ << '\n';
}