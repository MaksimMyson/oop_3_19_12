#include "Array.h"
#include <cstring>

// Constructors
Array::Array(int size) : size(size) {
    elements = new int[size];
    for (int i = 0; i < size; ++i) {
        elements[i] = 0;
    }
}

Array::Array(const Array& other) : size(other.size) {
    elements = new int[size];
    std::memcpy(elements, other.elements, size * sizeof(int));
}

// Деструктор
Array::~Array() {
    delete[] elements;
}

// Пкревантажені оператори
int& Array::operator[](int index) {
    return elements[index];
}

void Array::operator()(int increment) {
    for (int i = 0; i < size; ++i) {
        elements[i] += increment;
    }
}

// Оператори перетворення типів
Array::operator int() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += elements[i];
    }
    return sum;
}

Array::operator char* () const {
    // Визначаємо розмір необхідного буфера
    int bufferSize = 1; // For the null terminator
    for (int i = 0; i < size; ++i) {
        // Визначення кількості символів, необхідних для кожного елемента
        int elementSize = snprintf(nullptr, 0, "%d", elements[i]);
        bufferSize += elementSize + 1; // +1 для пробілу після кожного елемента
    }

    char* str = new char[bufferSize];
    int offset = 0;

    for (int i = 0; i < size; ++i) {
        int written = snprintf(str + offset, bufferSize - offset, "%d ", elements[i]);
        offset += written;
    }

    return str;
}

// Введення елементів з клавіатури
void Array::inputFromKeyboard() {
    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> elements[i];
    }
}