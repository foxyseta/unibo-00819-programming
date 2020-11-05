/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    35_2.cpp
    "Array", d. 35, es. 2
*/

#include <iostream>

constexpr size_t dim{ 10 };

bool is_empty(const size_t);
bool push(int[], size_t&, const int); // false = buffer overflow prevenuto
bool pop(size_t&); // false = array vuoto

int main()
{
    int v[dim];
    size_t s{ 0 };
    using std::cout;
    int n;
    // Riempimento
    do {
        cout << "Vuoto? " << is_empty(s) << "\nTenta di inserire un numero: ";
        std::cin >> n;
    } while (push(v, s, n));
    cout << "Pila satura. Elementi: ";
    for (size_t i{ 0 }; i < s; ++i)
        cout << ' ' << v[i];
    cout << '\n';
    // Svuotamento
    do {
        cout << "Vuoto? " << is_empty(s) << '\n';
    } while (pop(s));
}

bool is_empty(const size_t size)
{
    return !size;
}

bool push(int vet[], size_t& size, const int value)
{
    if (size >= dim)
        return false;
    vet[size++] = value;
    return true;
}

bool pop(size_t& size)
{
    if (is_empty(size))
        return false;
    --size;
}