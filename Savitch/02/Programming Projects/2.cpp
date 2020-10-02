/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    2.cpp
    Savitch, cap. 2, Programming Projects, es. 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the carpet length in meters: ";
    double meters;
    cin >> meters;
    constexpr double dollars_per_meter{ 2.75 },
                     sale_trigger{ 10.0 }, sale{ 0.15 };
    cout << "Cost: ";
    if (meters <= sale_trigger)
        cout << meters * dollars_per_meter;
    else
        cout << (meters - (meters - sale_trigger) * sale) * dollars_per_meter;
    cout << '\n';
}