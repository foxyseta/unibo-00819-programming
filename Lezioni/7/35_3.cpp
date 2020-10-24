/*
    Università di Bologna
    Corso di laurea in Informatica
    00819 - Programmazione

    Stefano Volpe #969766
    20/10/2020

    35_3.cpp
    "Array", d. 35, es. 3
*/

#include <iostream>

using namespace std;

constexpr size_t L{ 10 };

bool push1(int array[], size_t& size1, size_t& size2, const int value); // false = buffer overflow prevenuto
bool push2(int array[], size_t& size1, size_t& size2, const int value); // false = buffer overflow prevenuto

bool pop1(size_t& size1); // false = array vuoto
bool pop2(size_t& size2); // false = array vuoto

bool is_empty1(const size_t size1);
bool is_empty2(const size_t size2);

int main()
{
    int a[L];
    size_t s1{ 0 }, s2{ 0 };

    push1(a, s1, s2, 0);
    push2(a, s1, s2, 0);

    pop1(s1);
    pop2(s2);

    cout << "Prima pila vuota? " << is_empty1(s1) <<
            "\nSeconda pila vuota? " << is_empty2(s2) << '\n';
}

bool push1(int array[], size_t& size1, size_t& size2, const int value)
{
    if (size1 + size2 >= L)
        return false;
    array[size1++] = value;
    return true;
}

bool push2(int array[], size_t& size1, size_t& size2, const int value)
{
    if (size1 + size2 >= L)
        return false;
    array[L - size2++ - 1] = value;
    return true;
}

bool pop1(size_t& size1)
{
    if (is_empty1(size1))
        return false;
    --size1;
    return true;
}

bool pop2(size_t& size2)
{
    if (is_empty2(size2))
        return false;
    --size2;
    return true;
}

bool is_empty1(const size_t size1)
{
    return !size1;
}

bool is_empty2(const size_t size2)
{
    return !size2;
}