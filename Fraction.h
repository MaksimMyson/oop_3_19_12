#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int numerator, int denominator);
    void simplify();

    // Перевантаження операторів
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Методи для отримання значень чисельника та знаменника
    int getNumerator() const;
    int getDenominator() const;

    
    void inputFromConsole();
};

#endif // FRACTION_H