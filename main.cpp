#include <iostream>
#include "Array.h"

int main() {
    const int arraySize = 5;
    Array arr(arraySize);

    // �������� �������� ������ � ���������
    arr.inputFromKeyboard();

    // ������� ����� �� ��������� ��������� char*()
    std::cout << "Array elements: " << static_cast<char*>(arr) << "\n";

    // �������� �� �������� �� ��������� operator()
    arr(2);

    // ����������� ������� ����� �� ��������� ��������� char*()
    std::cout << "Modified array elements: " << static_cast<char*>(arr) << "\n";

    // ������� ���� �������� ������ �� ��������� ��������� int()
    std::cout << "Sum of array elements: " << static_cast<int>(arr) << "\n";

    return 0;
}

