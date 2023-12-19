#ifndef STRINGINTERSECTION_H
#define STRINGINTERSECTION_H

#include <string>

class StringIntersection {
private:
    std::string str;

public:
    StringIntersection(const std::string& inputStr);

    // �������������� ��������� �������� ��� ����������� ��������
    StringIntersection operator*(const StringIntersection& other) const;

    // ����� ��� ��������� �����
    std::string getString() const;

    // ��������� ����� ��� �������� ����� � ���������
    static StringIntersection inputStringFromConsole();
};

#endif // STRINGINTERSECTION_H