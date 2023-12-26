#include <iostream>
#include "Complex.h"

int main() {
    Complex a, b;

    std::cout << "Enter the first complex number:\n";
    std::cin >> a;

    std::cout << "Enter the second complex number:\n";
    std::cin >> b;

    // Перевантажені оператори для арифметичних операцій
    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    // Виведення результатів
    std::cout << "Sum: " << sum.getReal() << " + " << sum.getImag() << "i\n";
    std::cout << "Difference: " << diff.getReal() << " + " << diff.getImag() << "i\n";
    std::cout << "Product: " << product.getReal() << " + " << product.getImag() << "i\n";
    std::cout << "Quotient: " << quotient.getReal() << " + " << quotient.getImag() << "i\n";

    return 0;
}