#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
private:
    int* elements;
    int size;

public:
    // Конструктори та деструктор
    Array(int size);
    Array(const Array& other);
    ~Array();

    // Перевантажені оператори
    int& operator[](int index);
    void operator()(int increment);

    // Оператори перетворення типів
    operator int() const;
    operator char* () const;

    // Введення елементів з клавіатури
    void inputFromKeyboard();
};

#endif  // ARRAY_H