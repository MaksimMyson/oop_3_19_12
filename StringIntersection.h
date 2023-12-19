#ifndef STRINGINTERSECTION_H
#define STRINGINTERSECTION_H

#include <string>

class StringIntersection {
private:
    std::string str;

public:
    StringIntersection(const std::string& inputStr);

    // Перевантаження оператору множення для знаходження перетину
    StringIntersection operator*(const StringIntersection& other) const;

    // Метод для отримання рядка
    std::string getString() const;

    // Статичний метод для введення рядка з клавіатури
    static StringIntersection inputStringFromConsole();
};

#endif // STRINGINTERSECTION_H