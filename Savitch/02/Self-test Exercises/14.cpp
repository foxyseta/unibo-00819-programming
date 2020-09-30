/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    30/09/2020

    14.cpp
    Savitch, cap. 2, Self-test Exercises, es. 14
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    constexpr double one{ 1.000 }, two{ 1.414 }, three{ 1.732 },
                     four{ 2.000 }, five{ 2.236 };
    constexpr streamsize precision{ 3 };
    cout << "N\tSquare Root" << fixed << setprecision(precision) <<
        "\n1\t" << one <<
        "\n2\t" << two <<
        "\n3\t" << three <<
        "\n4\t" << four <<
        "\n5\t" << five << '\n';
}