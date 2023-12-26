#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // ������������
    Complex();
    Complex(double real, double imag);

    // ������� � �������
    double getReal() const;
    double getImag() const;
    void setReal(double real);
    void setImag(double imag);

    // ������������ ���������
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // �������� ������������ ����� � ���������
    friend std::istream& operator>>(std::istream& input, Complex& complex);
};

#endif  // COMPLEX_H