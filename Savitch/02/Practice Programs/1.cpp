/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    1.cpp
    Savitch, cap. 2, Practice Programs, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr char yes{ 'y' };
    char input{ yes };
    while (input == yes) {
        cout << "Enter weight of a box in ounces: ";
        double ounces;
        cin >> ounces;
        constexpr double tons_per_ounce{ 35273.92 };
        cout << "Weight in tons: " << tons_per_ounce * ounces <<
                "\nBoxes per tons: " << tons_per_ounce / ounces << '\n';

        cout << "Continue (y/...)? ";
        cin >> input;
    }
}