#include <iostream>
#include "Array.h"

int main() {
    const int arraySize = 5;
    Array arr(arraySize);

    // Введення елементів масиву з клавіатури
    arr.inputFromKeyboard();

    // Вивести масив за допомогою оператора char*()
    std::cout << "Array elements: " << static_cast<char*>(arr) << "\n";

    // Збільшити всі елементи за допомогою operator()
    arr(2);

    // Надрукувати змінений масив за допомогою оператора char*()
    std::cout << "Modified array elements: " << static_cast<char*>(arr) << "\n";

    // Вивести суму елементів масиву за допомогою оператора int()
    std::cout << "Sum of array elements: " << static_cast<int>(arr) << "\n";

    return 0;
}

