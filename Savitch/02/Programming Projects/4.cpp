/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    4.cpp
    Savitch, cap. 2, Programming Projects, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr char yes{ 'y' };
    char input{ yes };
    while (input == yes) {
        cout << "Enter the amount the consumer needs to receive: ";
        double received;
        cin >> received;
        cout << "Enter the percent interest rate (per year): ";
        double interest_rate;
        cin >> interest_rate;
        cout << "Enter the duration of the loan (in months): ";
        double months;
        cin >> months;

        constexpr double months_to_years{ 12.0 }, percentage_to_units{ 100.0 };
        double face_value{ received / (1.0 - interest_rate
                           * months / percentage_to_units / months_to_years) };
        cout << "Face value: " << face_value << '\n';
        cout << "Monthly payment: " << face_value / months << '\n';

        cout << "Shall I repeat the calculations (y/...)? ";
        cin >> input;
    }
}