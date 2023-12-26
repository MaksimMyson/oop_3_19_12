#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
private:
    int* elements;
    int size;

public:
    // ������������ �� ����������
    Array(int size);
    Array(const Array& other);
    ~Array();

    // ������������ ���������
    int& operator[](int index);
    void operator()(int increment);

    // ��������� ������������ ����
    operator int() const;
    operator char* () const;

    // �������� �������� � ���������
    void inputFromKeyboard();
};

#endif  // ARRAY_H