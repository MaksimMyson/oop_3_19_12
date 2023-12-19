#include "Fraction.h"

using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {
    // Перевірка на 0 в знаменнику і корекція
    if (denominator == 0) {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
        exit(EXIT_FAILURE);
    }

    // Приведення до канонічної форми
    simplify();
}

void Fraction::simplify() {
   
}

Fraction Fraction::operator+(const Fraction& other) const {
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    int newNumerator = numerator * other.denominator - other.numerator * denominator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;

    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        std::cerr << "Error: Cannot divide by zero." << std::endl;
        exit(EXIT_FAILURE);
    }

    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;

    return Fraction(newNumerator, newDenominator);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::inputFromConsole() {
    cout << "Enter the numerator: ";
    cin >> numerator;

    do {
        cout << "Enter the denominator (must be non-zero): ";
        cin >> denominator;
    } while (denominator == 0);

    simplify();
}