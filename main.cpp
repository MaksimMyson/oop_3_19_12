#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    Fraction fraction1;
    Fraction fraction2;

    cout << "Enter data for Fraction 1:" << endl;
    fraction1.inputFromConsole();

    cout << "\nEnter data for Fraction 2:" << endl;
    fraction2.inputFromConsole();

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    cout << "\nFraction 1: " << fraction1.getNumerator() << "/" << fraction1.getDenominator() << endl;
    cout << "Fraction 2: " << fraction2.getNumerator() << "/" << fraction2.getDenominator() << endl;

    cout << "Sum: " << sum.getNumerator() << "/" << sum.getDenominator() << std::endl;
    cout << "Difference: " << difference.getNumerator() << "/" << difference.getDenominator() << endl;
    cout << "Product: " << product.getNumerator() << "/" << product.getDenominator() << endl;
    cout << "Quotient: " << quotient.getNumerator() << "/" << quotient.getDenominator() << endl;

    return 0;
}