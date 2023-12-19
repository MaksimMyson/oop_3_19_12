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

    // �������������� ���������
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // ������ ��� ��������� ������� ���������� �� ����������
    int getNumerator() const;
    int getDenominator() const;

    
    void inputFromConsole();
};

#endif // FRACTION_H