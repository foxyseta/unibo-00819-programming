/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    26/11/2020

    34_1.cpp
    "Funzioni ricorsive", d. 34, es. 1
*/

#include <iostream>

using namespace std;

bool is_palindrome();

int main()
{
    cout << "Inserisci sequenza dispari con 0 centrale: " <<
            (is_palindrome() ? "Palindroma.\n" :
            "Non palindroma.\n");
}

bool is_palindrome()
{
    int a;
    cin >> a;
    if (!a)
        return true;
    bool is_subseq_palindrome{ is_palindrome() };
    int b;
    cin >> b;
    return is_subseq_palindrome && a == b;
}