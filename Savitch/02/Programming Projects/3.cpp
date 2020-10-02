/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    3.cpp
    Savitch, cap. 2, Programming Projects, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the carpet length in meters: ";
    double meters;
    cin >> meters;
    cout << "Enter the minimum length of carpet applicable for the discount: ";
    double sale_trigger;
    cin >> sale_trigger;
    cout << "Enter the percent rate of the discount: ";
    double sale;
    cin >> sale;
    cout << "Enter the cost per meter: ";
    double dollars_per_meter;
    cin >> dollars_per_meter;

    cout << "Cost: ";
    constexpr double percentage_to_fraction{ 100.0 };
    if (meters <= sale_trigger)
        cout << meters * dollars_per_meter;
    else
        cout << (meters - (meters - sale_trigger) * sale /
                percentage_to_fraction) * dollars_per_meter;
    cout << '\n';
}