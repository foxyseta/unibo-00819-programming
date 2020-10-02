/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    5.cpp
    Savitch, cap. 2, Programming Projects, es. 5
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr char yes{ 'y' };
    char input{ yes };
    while (input == yes) {
        cout << "Enter the maximum room capacity: ";
        int capacity;
        cin >> capacity;
        cout << "Enter the number of people attending the meeting: ";
        int people;
        cin >> people;
        if (people <= capacity)
            cout << "It is legal to hold the meeting. Remaining seats: " <<
                capacity - people << ".\n";
        else
            cout << "The meeting cannot be held as planned due to fire "
                "regulations. People to be excluded: at least " <<
                people - capacity << ".\n";
        cout << "Shall I repeat the calculations (y/...)? ";
        cin >> input;
    }
}