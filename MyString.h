#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString {
private:
    std::string data;

public:
    // Конструктор
    MyString(const char* str);

    // Оператор [] для отримання елемента за індексом
    char& operator[](int index);

    // Оператор () для пошуку символа та повернення індексу
    int operator()(char ch) const;

    // Оператор приведення до int, що повертає довжину рядка
    operator int() const;

    // Інші методи, які можуть знадобитися

};

#endif // MYSTRING_H