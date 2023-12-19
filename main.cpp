#include <iostream>
#include "StringIntersection.h"

using namespace std;

int main() {
    StringIntersection str1 = StringIntersection::inputStringFromConsole();
    StringIntersection str2 = StringIntersection::inputStringFromConsole();

    StringIntersection intersection = str1 * str2;

    cout << "String 1: " << str1.getString() << endl;
    cout << "String 2: " << str2.getString() << endl;
    cout << "Intersection: " << intersection.getString() << endl;

    return 0;
}