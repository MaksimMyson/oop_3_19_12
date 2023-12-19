#include "StringIntersection.h"
#include <algorithm> // для std::remove
#include <iostream>

StringIntersection::StringIntersection(const std::string& inputStr) : str(inputStr) {}

StringIntersection StringIntersection::operator*(const StringIntersection& other) const {
    std::string result = str;

    // Видаляємо символи, які не входять в обидва рядки
    result.erase(std::remove_if(result.begin(), result.end(),
        [&other](char ch) { return other.str.find(ch) == std::string::npos; }),
        result.end());

    return StringIntersection(result);
}

std::string StringIntersection::getString() const {
    return str;
}

StringIntersection StringIntersection::inputStringFromConsole() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::cin >> inputStr;
    return StringIntersection(inputStr);
}