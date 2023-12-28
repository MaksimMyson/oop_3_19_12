#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>

class MyString {
private:
    std::string data;

public:
    // �����������
    MyString(const char* str);

    // �������� [] ��� ��������� �������� �� ��������
    char& operator[](int index);

    // �������� () ��� ������ ������� �� ���������� �������
    int operator()(char ch) const;

    // �������� ���������� �� int, �� ������� ������� �����
    operator int() const;

    // ���� ������, �� ������ �����������

};

#endif // MYSTRING_H