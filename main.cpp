#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date date1 = Date::inputDateFromConsole();
    Date date2 = Date::inputDateFromConsole();

    int daysDifference = date1.difference(date2);
    cout << "Difference between dates: " << daysDifference << " days\n";

    int daysToAdd;
    cout << "Enter the number of days to add: ";
    cin >> daysToAdd;

    Date newDate = date1 + daysToAdd;
    cout << "New date after adding " << daysToAdd << " days: " << newDate.getDay() << "/" << newDate.getMonth() << "/" << newDate.getYear() << "\n";

    return 0;
}

