#include "MyString.h"
#include <iostream>

int main() {
    MyString myStr("Hello, World!");

    // Використання оператора []
    std::cout << "Character at index 7: " << myStr[7] << std::endl;

    // Використання оператора ()
    char searchChar = 'W';
    int index = myStr(searchChar);
    if (index != -1) {
        std::cout << "Character '" << searchChar << "' found at index: " << index << std::endl;
    }
    else {
        std::cout << "Character '" << searchChar << "' not found." << std::endl;
    }

    // Використання оператора int
    int length = static_cast<int>(myStr);
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}