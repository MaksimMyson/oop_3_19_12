#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    int difference(const Date& otherDate) const;
    Date operator+(int days) const;

    
    static Date inputDateFromConsole();
};

#endif // DATE_H

