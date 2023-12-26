#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Конструктори
    Complex();
    Complex(double real, double imag);

    // Геттери і сеттери
    double getReal() const;
    double getImag() const;
    void setReal(double real);
    void setImag(double imag);

    // Перевантажені оператори
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // Введення комплексного числа з клавіатури
    friend std::istream& operator>>(std::istream& input, Complex& complex);
};

#endif  // COMPLEX_H