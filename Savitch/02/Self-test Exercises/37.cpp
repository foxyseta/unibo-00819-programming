/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    37.cpp
    Savitch, cap. 2, Self-test Exercises, es. 37
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of gallons: ";
    double gallons;
    cin >> gallons;
    constexpr double liters_per_gallon{ 3.78533 };
    cout << "Number of liters: " << liters_per_gallon * gallons << '\n';
}