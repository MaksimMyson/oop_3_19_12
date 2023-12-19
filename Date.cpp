#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

int Date::difference(const Date& otherDate) const {
    return (day + month * 30 + year * 365) - (otherDate.getDay() + otherDate.getMonth() * 30 + otherDate.getYear() * 365);
}

Date Date::operator+(int days) const {
    Date result = *this;
    result.day += days;

    while (result.day > 30) {
        result.day -= 30;
        result.month += 1;
        if (result.month > 12) {
            result.month = 1;
            result.year += 1;
        }
    }

    return result;
}

Date Date::inputDateFromConsole() {
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

   cout << "Enter year: ";
   cin >> year;

    return Date(day, month, year);
}

