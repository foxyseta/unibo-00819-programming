/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    3.cpp
    Savitch, cap. 2, Practice Programs, es. 3
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter miles per hour: ";
    double miles_per_hour;
    cin >> miles_per_hour;

    constexpr int seconds_per_hour{ 3600 }, seconds_per_minute{ 60 };
    const double seconds_per_mile{ seconds_per_hour / miles_per_hour };
    const int minutes_per_mile{
        static_cast<int>(seconds_per_mile / seconds_per_minute)
    };
    cout << minutes_per_mile << " minutes and " <<
            seconds_per_mile - seconds_per_minute * minutes_per_mile <<
            " seconds\n";
}