#include "MyString.h"

MyString::MyString(const char* str) : data(str) {}

char& MyString::operator[](int index) {
    // Додайте перевірки на виходження за межі масиву
    return data[index];
}

int MyString::operator()(char ch) const {
    size_t found = data.find(ch);
    if (found != std::string::npos) {
        return static_cast<int>(found);
    }
    else {
        return -1;
    }
}

MyString::operator int() const {
    return static_cast<int>(data.length());
}
