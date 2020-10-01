/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    4.cpp
    Savitch, cap. 2, Practice Programs, es. 4
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello.\n";
    // will be easier with a do... while...
    char input{ '\0' };
    constexpr char yes{ 'y' }, no{ 'n' };
    while (input != yes && input != no) {
        cout << "Are you having a good day (y/n)? ";
        cin >> input;
    }
    if (input == yes)
        cout << "I'm glad to hear that.\n";
    else
        cout << "I hope your day gets better soon.\n";
}