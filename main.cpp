#include "MyString.h"
#include <iostream>

int main() {
    MyString myStr("Hello, World!");

    // ������������ ��������� []
    std::cout << "Character at index 7: " << myStr[7] << std::endl;

    // ������������ ��������� ()
    char searchChar = 'W';
    int index = myStr(searchChar);
    if (index != -1) {
        std::cout << "Character '" << searchChar << "' found at index: " << index << std::endl;
    }
    else {
        std::cout << "Character '" << searchChar << "' not found." << std::endl;
    }

    // ������������ ��������� int
    int length = static_cast<int>(myStr);
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}