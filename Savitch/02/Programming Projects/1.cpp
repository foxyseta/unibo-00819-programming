/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    01/10/2020

    1.cpp
    Savitch, cap. 2, Programming Projects, es. 1
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr char yes{ 'y' };
    char input{ yes };
    while (input == yes) {
        cout << "Enter the weight (in pounds) at which you will stop dieting: ";
        double dietener_pounds;
        cin >> dietener_pounds;
        constexpr double mouse_sweetener_grams{ 5 }, mouse_grams{ 35 },
                         grams_per_pound{ 454 }, can_grams{ 350 },
                         sweetener_concentration{ 0.001 }; // mass on mass
        cout << "Number of lethal cans: " <<
                dietener_pounds * grams_per_pound * mouse_sweetener_grams / mouse_grams
                / sweetener_concentration / can_grams << '\n';

        cout << "Continue (y/...)? ";
        cin >> input;
    }
}