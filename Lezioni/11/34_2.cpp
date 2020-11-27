/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    26/11/2020

    34_2.cpp
    "Funzioni ricorsive", d. 34, es. 2
*/

#include <cctype>
#include <iostream>

using namespace std;

struct Node {
    char value;
    Node *prev, *next;
};

bool is_palindrome(const char v[], const size_t begin, const size_t end);

int main()
{
    cout << "Inserisci stringa terminante con una non-cifra (ad es. '.'): ";
    const size_t dim{ 100 };
    char array[dim], input{ '\0' };
    size_t n;
    for (n = 0; n < dim; ++n) {
        cin >> input;
        if (input != '.')
            array[n] = input;
        else
            break;
    }
    cout << (is_palindrome(array, 0, n) ? "Palindroma.\n" : "Non palindroma.\n");
}

bool is_palindrome(const char v[], const size_t begin, const size_t end)
{
    if (begin + 1 >= end)
        return true;
    return v[begin] == v[end - 1] && is_palindrome(v, begin + 1, end - 1);
    
}