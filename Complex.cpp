#include "Complex.h"

// Конструктори
Complex::Complex() : real(0.0), imag(0.0) {}

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

// Геттери і сеттери
double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

void Complex::setReal(double real) {
    this->real = real;
}

void Complex::setImag(double imag) {
    this->imag = imag;
}

// Перевантажені оператори
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    return Complex((real * other.real + imag * other.imag) / denominator,
        (imag * other.real - real * other.imag) / denominator);
}

// Введення комплексного числа з клавіатури
std::istream& operator>>(std::istream& input, Complex& complex) {
    std::cout << "Enter the valid part: ";
    input >> complex.real;
    std::cout << "Enter the imaginary part: ";
    input >> complex.imag;
    return input;
}